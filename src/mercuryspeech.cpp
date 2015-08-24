#include <mercuryspeech.h>

using namespace std;

vector<string> mercurySpeechList;
vector<string> mercurySpeech;
vector<string> quoteList;

void CSLoad() {
    const char *texts[] = {
    };

    unsigned int size = sizeof(texts) / sizeof(texts[0]);

    for (unsigned int i = 0; i < size; i++)
        mercurySpeechList.push_back(texts[i]);
}
