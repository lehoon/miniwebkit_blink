#include "config.h"
#include "ColorSuggestionPicker.h"
namespace blink {
const char colorSuggestionPickerCss[666] = {
10,98,111,100,121,32,123,10,45,119,101,98,107,105,116,45,117,115,101,114,
45,115,101,108,101,99,116,58,32,110,111,110,101,59,10,98,97,99,107,103,
114,111,117,110,100,45,99,111,108,111,114,58,32,119,104,105,116,101,59,10,
102,111,110,116,58,32,45,119,101,98,107,105,116,45,115,109,97,108,108,45,
99,111,110,116,114,111,108,59,10,109,97,114,103,105,110,58,32,48,59,10,
111,118,101,114,102,108,111,119,58,32,104,105,100,100,101,110,59,10,125,10,
35,109,97,105,110,32,123,10,98,97,99,107,103,114,111,117,110,100,45,99,
111,108,111,114,58,32,119,104,105,116,101,59,10,98,111,114,100,101,114,58,
32,115,111,108,105,100,32,49,112,120,32,35,56,56,57,57,97,97,59,10,
98,111,120,45,115,104,97,100,111,119,58,32,105,110,115,101,116,32,50,112,
120,32,50,112,120,32,50,112,120,32,119,104,105,116,101,44,10,105,110,115,
101,116,32,45,50,112,120,32,45,50,112,120,32,49,112,120,32,114,103,98,
97,40,48,44,48,44,48,44,48,46,49,41,59,10,112,97,100,100,105,110,
103,58,32,54,112,120,59,10,102,108,111,97,116,58,32,108,101,102,116,59,
10,125,10,46,99,111,108,111,114,45,115,119,97,116,99,104,32,123,10,102,
108,111,97,116,58,32,108,101,102,116,59,10,119,105,100,116,104,58,32,50,
48,112,120,59,10,104,101,105,103,104,116,58,32,50,48,112,120,59,10,109,
97,114,103,105,110,58,32,49,112,120,59,10,112,97,100,100,105,110,103,58,
32,48,59,10,98,111,114,100,101,114,58,32,49,112,120,32,115,111,108,105,
100,32,35,101,48,101,48,101,48,59,10,98,111,120,45,115,105,122,105,110,
103,58,32,99,111,110,116,101,110,116,45,98,111,120,59,10,125,10,46,99,
111,108,111,114,45,115,119,97,116,99,104,58,102,111,99,117,115,32,123,10,
98,111,114,100,101,114,58,32,49,112,120,32,115,111,108,105,100,32,35,48,
48,48,48,48,48,59,10,111,117,116,108,105,110,101,58,32,110,111,110,101,
59,10,125,10,46,99,111,108,111,114,45,115,119,97,116,99,104,45,99,111,
110,116,97,105,110,101,114,32,123,10,119,105,100,116,104,58,32,49,48,48,
37,59,10,109,97,120,45,104,101,105,103,104,116,58,32,49,48,52,112,120,
59,10,111,118,101,114,102,108,111,119,58,32,97,117,116,111,59,10,100,105,
115,112,108,97,121,58,32,102,108,101,120,59,10,102,108,101,120,45,102,108,
111,119,58,32,114,111,119,32,119,114,97,112,59,10,97,108,105,103,110,45,
105,116,101,109,115,58,32,99,101,110,116,101,114,59,10,125,10,46,111,116,
104,101,114,45,99,111,108,111,114,32,123,10,119,105,100,116,104,58,32,49,
48,48,37,59,10,109,97,114,103,105,110,58,32,52,112,120,32,48,32,48,
32,48,59,10,125,10};

const char colorSuggestionPickerJs[4136] = {
34,117,115,101,32,115,116,114,105,99,116,34,59,118,97,114,32,103,108,111,
98,97,108,61,123,97,114,103,117,109,101,110,116,115,82,101,99,101,105,118,
101,100,58,102,97,108,115,101,44,112,97,114,97,109,115,58,110,117,108,108,
125,59,102,117,110,99,116,105,111,110,32,104,97,110,100,108,101,77,101,115,
115,97,103,101,40,101,118,101,110,116,41,123,105,110,105,116,105,97,108,105,
122,101,40,74,83,79,78,46,112,97,114,115,101,40,101,118,101,110,116,46,
100,97,116,97,41,41,59,103,108,111,98,97,108,46,97,114,103,117,109,101,
110,116,115,82,101,99,101,105,118,101,100,61,116,114,117,101,59,125,10,102,
117,110,99,116,105,111,110,32,105,110,105,116,105,97,108,105,122,101,40,97,
114,103,115,41,123,103,108,111,98,97,108,46,112,97,114,97,109,115,61,97,
114,103,115,59,118,97,114,32,109,97,105,110,61,36,40,34,109,97,105,110,
34,41,59,109,97,105,110,46,105,110,110,101,114,72,84,77,76,61,34,34,
59,118,97,114,32,101,114,114,111,114,83,116,114,105,110,103,61,118,97,108,
105,100,97,116,101,65,114,103,117,109,101,110,116,115,40,97,114,103,115,41,
59,105,102,40,101,114,114,111,114,83,116,114,105,110,103,41,123,109,97,105,
110,46,116,101,120,116,67,111,110,116,101,110,116,61,34,73,110,116,101,114,
110,97,108,32,101,114,114,111,114,58,32,34,43,101,114,114,111,114,83,116,
114,105,110,103,59,114,101,115,105,122,101,87,105,110,100,111,119,40,109,97,
105,110,46,111,102,102,115,101,116,87,105,100,116,104,44,109,97,105,110,46,
111,102,102,115,101,116,72,101,105,103,104,116,41,59,125,101,108,115,101,10,
110,101,119,32,67,111,108,111,114,80,105,99,107,101,114,40,109,97,105,110,
44,97,114,103,115,41,59,125,10,118,97,114,32,68,101,102,97,117,108,116,
67,111,108,111,114,80,97,108,101,116,116,101,61,91,34,35,48,48,48,48,
48,48,34,44,34,35,52,48,52,48,52,48,34,44,34,35,56,48,56,48,
56,48,34,44,34,35,99,48,99,48,99,48,34,44,34,35,102,102,102,102,
102,102,34,44,34,35,57,56,48,48,48,48,34,44,34,35,102,102,48,48,
48,48,34,44,34,35,102,102,57,57,48,48,34,44,34,35,102,102,102,102,
48,48,34,44,34,35,48,48,102,102,48,48,34,44,34,35,48,48,102,102,
102,102,34,44,34,35,52,97,56,54,101,56,34,44,34,35,48,48,48,48,
102,102,34,44,34,35,57,57,48,48,102,102,34,44,34,35,102,102,48,48,
102,102,34,93,59,102,117,110,99,116,105,111,110,32,104,97,110,100,108,101,
65,114,103,117,109,101,110,116,115,84,105,109,101,111,117,116,40,41,123,105,
102,40,103,108,111,98,97,108,46,97,114,103,117,109,101,110,116,115,82,101,
99,101,105,118,101,100,41,10,114,101,116,117,114,110,59,118,97,114,32,97,
114,103,115,61,123,118,97,108,117,101,115,58,68,101,102,97,117,108,116,67,
111,108,111,114,80,97,108,101,116,116,101,44,111,116,104,101,114,67,111,108,
111,114,76,97,98,101,108,58,34,79,116,104,101,114,46,46,46,34,125,59,
105,110,105,116,105,97,108,105,122,101,40,97,114,103,115,41,59,125,10,102,
117,110,99,116,105,111,110,32,118,97,108,105,100,97,116,101,65,114,103,117,
109,101,110,116,115,40,97,114,103,115,41,123,105,102,40,33,97,114,103,115,
46,118,97,108,117,101,115,41,10,114,101,116,117,114,110,34,78,111,32,118,
97,108,117,101,115,46,34,59,105,102,40,33,97,114,103,115,46,111,116,104,
101,114,67,111,108,111,114,76,97,98,101,108,41,10,114,101,116,117,114,110,
34,78,111,32,111,116,104,101,114,67,111,108,111,114,76,97,98,101,108,46,
34,59,114,101,116,117,114,110,32,110,117,108,108,59,125,10,102,117,110,99,
116,105,111,110,32,67,111,108,111,114,80,105,99,107,101,114,40,101,108,101,
109,101,110,116,44,99,111,110,102,105,103,41,123,80,105,99,107,101,114,46,
99,97,108,108,40,116,104,105,115,44,101,108,101,109,101,110,116,44,99,111,
110,102,105,103,41,59,116,104,105,115,46,95,99,111,110,102,105,103,61,99,
111,110,102,105,103,59,105,102,40,116,104,105,115,46,95,99,111,110,102,105,
103,46,118,97,108,117,101,115,46,108,101,110,103,116,104,61,61,61,48,41,
10,116,104,105,115,46,95,99,111,110,102,105,103,46,118,97,108,117,101,115,
61,68,101,102,97,117,108,116,67,111,108,111,114,80,97,108,101,116,116,101,
59,116,104,105,115,46,95,99,111,110,116,97,105,110,101,114,61,110,117,108,
108,59,116,104,105,115,46,95,108,97,121,111,117,116,40,41,59,100,111,99,
117,109,101,110,116,46,98,111,100,121,46,97,100,100,69,118,101,110,116,76,
105,115,116,101,110,101,114,40,34,107,101,121,100,111,119,110,34,44,116,104,
105,115,46,95,104,97,110,100,108,101,75,101,121,68,111,119,110,46,98,105,
110,100,40,116,104,105,115,41,41,59,116,104,105,115,46,95,101,108,101,109,
101,110,116,46,97,100,100,69,118,101,110,116,76,105,115,116,101,110,101,114,
40,34,109,111,117,115,101,109,111,118,101,34,44,116,104,105,115,46,95,104,
97,110,100,108,101,77,111,117,115,101,77,111,118,101,46,98,105,110,100,40,
116,104,105,115,41,41,59,116,104,105,115,46,95,101,108,101,109,101,110,116,
46,97,100,100,69,118,101,110,116,76,105,115,116,101,110,101,114,40,34,109,
111,117,115,101,100,111,119,110,34,44,116,104,105,115,46,95,104,97,110,100,
108,101,77,111,117,115,101,68,111,119,110,46,98,105,110,100,40,116,104,105,
115,41,41,59,125,10,67,111,108,111,114,80,105,99,107,101,114,46,112,114,
111,116,111,116,121,112,101,61,79,98,106,101,99,116,46,99,114,101,97,116,
101,40,80,105,99,107,101,114,46,112,114,111,116,111,116,121,112,101,41,59,
118,97,114,32,83,119,97,116,99,104,66,111,114,100,101,114,66,111,120,87,
105,100,116,104,61,50,52,59,118,97,114,32,83,119,97,116,99,104,66,111,
114,100,101,114,66,111,120,72,101,105,103,104,116,61,50,52,59,118,97,114,
32,83,119,97,116,99,104,101,115,80,101,114,82,111,119,61,53,59,118,97,
114,32,83,119,97,116,99,104,101,115,77,97,120,82,111,119,61,52,59,67,
111,108,111,114,80,105,99,107,101,114,46,112,114,111,116,111,116,121,112,101,
46,95,108,97,121,111,117,116,61,102,117,110,99,116,105,111,110,40,41,123,
118,97,114,32,99,111,110,116,97,105,110,101,114,61,99,114,101,97,116,101,
69,108,101,109,101,110,116,40,34,100,105,118,34,44,34,99,111,108,111,114,
45,115,119,97,116,99,104,45,99,111,110,116,97,105,110,101,114,34,41,59,
99,111,110,116,97,105,110,101,114,46,97,100,100,69,118,101,110,116,76,105,
115,116,101,110,101,114,40,34,99,108,105,99,107,34,44,116,104,105,115,46,
95,104,97,110,100,108,101,83,119,97,116,99,104,67,108,105,99,107,46,98,
105,110,100,40,116,104,105,115,41,44,102,97,108,115,101,41,59,102,111,114,
40,118,97,114,32,105,61,48,59,105,60,116,104,105,115,46,95,99,111,110,
102,105,103,46,118,97,108,117,101,115,46,108,101,110,103,116,104,59,43,43,
105,41,123,118,97,114,32,115,119,97,116,99,104,61,99,114,101,97,116,101,
69,108,101,109,101,110,116,40,34,98,117,116,116,111,110,34,44,34,99,111,
108,111,114,45,115,119,97,116,99,104,34,41,59,115,119,97,116,99,104,46,
100,97,116,97,115,101,116,46,105,110,100,101,120,61,105,59,115,119,97,116,
99,104,46,100,97,116,97,115,101,116,46,118,97,108,117,101,61,116,104,105,
115,46,95,99,111,110,102,105,103,46,118,97,108,117,101,115,91,105,93,59,
115,119,97,116,99,104,46,116,105,116,108,101,61,116,104,105,115,46,95,99,
111,110,102,105,103,46,118,97,108,117,101,115,91,105,93,59,115,119,97,116,
99,104,46,115,116,121,108,101,46,98,97,99,107,103,114,111,117,110,100,67,
111,108,111,114,61,116,104,105,115,46,95,99,111,110,102,105,103,46,118,97,
108,117,101,115,91,105,93,59,99,111,110,116,97,105,110,101,114,46,97,112,
112,101,110,100,67,104,105,108,100,40,115,119,97,116,99,104,41,59,125,10,
118,97,114,32,99,111,110,116,97,105,110,101,114,87,105,100,116,104,61,83,
119,97,116,99,104,66,111,114,100,101,114,66,111,120,87,105,100,116,104,42,
83,119,97,116,99,104,101,115,80,101,114,82,111,119,59,105,102,40,116,104,
105,115,46,95,99,111,110,102,105,103,46,118,97,108,117,101,115,46,108,101,
110,103,116,104,62,83,119,97,116,99,104,101,115,80,101,114,82,111,119,42,
83,119,97,116,99,104,101,115,77,97,120,82,111,119,41,10,99,111,110,116,
97,105,110,101,114,87,105,100,116,104,43,61,103,101,116,83,99,114,111,108,
108,98,97,114,87,105,100,116,104,40,41,59,99,111,110,116,97,105,110,101,
114,46,115,116,121,108,101,46,119,105,100,116,104,61,99,111,110,116,97,105,
110,101,114,87,105,100,116,104,43,34,112,120,34,59,99,111,110,116,97,105,
110,101,114,46,115,116,121,108,101,46,109,97,120,72,101,105,103,104,116,61,
40,83,119,97,116,99,104,66,111,114,100,101,114,66,111,120,72,101,105,103,
104,116,42,83,119,97,116,99,104,101,115,77,97,120,82,111,119,41,43,34,
112,120,34,59,116,104,105,115,46,95,101,108,101,109,101,110,116,46,97,112,
112,101,110,100,67,104,105,108,100,40,99,111,110,116,97,105,110,101,114,41,
59,118,97,114,32,111,116,104,101,114,66,117,116,116,111,110,61,99,114,101,
97,116,101,69,108,101,109,101,110,116,40,34,98,117,116,116,111,110,34,44,
34,111,116,104,101,114,45,99,111,108,111,114,34,44,116,104,105,115,46,95,
99,111,110,102,105,103,46,111,116,104,101,114,67,111,108,111,114,76,97,98,
101,108,41,59,111,116,104,101,114,66,117,116,116,111,110,46,97,100,100,69,
118,101,110,116,76,105,115,116,101,110,101,114,40,34,99,108,105,99,107,34,
44,116,104,105,115,46,99,104,111,111,115,101,79,116,104,101,114,67,111,108,
111,114,46,98,105,110,100,40,116,104,105,115,41,44,102,97,108,115,101,41,
59,116,104,105,115,46,95,101,108,101,109,101,110,116,46,97,112,112,101,110,
100,67,104,105,108,100,40,111,116,104,101,114,66,117,116,116,111,110,41,59,
116,104,105,115,46,95,99,111,110,116,97,105,110,101,114,61,99,111,110,116,
97,105,110,101,114,59,116,104,105,115,46,95,111,116,104,101,114,66,117,116,
116,111,110,61,111,116,104,101,114,66,117,116,116,111,110,59,118,97,114,32,
101,108,101,109,101,110,116,87,105,100,116,104,61,116,104,105,115,46,95,101,
108,101,109,101,110,116,46,111,102,102,115,101,116,87,105,100,116,104,59,118,
97,114,32,101,108,101,109,101,110,116,72,101,105,103,104,116,61,116,104,105,
115,46,95,101,108,101,109,101,110,116,46,111,102,102,115,101,116,72,101,105,
103,104,116,59,114,101,115,105,122,101,87,105,110,100,111,119,40,101,108,101,
109,101,110,116,87,105,100,116,104,44,101,108,101,109,101,110,116,72,101,105,
103,104,116,41,59,125,59,67,111,108,111,114,80,105,99,107,101,114,46,112,
114,111,116,111,116,121,112,101,46,115,101,108,101,99,116,67,111,108,111,114,
65,116,73,110,100,101,120,61,102,117,110,99,116,105,111,110,40,105,110,100,
101,120,41,123,105,110,100,101,120,61,77,97,116,104,46,109,97,120,40,77,
97,116,104,46,109,105,110,40,116,104,105,115,46,95,99,111,110,116,97,105,
110,101,114,46,99,104,105,108,100,78,111,100,101,115,46,108,101,110,103,116,
104,45,49,44,105,110,100,101,120,41,44,48,41,59,116,104,105,115,46,95,
99,111,110,116,97,105,110,101,114,46,99,104,105,108,100,78,111,100,101,115,
91,105,110,100,101,120,93,46,102,111,99,117,115,40,41,59,125,59,67,111,
108,111,114,80,105,99,107,101,114,46,112,114,111,116,111,116,121,112,101,46,
95,104,97,110,100,108,101,77,111,117,115,101,77,111,118,101,61,102,117,110,
99,116,105,111,110,40,101,118,101,110,116,41,123,105,102,40,101,118,101,110,
116,46,116,97,114,103,101,116,46,99,108,97,115,115,76,105,115,116,46,99,
111,110,116,97,105,110,115,40,34,99,111,108,111,114,45,115,119,97,116,99,
104,34,41,41,10,101,118,101,110,116,46,116,97,114,103,101,116,46,102,111,
99,117,115,40,41,59,125,59,67,111,108,111,114,80,105,99,107,101,114,46,
112,114,111,116,111,116,121,112,101,46,95,104,97,110,100,108,101,77,111,117,
115,101,68,111,119,110,61,102,117,110,99,116,105,111,110,40,101,118,101,110,
116,41,123,105,102,40,101,118,101,110,116,46,116,97,114,103,101,116,46,99,
108,97,115,115,76,105,115,116,46,99,111,110,116,97,105,110,115,40,34,99,
111,108,111,114,45,115,119,97,116,99,104,34,41,41,10,101,118,101,110,116,
46,112,114,101,118,101,110,116,68,101,102,97,117,108,116,40,41,59,125,59,
67,111,108,111,114,80,105,99,107,101,114,46,112,114,111,116,111,116,121,112,
101,46,95,104,97,110,100,108,101,75,101,121,68,111,119,110,61,102,117,110,
99,116,105,111,110,40,101,118,101,110,116,41,123,118,97,114,32,107,101,121,
61,101,118,101,110,116,46,107,101,121,73,100,101,110,116,105,102,105,101,114,
59,105,102,40,107,101,121,61,61,61,34,85,43,48,48,49,66,34,41,10,
116,104,105,115,46,104,97,110,100,108,101,67,97,110,99,101,108,40,41,59,
101,108,115,101,32,105,102,40,107,101,121,61,61,34,76,101,102,116,34,124,
124,107,101,121,61,61,34,85,112,34,124,124,107,101,121,61,61,34,82,105,
103,104,116,34,124,124,107,101,121,61,61,34,68,111,119,110,34,41,123,118,
97,114,32,115,101,108,101,99,116,101,100,69,108,101,109,101,110,116,61,100,
111,99,117,109,101,110,116,46,97,99,116,105,118,101,69,108,101,109,101,110,
116,59,118,97,114,32,105,110,100,101,120,61,48,59,105,102,40,115,101,108,
101,99,116,101,100,69,108,101,109,101,110,116,46,99,108,97,115,115,76,105,
115,116,46,99,111,110,116,97,105,110,115,40,34,111,116,104,101,114,45,99,
111,108,111,114,34,41,41,123,105,102,40,107,101,121,33,61,34,82,105,103,
104,116,34,38,38,107,101,121,33,61,34,85,112,34,41,10,114,101,116,117,
114,110,59,105,110,100,101,120,61,116,104,105,115,46,95,99,111,110,116,97,
105,110,101,114,46,99,104,105,108,100,78,111,100,101,115,46,108,101,110,103,
116,104,45,49,59,125,101,108,115,101,32,105,102,40,115,101,108,101,99,116,
101,100,69,108,101,109,101,110,116,46,99,108,97,115,115,76,105,115,116,46,
99,111,110,116,97,105,110,115,40,34,99,111,108,111,114,45,115,119,97,116,
99,104,34,41,41,123,105,110,100,101,120,61,112,97,114,115,101,73,110,116,
40,115,101,108,101,99,116,101,100,69,108,101,109,101,110,116,46,100,97,116,
97,115,101,116,46,105,110,100,101,120,44,49,48,41,59,115,119,105,116,99,
104,40,107,101,121,41,123,99,97,115,101,34,76,101,102,116,34,58,105,110,
100,101,120,45,45,59,98,114,101,97,107,59,99,97,115,101,34,82,105,103,
104,116,34,58,105,110,100,101,120,43,43,59,98,114,101,97,107,59,99,97,
115,101,34,85,112,34,58,105,110,100,101,120,45,61,83,119,97,116,99,104,
101,115,80,101,114,82,111,119,59,98,114,101,97,107,59,99,97,115,101,34,
68,111,119,110,34,58,105,110,100,101,120,43,61,83,119,97,116,99,104,101,
115,80,101,114,82,111,119,59,98,114,101,97,107,59,125,10,105,102,40,105,
110,100,101,120,62,116,104,105,115,46,95,99,111,110,116,97,105,110,101,114,
46,99,104,105,108,100,78,111,100,101,115,46,108,101,110,103,116,104,45,49,
41,123,116,104,105,115,46,95,111,116,104,101,114,66,117,116,116,111,110,46,
102,111,99,117,115,40,41,59,114,101,116,117,114,110,59,125,125,10,116,104,
105,115,46,115,101,108,101,99,116,67,111,108,111,114,65,116,73,110,100,101,
120,40,105,110,100,101,120,41,59,125,10,101,118,101,110,116,46,112,114,101,
118,101,110,116,68,101,102,97,117,108,116,40,41,59,125,59,67,111,108,111,
114,80,105,99,107,101,114,46,112,114,111,116,111,116,121,112,101,46,95,104,
97,110,100,108,101,83,119,97,116,99,104,67,108,105,99,107,61,102,117,110,
99,116,105,111,110,40,101,118,101,110,116,41,123,105,102,40,101,118,101,110,
116,46,116,97,114,103,101,116,46,99,108,97,115,115,76,105,115,116,46,99,
111,110,116,97,105,110,115,40,34,99,111,108,111,114,45,115,119,97,116,99,
104,34,41,41,10,116,104,105,115,46,115,117,98,109,105,116,86,97,108,117,
101,40,101,118,101,110,116,46,116,97,114,103,101,116,46,100,97,116,97,115,
101,116,46,118,97,108,117,101,41,59,125,59,105,102,40,119,105,110,100,111,
119,46,100,105,97,108,111,103,65,114,103,117,109,101,110,116,115,41,123,105,
110,105,116,105,97,108,105,122,101,40,100,105,97,108,111,103,65,114,103,117,
109,101,110,116,115,41,59,125,101,108,115,101,123,119,105,110,100,111,119,46,
97,100,100,69,118,101,110,116,76,105,115,116,101,110,101,114,40,34,109,101,
115,115,97,103,101,34,44,104,97,110,100,108,101,77,101,115,115,97,103,101,
44,102,97,108,115,101,41,59,119,105,110,100,111,119,46,115,101,116,84,105,
109,101,111,117,116,40,104,97,110,100,108,101,65,114,103,117,109,101,110,116,
115,84,105,109,101,111,117,116,44,49,48,48,48,41,59,125};

}