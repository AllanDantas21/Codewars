#include <vector>
#include <string_view>

std::vector<int> handle_ops(std::string_view data) {
    std::vector<int> result;
    int value = 0;
    
    for(int i = 0; i < (int)data.size(); i++){
        char cmd = data[i];
        
        switch(cmd) {
            case 'i':
                value++;
                break;
            case 'd':
                value--;
                break;
            case 's':
                value *= value;
                break;
            case 'o':
                result.push_back(value);
                break;
            default:
                break;
        }
    }
    return (result);
}

std::vector<int> parse(std::string_view data) {
    return handle_ops(data);
}
