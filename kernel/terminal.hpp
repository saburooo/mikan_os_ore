#include "fat.hpp"
#include "window.hpp"
#include <deque>

class Terminal {
    public:
        static const int kRows = 15, kColumns = 60;
        // 今回は128行まで見れるお
        static const int kLineMax = 128;

        Terminal();
        unsigned int LayerID() const { return layer_id_; }
        Rectangle<int> BlinkCursor();
        Rectangle<int> InputKey(uint8_t modifier, uint8_t keycode, char ascii);

        void Print(const char* s);
        void Print(char c);
        void ExecuteLine();
        void ExecuteFile(const fat::DirectoryEntry& file_entry);

        std::deque<std::array<char, kLineMax>> cmd_history_{};
        int cmd_history_index_{-1};
        Rectangle<int> HistoryUpDown(int direction);

    private:
        std::shared_ptr<ToplevelWindow> window_;
        unsigned int layer_id_;

        Vector2D<int> cursor_{0, 0};
        bool cursor_visible_{false};
        void DrawCursor(bool visible);
        Vector2D<int> CalcCursorPos() const;

        int linebuf_index_{0};
        std::array<char, kLineMax> linebuf_{};
        void Scroll1();
};

void TaskTerminal(uint64_t task_id, int64_t data);