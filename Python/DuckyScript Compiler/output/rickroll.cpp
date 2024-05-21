#define WINVER 0x0500
#include <windows.h>
#ifndef ARRAYSIZE
#define ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#endif

int main()
{
   INPUT shift_down[1] = {};
   shift_down[0].type = INPUT_KEYBOARD;
   shift_down[0].ki.wVk = VK_SHIFT;
   INPUT shift_up[1] = {};
   shift_up[0].type = INPUT_KEYBOARD;
   shift_up[0].ki.wVk = VK_SHIFT;
   shift_up[0].ki.dwFlags = KEYEVENTF_KEYUP;

   INPUT altgr_down[1] = {};
   altgr_down[0].type = INPUT_KEYBOARD;
   altgr_down[0].ki.wVk = VK_RMENU;

   INPUT altgr_up[1] = {};
   altgr_up[0].type = INPUT_KEYBOARD;
   altgr_up[0].ki.wVk = VK_RMENU;
   altgr_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   Sleep(100);
   INPUT inputs1[2] = {};   
   ZeroMemory(inputs1, sizeof(inputs1));
   
   inputs1[0].type = INPUT_KEYBOARD;   
   inputs1[0].ki.wVk = VK_LWIN;
   
   inputs1[1].type = INPUT_KEYBOARD;   
   inputs1[1].ki.wVk = 'R';
   
   SendInput(ARRAYSIZE(inputs1), inputs1, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs2[2] = {};   
   ZeroMemory(inputs2, sizeof(inputs2));
   
   inputs2[0].type = INPUT_KEYBOARD;   
   inputs2[0].ki.wVk = 'R';   
   inputs2[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   inputs2[1].type = INPUT_KEYBOARD;   
   inputs2[1].ki.wVk = VK_LWIN;   
   inputs2[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(ARRAYSIZE(inputs2), inputs2, sizeof(INPUT));

   
   Sleep(100);   
   INPUT inputs5[2] = {};   
   ZeroMemory(inputs5, sizeof(inputs5));
   
   inputs5[0].type = INPUT_KEYBOARD;   
   inputs5[0].ki.wVk = 67;
   
   inputs5[1].type = INPUT_KEYBOARD;   
   inputs5[1].ki.wVk = 67;   
   inputs5[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs5, sizeof(INPUT));
   
   INPUT inputs6[2] = {};   
   ZeroMemory(inputs6, sizeof(inputs6));
   
   inputs6[0].type = INPUT_KEYBOARD;   
   inputs6[0].ki.wVk = 77;
   
   inputs6[1].type = INPUT_KEYBOARD;   
   inputs6[1].ki.wVk = 77;   
   inputs6[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs6, sizeof(INPUT));
   
   INPUT inputs7[2] = {};   
   ZeroMemory(inputs7, sizeof(inputs7));
   
   inputs7[0].type = INPUT_KEYBOARD;   
   inputs7[0].ki.wVk = 68;
   
   inputs7[1].type = INPUT_KEYBOARD;   
   inputs7[1].ki.wVk = 68;   
   inputs7[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs7, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs8[1] = {};   
   ZeroMemory(inputs8, sizeof(inputs8));
   
   inputs8[0].type = INPUT_KEYBOARD;   
   inputs8[0].ki.wVk = VK_RETURN;
   
   SendInput(ARRAYSIZE(inputs8), inputs8, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs9[1] = {};   
   ZeroMemory(inputs9, sizeof(inputs9));
   
   inputs9[0].type = INPUT_KEYBOARD;   
   inputs9[0].ki.wVk = VK_RETURN;   
   inputs9[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(ARRAYSIZE(inputs9), inputs9, sizeof(INPUT));


   
   Sleep(1100);
   
   Sleep(100);   
   INPUT inputs13[2] = {};   
   ZeroMemory(inputs13, sizeof(inputs13));
   
   inputs13[0].type = INPUT_KEYBOARD;   
   inputs13[0].ki.wVk = 69;
   
   inputs13[1].type = INPUT_KEYBOARD;   
   inputs13[1].ki.wVk = 69;   
   inputs13[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs13, sizeof(INPUT));
   
   INPUT inputs14[2] = {};   
   ZeroMemory(inputs14, sizeof(inputs14));
   
   inputs14[0].type = INPUT_KEYBOARD;   
   inputs14[0].ki.wVk = 67;
   
   inputs14[1].type = INPUT_KEYBOARD;   
   inputs14[1].ki.wVk = 67;   
   inputs14[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs14, sizeof(INPUT));
   
   INPUT inputs15[2] = {};   
   ZeroMemory(inputs15, sizeof(inputs15));
   
   inputs15[0].type = INPUT_KEYBOARD;   
   inputs15[0].ki.wVk = 72;
   
   inputs15[1].type = INPUT_KEYBOARD;   
   inputs15[1].ki.wVk = 72;   
   inputs15[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs15, sizeof(INPUT));
   
   INPUT inputs16[2] = {};   
   ZeroMemory(inputs16, sizeof(inputs16));
   
   inputs16[0].type = INPUT_KEYBOARD;   
   inputs16[0].ki.wVk = 79;
   
   inputs16[1].type = INPUT_KEYBOARD;   
   inputs16[1].ki.wVk = 79;   
   inputs16[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs16, sizeof(INPUT));
   
   INPUT inputs17[2] = {};   
   ZeroMemory(inputs17, sizeof(inputs17));
   
   inputs17[0].type = INPUT_KEYBOARD;   
   inputs17[0].ki.wVk = 32;
   
   inputs17[1].type = INPUT_KEYBOARD;   
   inputs17[1].ki.wVk = 32;   
   inputs17[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs17, sizeof(INPUT));
   
   INPUT inputs18[2] = {};   
   ZeroMemory(inputs18, sizeof(inputs18));
   
   inputs18[0].type = INPUT_KEYBOARD;   
   inputs18[0].ki.wVk = 65;
   
   inputs18[1].type = INPUT_KEYBOARD;   
   inputs18[1].ki.wVk = 65;   
   inputs18[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs18, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs19[2] = {};   
   ZeroMemory(inputs19, sizeof(inputs19));
   
   inputs19[0].type = INPUT_KEYBOARD;   
   inputs19[0].ki.wVk = 68;
   
   inputs19[1].type = INPUT_KEYBOARD;   
   inputs19[1].ki.wVk = 68;   
   inputs19[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs19, sizeof(INPUT));
   
   INPUT inputs20[2] = {};   
   ZeroMemory(inputs20, sizeof(inputs20));
   
   inputs20[0].type = INPUT_KEYBOARD;   
   inputs20[0].ki.wVk = 68;
   
   inputs20[1].type = INPUT_KEYBOARD;   
   inputs20[1].ki.wVk = 68;   
   inputs20[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs20, sizeof(INPUT));
   
   INPUT inputs21[2] = {};   
   ZeroMemory(inputs21, sizeof(inputs21));
   
   inputs21[0].type = INPUT_KEYBOARD;   
   inputs21[0].ki.wVk = 189;
   
   inputs21[1].type = INPUT_KEYBOARD;   
   inputs21[1].ki.wVk = 189;   
   inputs21[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs21, sizeof(INPUT));
   
   INPUT inputs22[2] = {};   
   ZeroMemory(inputs22, sizeof(inputs22));
   
   inputs22[0].type = INPUT_KEYBOARD;   
   inputs22[0].ki.wVk = 84;
   
   inputs22[1].type = INPUT_KEYBOARD;   
   inputs22[1].ki.wVk = 84;   
   inputs22[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs22, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs23[2] = {};   
   ZeroMemory(inputs23, sizeof(inputs23));
   
   inputs23[0].type = INPUT_KEYBOARD;   
   inputs23[0].ki.wVk = 89;
   
   inputs23[1].type = INPUT_KEYBOARD;   
   inputs23[1].ki.wVk = 89;   
   inputs23[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs23, sizeof(INPUT));
   
   INPUT inputs24[2] = {};   
   ZeroMemory(inputs24, sizeof(inputs24));
   
   inputs24[0].type = INPUT_KEYBOARD;   
   inputs24[0].ki.wVk = 80;
   
   inputs24[1].type = INPUT_KEYBOARD;   
   inputs24[1].ki.wVk = 80;   
   inputs24[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs24, sizeof(INPUT));
   
   INPUT inputs25[2] = {};   
   ZeroMemory(inputs25, sizeof(inputs25));
   
   inputs25[0].type = INPUT_KEYBOARD;   
   inputs25[0].ki.wVk = 69;
   
   inputs25[1].type = INPUT_KEYBOARD;   
   inputs25[1].ki.wVk = 69;   
   inputs25[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs25, sizeof(INPUT));
   
   INPUT inputs26[2] = {};   
   ZeroMemory(inputs26, sizeof(inputs26));
   
   inputs26[0].type = INPUT_KEYBOARD;   
   inputs26[0].ki.wVk = 32;
   
   inputs26[1].type = INPUT_KEYBOARD;   
   inputs26[1].ki.wVk = 32;   
   inputs26[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs26, sizeof(INPUT));
   
   INPUT inputs27[2] = {};   
   ZeroMemory(inputs27, sizeof(inputs27));
   
   inputs27[0].type = INPUT_KEYBOARD;   
   inputs27[0].ki.wVk = 189;
   
   inputs27[1].type = INPUT_KEYBOARD;   
   inputs27[1].ki.wVk = 189;   
   inputs27[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs27, sizeof(INPUT));
   
   INPUT inputs28[2] = {};   
   ZeroMemory(inputs28, sizeof(inputs28));
   
   inputs28[0].type = INPUT_KEYBOARD;   
   inputs28[0].ki.wVk = 84;
   
   inputs28[1].type = INPUT_KEYBOARD;   
   inputs28[1].ki.wVk = 84;   
   inputs28[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs28, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs29[2] = {};   
   ZeroMemory(inputs29, sizeof(inputs29));
   
   inputs29[0].type = INPUT_KEYBOARD;   
   inputs29[0].ki.wVk = 89;
   
   inputs29[1].type = INPUT_KEYBOARD;   
   inputs29[1].ki.wVk = 89;   
   inputs29[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs29, sizeof(INPUT));
   
   INPUT inputs30[2] = {};   
   ZeroMemory(inputs30, sizeof(inputs30));
   
   inputs30[0].type = INPUT_KEYBOARD;   
   inputs30[0].ki.wVk = 80;
   
   inputs30[1].type = INPUT_KEYBOARD;   
   inputs30[1].ki.wVk = 80;   
   inputs30[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs30, sizeof(INPUT));
   
   INPUT inputs31[2] = {};   
   ZeroMemory(inputs31, sizeof(inputs31));
   
   inputs31[0].type = INPUT_KEYBOARD;   
   inputs31[0].ki.wVk = 69;
   
   inputs31[1].type = INPUT_KEYBOARD;   
   inputs31[1].ki.wVk = 69;   
   inputs31[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs31, sizeof(INPUT));
   
   INPUT inputs32[2] = {};   
   ZeroMemory(inputs32, sizeof(inputs32));
   
   inputs32[0].type = INPUT_KEYBOARD;   
   inputs32[0].ki.wVk = 68;
   
   inputs32[1].type = INPUT_KEYBOARD;   
   inputs32[1].ki.wVk = 68;   
   inputs32[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs32, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs33[2] = {};   
   ZeroMemory(inputs33, sizeof(inputs33));
   
   inputs33[0].type = INPUT_KEYBOARD;   
   inputs33[0].ki.wVk = 69;
   
   inputs33[1].type = INPUT_KEYBOARD;   
   inputs33[1].ki.wVk = 69;   
   inputs33[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs33, sizeof(INPUT));
   
   INPUT inputs34[2] = {};   
   ZeroMemory(inputs34, sizeof(inputs34));
   
   inputs34[0].type = INPUT_KEYBOARD;   
   inputs34[0].ki.wVk = 70;
   
   inputs34[1].type = INPUT_KEYBOARD;   
   inputs34[1].ki.wVk = 70;   
   inputs34[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs34, sizeof(INPUT));
   
   INPUT inputs35[2] = {};   
   ZeroMemory(inputs35, sizeof(inputs35));
   
   inputs35[0].type = INPUT_KEYBOARD;   
   inputs35[0].ki.wVk = 73;
   
   inputs35[1].type = INPUT_KEYBOARD;   
   inputs35[1].ki.wVk = 73;   
   inputs35[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs35, sizeof(INPUT));
   
   INPUT inputs36[2] = {};   
   ZeroMemory(inputs36, sizeof(inputs36));
   
   inputs36[0].type = INPUT_KEYBOARD;   
   inputs36[0].ki.wVk = 78;
   
   inputs36[1].type = INPUT_KEYBOARD;   
   inputs36[1].ki.wVk = 78;   
   inputs36[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs36, sizeof(INPUT));
   
   INPUT inputs37[2] = {};   
   ZeroMemory(inputs37, sizeof(inputs37));
   
   inputs37[0].type = INPUT_KEYBOARD;   
   inputs37[0].ki.wVk = 73;
   
   inputs37[1].type = INPUT_KEYBOARD;   
   inputs37[1].ki.wVk = 73;   
   inputs37[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs37, sizeof(INPUT));
   
   INPUT inputs38[2] = {};   
   ZeroMemory(inputs38, sizeof(inputs38));
   
   inputs38[0].type = INPUT_KEYBOARD;   
   inputs38[0].ki.wVk = 84;
   
   inputs38[1].type = INPUT_KEYBOARD;   
   inputs38[1].ki.wVk = 84;   
   inputs38[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs38, sizeof(INPUT));
   
   INPUT inputs39[2] = {};   
   ZeroMemory(inputs39, sizeof(inputs39));
   
   inputs39[0].type = INPUT_KEYBOARD;   
   inputs39[0].ki.wVk = 73;
   
   inputs39[1].type = INPUT_KEYBOARD;   
   inputs39[1].ki.wVk = 73;   
   inputs39[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs39, sizeof(INPUT));
   
   INPUT inputs40[2] = {};   
   ZeroMemory(inputs40, sizeof(inputs40));
   
   inputs40[0].type = INPUT_KEYBOARD;   
   inputs40[0].ki.wVk = 79;
   
   inputs40[1].type = INPUT_KEYBOARD;   
   inputs40[1].ki.wVk = 79;   
   inputs40[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs40, sizeof(INPUT));
   
   INPUT inputs41[2] = {};   
   ZeroMemory(inputs41, sizeof(inputs41));
   
   inputs41[0].type = INPUT_KEYBOARD;   
   inputs41[0].ki.wVk = 78;
   
   inputs41[1].type = INPUT_KEYBOARD;   
   inputs41[1].ki.wVk = 78;   
   inputs41[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs41, sizeof(INPUT));
   
   INPUT inputs42[2] = {};   
   ZeroMemory(inputs42, sizeof(inputs42));
   
   inputs42[0].type = INPUT_KEYBOARD;   
   inputs42[0].ki.wVk = 32;
   
   inputs42[1].type = INPUT_KEYBOARD;   
   inputs42[1].ki.wVk = 32;   
   inputs42[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs42, sizeof(INPUT));
   
   INPUT inputs43[2] = {};   
   ZeroMemory(inputs43, sizeof(inputs43));
   
   inputs43[0].type = INPUT_KEYBOARD;   
   inputs43[0].ki.wVk = 86;
   
   inputs43[1].type = INPUT_KEYBOARD;   
   inputs43[1].ki.wVk = 86;   
   inputs43[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs43, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs44[2] = {};   
   ZeroMemory(inputs44, sizeof(inputs44));
   
   inputs44[0].type = INPUT_KEYBOARD;   
   inputs44[0].ki.wVk = 51;
   
   inputs44[1].type = INPUT_KEYBOARD;   
   inputs44[1].ki.wVk = 51;   
   inputs44[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs44, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs45[2] = {};   
   ZeroMemory(inputs45, sizeof(inputs45));
   
   inputs45[0].type = INPUT_KEYBOARD;   
   inputs45[0].ki.wVk = 50;
   
   inputs45[1].type = INPUT_KEYBOARD;   
   inputs45[1].ki.wVk = 50;   
   inputs45[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs45, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs46[2] = {};   
   ZeroMemory(inputs46, sizeof(inputs46));
   
   inputs46[0].type = INPUT_KEYBOARD;   
   inputs46[0].ki.wVk = 32;
   
   inputs46[1].type = INPUT_KEYBOARD;   
   inputs46[1].ki.wVk = 32;   
   inputs46[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs46, sizeof(INPUT));
   
   INPUT inputs47[2] = {};   
   ZeroMemory(inputs47, sizeof(inputs47));
   
   inputs47[0].type = INPUT_KEYBOARD;   
   inputs47[0].ki.wVk = 190;
   
   inputs47[1].type = INPUT_KEYBOARD;   
   inputs47[1].ki.wVk = 190;   
   inputs47[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs47, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs48[2] = {};   
   ZeroMemory(inputs48, sizeof(inputs48));
   
   inputs48[0].type = INPUT_KEYBOARD;   
   inputs48[0].ki.wVk = 32;
   
   inputs48[1].type = INPUT_KEYBOARD;   
   inputs48[1].ki.wVk = 32;   
   inputs48[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs48, sizeof(INPUT));
   
   INPUT inputs49[2] = {};   
   ZeroMemory(inputs49, sizeof(inputs49));
   
   inputs49[0].type = INPUT_KEYBOARD;   
   inputs49[0].ki.wVk = 86;
   
   inputs49[1].type = INPUT_KEYBOARD;   
   inputs49[1].ki.wVk = 86;   
   inputs49[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs49, sizeof(INPUT));
   
   INPUT inputs50[2] = {};   
   ZeroMemory(inputs50, sizeof(inputs50));
   
   inputs50[0].type = INPUT_KEYBOARD;   
   inputs50[0].ki.wVk = 79;
   
   inputs50[1].type = INPUT_KEYBOARD;   
   inputs50[1].ki.wVk = 79;   
   inputs50[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs50, sizeof(INPUT));
   
   INPUT inputs51[2] = {};   
   ZeroMemory(inputs51, sizeof(inputs51));
   
   inputs51[0].type = INPUT_KEYBOARD;   
   inputs51[0].ki.wVk = 76;
   
   inputs51[1].type = INPUT_KEYBOARD;   
   inputs51[1].ki.wVk = 76;   
   inputs51[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs51, sizeof(INPUT));
   
   INPUT inputs52[2] = {};   
   ZeroMemory(inputs52, sizeof(inputs52));
   
   inputs52[0].type = INPUT_KEYBOARD;   
   inputs52[0].ki.wVk = 85;
   
   inputs52[1].type = INPUT_KEYBOARD;   
   inputs52[1].ki.wVk = 85;   
   inputs52[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs52, sizeof(INPUT));
   
   INPUT inputs53[2] = {};   
   ZeroMemory(inputs53, sizeof(inputs53));
   
   inputs53[0].type = INPUT_KEYBOARD;   
   inputs53[0].ki.wVk = 80;
   
   inputs53[1].type = INPUT_KEYBOARD;   
   inputs53[1].ki.wVk = 80;   
   inputs53[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs53, sizeof(INPUT));
   
   INPUT inputs54[2] = {};   
   ZeroMemory(inputs54, sizeof(inputs54));
   
   inputs54[0].type = INPUT_KEYBOARD;   
   inputs54[0].ki.wVk = 190;
   
   inputs54[1].type = INPUT_KEYBOARD;   
   inputs54[1].ki.wVk = 190;   
   inputs54[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs54, sizeof(INPUT));
   
   INPUT inputs55[2] = {};   
   ZeroMemory(inputs55, sizeof(inputs55));
   
   inputs55[0].type = INPUT_KEYBOARD;   
   inputs55[0].ki.wVk = 80;
   
   inputs55[1].type = INPUT_KEYBOARD;   
   inputs55[1].ki.wVk = 80;   
   inputs55[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs55, sizeof(INPUT));
   
   INPUT inputs56[2] = {};   
   ZeroMemory(inputs56, sizeof(inputs56));
   
   inputs56[0].type = INPUT_KEYBOARD;   
   inputs56[0].ki.wVk = 83;
   
   inputs56[1].type = INPUT_KEYBOARD;   
   inputs56[1].ki.wVk = 83;   
   inputs56[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs56, sizeof(INPUT));
   
   INPUT inputs57[2] = {};   
   ZeroMemory(inputs57, sizeof(inputs57));
   
   inputs57[0].type = INPUT_KEYBOARD;   
   inputs57[0].ki.wVk = 49;
   
   inputs57[1].type = INPUT_KEYBOARD;   
   inputs57[1].ki.wVk = 49;   
   inputs57[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs57, sizeof(INPUT));
   
   INPUT inputs58[2] = {};   
   ZeroMemory(inputs58, sizeof(inputs58));
   
   inputs58[0].type = INPUT_KEYBOARD;   
   inputs58[0].ki.wVk = 32;
   
   inputs58[1].type = INPUT_KEYBOARD;   
   inputs58[1].ki.wVk = 32;   
   inputs58[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs58, sizeof(INPUT));
   
   INPUT inputs59[2] = {};   
   ZeroMemory(inputs59, sizeof(inputs59));
   
   inputs59[0].type = INPUT_KEYBOARD;   
   inputs59[0].ki.wVk = 54;
   
   inputs59[1].type = INPUT_KEYBOARD;   
   inputs59[1].ki.wVk = 54;   
   inputs59[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs59, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs60[2] = {};   
   ZeroMemory(inputs60, sizeof(inputs60));
   
   inputs60[0].type = INPUT_KEYBOARD;   
   inputs60[0].ki.wVk = 32;
   
   inputs60[1].type = INPUT_KEYBOARD;   
   inputs60[1].ki.wVk = 32;   
   inputs60[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs60, sizeof(INPUT));
   
   INPUT inputs61[2] = {};   
   ZeroMemory(inputs61, sizeof(inputs61));
   
   inputs61[0].type = INPUT_KEYBOARD;   
   inputs61[0].ki.wVk = 69;
   
   inputs61[1].type = INPUT_KEYBOARD;   
   inputs61[1].ki.wVk = 69;   
   inputs61[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs61, sizeof(INPUT));
   
   INPUT inputs62[2] = {};   
   ZeroMemory(inputs62, sizeof(inputs62));
   
   inputs62[0].type = INPUT_KEYBOARD;   
   inputs62[0].ki.wVk = 67;
   
   inputs62[1].type = INPUT_KEYBOARD;   
   inputs62[1].ki.wVk = 67;   
   inputs62[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs62, sizeof(INPUT));
   
   INPUT inputs63[2] = {};   
   ZeroMemory(inputs63, sizeof(inputs63));
   
   inputs63[0].type = INPUT_KEYBOARD;   
   inputs63[0].ki.wVk = 72;
   
   inputs63[1].type = INPUT_KEYBOARD;   
   inputs63[1].ki.wVk = 72;   
   inputs63[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs63, sizeof(INPUT));
   
   INPUT inputs64[2] = {};   
   ZeroMemory(inputs64, sizeof(inputs64));
   
   inputs64[0].type = INPUT_KEYBOARD;   
   inputs64[0].ki.wVk = 79;
   
   inputs64[1].type = INPUT_KEYBOARD;   
   inputs64[1].ki.wVk = 79;   
   inputs64[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs64, sizeof(INPUT));
   
   INPUT inputs65[2] = {};   
   ZeroMemory(inputs65, sizeof(inputs65));
   
   inputs65[0].type = INPUT_KEYBOARD;   
   inputs65[0].ki.wVk = 32;
   
   inputs65[1].type = INPUT_KEYBOARD;   
   inputs65[1].ki.wVk = 32;   
   inputs65[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs65, sizeof(INPUT));
   
   INPUT inputs66[2] = {};   
   ZeroMemory(inputs66, sizeof(inputs66));
   
   inputs66[0].type = INPUT_KEYBOARD;   
   inputs66[0].ki.wVk = 85;
   
   inputs66[1].type = INPUT_KEYBOARD;   
   inputs66[1].ki.wVk = 85;   
   inputs66[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs66, sizeof(INPUT));
   
   INPUT inputs67[2] = {};   
   ZeroMemory(inputs67, sizeof(inputs67));
   
   inputs67[0].type = INPUT_KEYBOARD;   
   inputs67[0].ki.wVk = 83;
   
   inputs67[1].type = INPUT_KEYBOARD;   
   inputs67[1].ki.wVk = 83;   
   inputs67[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs67, sizeof(INPUT));
   
   INPUT inputs68[2] = {};   
   ZeroMemory(inputs68, sizeof(inputs68));
   
   inputs68[0].type = INPUT_KEYBOARD;   
   inputs68[0].ki.wVk = 73;
   
   inputs68[1].type = INPUT_KEYBOARD;   
   inputs68[1].ki.wVk = 73;   
   inputs68[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs68, sizeof(INPUT));
   
   INPUT inputs69[2] = {};   
   ZeroMemory(inputs69, sizeof(inputs69));
   
   inputs69[0].type = INPUT_KEYBOARD;   
   inputs69[0].ki.wVk = 78;
   
   inputs69[1].type = INPUT_KEYBOARD;   
   inputs69[1].ki.wVk = 78;   
   inputs69[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs69, sizeof(INPUT));
   
   INPUT inputs70[2] = {};   
   ZeroMemory(inputs70, sizeof(inputs70));
   
   inputs70[0].type = INPUT_KEYBOARD;   
   inputs70[0].ki.wVk = 71;
   
   inputs70[1].type = INPUT_KEYBOARD;   
   inputs70[1].ki.wVk = 71;   
   inputs70[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs70, sizeof(INPUT));
   
   INPUT inputs71[2] = {};   
   ZeroMemory(inputs71, sizeof(inputs71));
   
   inputs71[0].type = INPUT_KEYBOARD;   
   inputs71[0].ki.wVk = 32;
   
   inputs71[1].type = INPUT_KEYBOARD;   
   inputs71[1].ki.wVk = 32;   
   inputs71[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs71, sizeof(INPUT));
   
   INPUT inputs72[2] = {};   
   ZeroMemory(inputs72, sizeof(inputs72));
   
   inputs72[0].type = INPUT_KEYBOARD;   
   inputs72[0].ki.wVk = 83;
   
   inputs72[1].type = INPUT_KEYBOARD;   
   inputs72[1].ki.wVk = 83;   
   inputs72[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs72, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs73[2] = {};   
   ZeroMemory(inputs73, sizeof(inputs73));
   
   inputs73[0].type = INPUT_KEYBOARD;   
   inputs73[0].ki.wVk = 89;
   
   inputs73[1].type = INPUT_KEYBOARD;   
   inputs73[1].ki.wVk = 89;   
   inputs73[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs73, sizeof(INPUT));
   
   INPUT inputs74[2] = {};   
   ZeroMemory(inputs74, sizeof(inputs74));
   
   inputs74[0].type = INPUT_KEYBOARD;   
   inputs74[0].ki.wVk = 83;
   
   inputs74[1].type = INPUT_KEYBOARD;   
   inputs74[1].ki.wVk = 83;   
   inputs74[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs74, sizeof(INPUT));
   
   INPUT inputs75[2] = {};   
   ZeroMemory(inputs75, sizeof(inputs75));
   
   inputs75[0].type = INPUT_KEYBOARD;   
   inputs75[0].ki.wVk = 84;
   
   inputs75[1].type = INPUT_KEYBOARD;   
   inputs75[1].ki.wVk = 84;   
   inputs75[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs75, sizeof(INPUT));
   
   INPUT inputs76[2] = {};   
   ZeroMemory(inputs76, sizeof(inputs76));
   
   inputs76[0].type = INPUT_KEYBOARD;   
   inputs76[0].ki.wVk = 69;
   
   inputs76[1].type = INPUT_KEYBOARD;   
   inputs76[1].ki.wVk = 69;   
   inputs76[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs76, sizeof(INPUT));
   
   INPUT inputs77[2] = {};   
   ZeroMemory(inputs77, sizeof(inputs77));
   
   inputs77[0].type = INPUT_KEYBOARD;   
   inputs77[0].ki.wVk = 77;
   
   inputs77[1].type = INPUT_KEYBOARD;   
   inputs77[1].ki.wVk = 77;   
   inputs77[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs77, sizeof(INPUT));
   
   INPUT inputs78[2] = {};   
   ZeroMemory(inputs78, sizeof(inputs78));
   
   inputs78[0].type = INPUT_KEYBOARD;   
   inputs78[0].ki.wVk = 188;
   
   inputs78[1].type = INPUT_KEYBOARD;   
   inputs78[1].ki.wVk = 188;   
   inputs78[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs78, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs79[2] = {};   
   ZeroMemory(inputs79, sizeof(inputs79));
   
   inputs79[0].type = INPUT_KEYBOARD;   
   inputs79[0].ki.wVk = 32;
   
   inputs79[1].type = INPUT_KEYBOARD;   
   inputs79[1].ki.wVk = 32;   
   inputs79[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs79, sizeof(INPUT));
   
   INPUT inputs80[2] = {};   
   ZeroMemory(inputs80, sizeof(inputs80));
   
   inputs80[0].type = INPUT_KEYBOARD;   
   inputs80[0].ki.wVk = 85;
   
   inputs80[1].type = INPUT_KEYBOARD;   
   inputs80[1].ki.wVk = 85;   
   inputs80[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs80, sizeof(INPUT));
   
   INPUT inputs81[2] = {};   
   ZeroMemory(inputs81, sizeof(inputs81));
   
   inputs81[0].type = INPUT_KEYBOARD;   
   inputs81[0].ki.wVk = 83;
   
   inputs81[1].type = INPUT_KEYBOARD;   
   inputs81[1].ki.wVk = 83;   
   inputs81[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs81, sizeof(INPUT));
   
   INPUT inputs82[2] = {};   
   ZeroMemory(inputs82, sizeof(inputs82));
   
   inputs82[0].type = INPUT_KEYBOARD;   
   inputs82[0].ki.wVk = 73;
   
   inputs82[1].type = INPUT_KEYBOARD;   
   inputs82[1].ki.wVk = 73;   
   inputs82[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs82, sizeof(INPUT));
   
   INPUT inputs83[2] = {};   
   ZeroMemory(inputs83, sizeof(inputs83));
   
   inputs83[0].type = INPUT_KEYBOARD;   
   inputs83[0].ki.wVk = 78;
   
   inputs83[1].type = INPUT_KEYBOARD;   
   inputs83[1].ki.wVk = 78;   
   inputs83[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs83, sizeof(INPUT));
   
   INPUT inputs84[2] = {};   
   ZeroMemory(inputs84, sizeof(inputs84));
   
   inputs84[0].type = INPUT_KEYBOARD;   
   inputs84[0].ki.wVk = 71;
   
   inputs84[1].type = INPUT_KEYBOARD;   
   inputs84[1].ki.wVk = 71;   
   inputs84[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs84, sizeof(INPUT));
   
   INPUT inputs85[2] = {};   
   ZeroMemory(inputs85, sizeof(inputs85));
   
   inputs85[0].type = INPUT_KEYBOARD;   
   inputs85[0].ki.wVk = 32;
   
   inputs85[1].type = INPUT_KEYBOARD;   
   inputs85[1].ki.wVk = 32;   
   inputs85[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs85, sizeof(INPUT));
   
   INPUT inputs86[2] = {};   
   ZeroMemory(inputs86, sizeof(inputs86));
   
   inputs86[0].type = INPUT_KEYBOARD;   
   inputs86[0].ki.wVk = 83;
   
   inputs86[1].type = INPUT_KEYBOARD;   
   inputs86[1].ki.wVk = 83;   
   inputs86[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs86, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs87[2] = {};   
   ZeroMemory(inputs87, sizeof(inputs87));
   
   inputs87[0].type = INPUT_KEYBOARD;   
   inputs87[0].ki.wVk = 89;
   
   inputs87[1].type = INPUT_KEYBOARD;   
   inputs87[1].ki.wVk = 89;   
   inputs87[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs87, sizeof(INPUT));
   
   INPUT inputs88[2] = {};   
   ZeroMemory(inputs88, sizeof(inputs88));
   
   inputs88[0].type = INPUT_KEYBOARD;   
   inputs88[0].ki.wVk = 83;
   
   inputs88[1].type = INPUT_KEYBOARD;   
   inputs88[1].ki.wVk = 83;   
   inputs88[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs88, sizeof(INPUT));
   
   INPUT inputs89[2] = {};   
   ZeroMemory(inputs89, sizeof(inputs89));
   
   inputs89[0].type = INPUT_KEYBOARD;   
   inputs89[0].ki.wVk = 84;
   
   inputs89[1].type = INPUT_KEYBOARD;   
   inputs89[1].ki.wVk = 84;   
   inputs89[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs89, sizeof(INPUT));
   
   INPUT inputs90[2] = {};   
   ZeroMemory(inputs90, sizeof(inputs90));
   
   inputs90[0].type = INPUT_KEYBOARD;   
   inputs90[0].ki.wVk = 69;
   
   inputs90[1].type = INPUT_KEYBOARD;   
   inputs90[1].ki.wVk = 69;   
   inputs90[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs90, sizeof(INPUT));
   
   INPUT inputs91[2] = {};   
   ZeroMemory(inputs91, sizeof(inputs91));
   
   inputs91[0].type = INPUT_KEYBOARD;   
   inputs91[0].ki.wVk = 77;
   
   inputs91[1].type = INPUT_KEYBOARD;   
   inputs91[1].ki.wVk = 77;   
   inputs91[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs91, sizeof(INPUT));
   
   INPUT inputs92[2] = {};   
   ZeroMemory(inputs92, sizeof(inputs92));
   
   inputs92[0].type = INPUT_KEYBOARD;   
   inputs92[0].ki.wVk = 190;
   
   inputs92[1].type = INPUT_KEYBOARD;   
   inputs92[1].ki.wVk = 190;   
   inputs92[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs92, sizeof(INPUT));
   
   INPUT inputs93[2] = {};   
   ZeroMemory(inputs93, sizeof(inputs93));
   
   inputs93[0].type = INPUT_KEYBOARD;   
   inputs93[0].ki.wVk = 82;
   
   inputs93[1].type = INPUT_KEYBOARD;   
   inputs93[1].ki.wVk = 82;   
   inputs93[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs93, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs94[2] = {};   
   ZeroMemory(inputs94, sizeof(inputs94));
   
   inputs94[0].type = INPUT_KEYBOARD;   
   inputs94[0].ki.wVk = 85;
   
   inputs94[1].type = INPUT_KEYBOARD;   
   inputs94[1].ki.wVk = 85;   
   inputs94[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs94, sizeof(INPUT));
   
   INPUT inputs95[2] = {};   
   ZeroMemory(inputs95, sizeof(inputs95));
   
   inputs95[0].type = INPUT_KEYBOARD;   
   inputs95[0].ki.wVk = 78;
   
   inputs95[1].type = INPUT_KEYBOARD;   
   inputs95[1].ki.wVk = 78;   
   inputs95[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs95, sizeof(INPUT));
   
   INPUT inputs96[2] = {};   
   ZeroMemory(inputs96, sizeof(inputs96));
   
   inputs96[0].type = INPUT_KEYBOARD;   
   inputs96[0].ki.wVk = 84;
   
   inputs96[1].type = INPUT_KEYBOARD;   
   inputs96[1].ki.wVk = 84;   
   inputs96[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs96, sizeof(INPUT));
   
   INPUT inputs97[2] = {};   
   ZeroMemory(inputs97, sizeof(inputs97));
   
   inputs97[0].type = INPUT_KEYBOARD;   
   inputs97[0].ki.wVk = 73;
   
   inputs97[1].type = INPUT_KEYBOARD;   
   inputs97[1].ki.wVk = 73;   
   inputs97[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs97, sizeof(INPUT));
   
   INPUT inputs98[2] = {};   
   ZeroMemory(inputs98, sizeof(inputs98));
   
   inputs98[0].type = INPUT_KEYBOARD;   
   inputs98[0].ki.wVk = 77;
   
   inputs98[1].type = INPUT_KEYBOARD;   
   inputs98[1].ki.wVk = 77;   
   inputs98[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs98, sizeof(INPUT));
   
   INPUT inputs99[2] = {};   
   ZeroMemory(inputs99, sizeof(inputs99));
   
   inputs99[0].type = INPUT_KEYBOARD;   
   inputs99[0].ki.wVk = 69;
   
   inputs99[1].type = INPUT_KEYBOARD;   
   inputs99[1].ki.wVk = 69;   
   inputs99[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs99, sizeof(INPUT));
   
   INPUT inputs100[2] = {};   
   ZeroMemory(inputs100, sizeof(inputs100));
   
   inputs100[0].type = INPUT_KEYBOARD;   
   inputs100[0].ki.wVk = 190;
   
   inputs100[1].type = INPUT_KEYBOARD;   
   inputs100[1].ki.wVk = 190;   
   inputs100[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs100, sizeof(INPUT));
   
   INPUT inputs101[2] = {};   
   ZeroMemory(inputs101, sizeof(inputs101));
   
   inputs101[0].type = INPUT_KEYBOARD;   
   inputs101[0].ki.wVk = 73;
   
   inputs101[1].type = INPUT_KEYBOARD;   
   inputs101[1].ki.wVk = 73;   
   inputs101[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs101, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs102[2] = {};   
   ZeroMemory(inputs102, sizeof(inputs102));
   
   inputs102[0].type = INPUT_KEYBOARD;   
   inputs102[0].ki.wVk = 78;
   
   inputs102[1].type = INPUT_KEYBOARD;   
   inputs102[1].ki.wVk = 78;   
   inputs102[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs102, sizeof(INPUT));
   
   INPUT inputs103[2] = {};   
   ZeroMemory(inputs103, sizeof(inputs103));
   
   inputs103[0].type = INPUT_KEYBOARD;   
   inputs103[0].ki.wVk = 84;
   
   inputs103[1].type = INPUT_KEYBOARD;   
   inputs103[1].ki.wVk = 84;   
   inputs103[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs103, sizeof(INPUT));
   
   INPUT inputs104[2] = {};   
   ZeroMemory(inputs104, sizeof(inputs104));
   
   inputs104[0].type = INPUT_KEYBOARD;   
   inputs104[0].ki.wVk = 69;
   
   inputs104[1].type = INPUT_KEYBOARD;   
   inputs104[1].ki.wVk = 69;   
   inputs104[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs104, sizeof(INPUT));
   
   INPUT inputs105[2] = {};   
   ZeroMemory(inputs105, sizeof(inputs105));
   
   inputs105[0].type = INPUT_KEYBOARD;   
   inputs105[0].ki.wVk = 82;
   
   inputs105[1].type = INPUT_KEYBOARD;   
   inputs105[1].ki.wVk = 82;   
   inputs105[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs105, sizeof(INPUT));
   
   INPUT inputs106[2] = {};   
   ZeroMemory(inputs106, sizeof(inputs106));
   
   inputs106[0].type = INPUT_KEYBOARD;   
   inputs106[0].ki.wVk = 79;
   
   inputs106[1].type = INPUT_KEYBOARD;   
   inputs106[1].ki.wVk = 79;   
   inputs106[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs106, sizeof(INPUT));
   
   INPUT inputs107[2] = {};   
   ZeroMemory(inputs107, sizeof(inputs107));
   
   inputs107[0].type = INPUT_KEYBOARD;   
   inputs107[0].ki.wVk = 80;
   
   inputs107[1].type = INPUT_KEYBOARD;   
   inputs107[1].ki.wVk = 80;   
   inputs107[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs107, sizeof(INPUT));
   
   INPUT inputs108[2] = {};   
   ZeroMemory(inputs108, sizeof(inputs108));
   
   inputs108[0].type = INPUT_KEYBOARD;   
   inputs108[0].ki.wVk = 83;
   
   inputs108[1].type = INPUT_KEYBOARD;   
   inputs108[1].ki.wVk = 83;   
   inputs108[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs108, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs109[2] = {};   
   ZeroMemory(inputs109, sizeof(inputs109));
   
   inputs109[0].type = INPUT_KEYBOARD;   
   inputs109[0].ki.wVk = 69;
   
   inputs109[1].type = INPUT_KEYBOARD;   
   inputs109[1].ki.wVk = 69;   
   inputs109[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs109, sizeof(INPUT));
   
   INPUT inputs110[2] = {};   
   ZeroMemory(inputs110, sizeof(inputs110));
   
   inputs110[0].type = INPUT_KEYBOARD;   
   inputs110[0].ki.wVk = 82;
   
   inputs110[1].type = INPUT_KEYBOARD;   
   inputs110[1].ki.wVk = 82;   
   inputs110[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs110, sizeof(INPUT));
   
   INPUT inputs111[2] = {};   
   ZeroMemory(inputs111, sizeof(inputs111));
   
   inputs111[0].type = INPUT_KEYBOARD;   
   inputs111[0].ki.wVk = 86;
   
   inputs111[1].type = INPUT_KEYBOARD;   
   inputs111[1].ki.wVk = 86;   
   inputs111[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs111, sizeof(INPUT));
   
   INPUT inputs112[2] = {};   
   ZeroMemory(inputs112, sizeof(inputs112));
   
   inputs112[0].type = INPUT_KEYBOARD;   
   inputs112[0].ki.wVk = 73;
   
   inputs112[1].type = INPUT_KEYBOARD;   
   inputs112[1].ki.wVk = 73;   
   inputs112[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs112, sizeof(INPUT));
   
   INPUT inputs113[2] = {};   
   ZeroMemory(inputs113, sizeof(inputs113));
   
   inputs113[0].type = INPUT_KEYBOARD;   
   inputs113[0].ki.wVk = 67;
   
   inputs113[1].type = INPUT_KEYBOARD;   
   inputs113[1].ki.wVk = 67;   
   inputs113[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs113, sizeof(INPUT));
   
   INPUT inputs114[2] = {};   
   ZeroMemory(inputs114, sizeof(inputs114));
   
   inputs114[0].type = INPUT_KEYBOARD;   
   inputs114[0].ki.wVk = 69;
   
   inputs114[1].type = INPUT_KEYBOARD;   
   inputs114[1].ki.wVk = 69;   
   inputs114[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs114, sizeof(INPUT));
   
   INPUT inputs115[2] = {};   
   ZeroMemory(inputs115, sizeof(inputs115));
   
   inputs115[0].type = INPUT_KEYBOARD;   
   inputs115[0].ki.wVk = 83;
   
   inputs115[1].type = INPUT_KEYBOARD;   
   inputs115[1].ki.wVk = 83;   
   inputs115[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs115, sizeof(INPUT));
   
   INPUT inputs116[2] = {};   
   ZeroMemory(inputs116, sizeof(inputs116));
   
   inputs116[0].type = INPUT_KEYBOARD;   
   inputs116[0].ki.wVk = 188;
   
   inputs116[1].type = INPUT_KEYBOARD;   
   inputs116[1].ki.wVk = 188;   
   inputs116[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs116, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs117[2] = {};   
   ZeroMemory(inputs117, sizeof(inputs117));
   
   inputs117[0].type = INPUT_KEYBOARD;   
   inputs117[0].ki.wVk = 32;
   
   inputs117[1].type = INPUT_KEYBOARD;   
   inputs117[1].ki.wVk = 32;   
   inputs117[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs117, sizeof(INPUT));
   
   INPUT inputs118[2] = {};   
   ZeroMemory(inputs118, sizeof(inputs118));
   
   inputs118[0].type = INPUT_KEYBOARD;   
   inputs118[0].ki.wVk = 80;
   
   inputs118[1].type = INPUT_KEYBOARD;   
   inputs118[1].ki.wVk = 80;   
   inputs118[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs118, sizeof(INPUT));
   
   INPUT inputs119[2] = {};   
   ZeroMemory(inputs119, sizeof(inputs119));
   
   inputs119[0].type = INPUT_KEYBOARD;   
   inputs119[0].ki.wVk = 85;
   
   inputs119[1].type = INPUT_KEYBOARD;   
   inputs119[1].ki.wVk = 85;   
   inputs119[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs119, sizeof(INPUT));
   
   INPUT inputs120[2] = {};   
   ZeroMemory(inputs120, sizeof(inputs120));
   
   inputs120[0].type = INPUT_KEYBOARD;   
   inputs120[0].ki.wVk = 66;
   
   inputs120[1].type = INPUT_KEYBOARD;   
   inputs120[1].ki.wVk = 66;   
   inputs120[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs120, sizeof(INPUT));
   
   INPUT inputs121[2] = {};   
   ZeroMemory(inputs121, sizeof(inputs121));
   
   inputs121[0].type = INPUT_KEYBOARD;   
   inputs121[0].ki.wVk = 76;
   
   inputs121[1].type = INPUT_KEYBOARD;   
   inputs121[1].ki.wVk = 76;   
   inputs121[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs121, sizeof(INPUT));
   
   INPUT inputs122[2] = {};   
   ZeroMemory(inputs122, sizeof(inputs122));
   
   inputs122[0].type = INPUT_KEYBOARD;   
   inputs122[0].ki.wVk = 73;
   
   inputs122[1].type = INPUT_KEYBOARD;   
   inputs122[1].ki.wVk = 73;   
   inputs122[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs122, sizeof(INPUT));
   
   INPUT inputs123[2] = {};   
   ZeroMemory(inputs123, sizeof(inputs123));
   
   inputs123[0].type = INPUT_KEYBOARD;   
   inputs123[0].ki.wVk = 67;
   
   inputs123[1].type = INPUT_KEYBOARD;   
   inputs123[1].ki.wVk = 67;   
   inputs123[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs123, sizeof(INPUT));
   
   INPUT inputs124[2] = {};   
   ZeroMemory(inputs124, sizeof(inputs124));
   
   inputs124[0].type = INPUT_KEYBOARD;   
   inputs124[0].ki.wVk = 32;
   
   inputs124[1].type = INPUT_KEYBOARD;   
   inputs124[1].ki.wVk = 32;   
   inputs124[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs124, sizeof(INPUT));
   
   INPUT inputs125[2] = {};   
   ZeroMemory(inputs125, sizeof(inputs125));
   
   inputs125[0].type = INPUT_KEYBOARD;   
   inputs125[0].ki.wVk = 67;
   
   inputs125[1].type = INPUT_KEYBOARD;   
   inputs125[1].ki.wVk = 67;   
   inputs125[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs125, sizeof(INPUT));
   
   INPUT inputs126[2] = {};   
   ZeroMemory(inputs126, sizeof(inputs126));
   
   inputs126[0].type = INPUT_KEYBOARD;   
   inputs126[0].ki.wVk = 76;
   
   inputs126[1].type = INPUT_KEYBOARD;   
   inputs126[1].ki.wVk = 76;   
   inputs126[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs126, sizeof(INPUT));
   
   INPUT inputs127[2] = {};   
   ZeroMemory(inputs127, sizeof(inputs127));
   
   inputs127[0].type = INPUT_KEYBOARD;   
   inputs127[0].ki.wVk = 65;
   
   inputs127[1].type = INPUT_KEYBOARD;   
   inputs127[1].ki.wVk = 65;   
   inputs127[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs127, sizeof(INPUT));
   
   INPUT inputs128[2] = {};   
   ZeroMemory(inputs128, sizeof(inputs128));
   
   inputs128[0].type = INPUT_KEYBOARD;   
   inputs128[0].ki.wVk = 83;
   
   inputs128[1].type = INPUT_KEYBOARD;   
   inputs128[1].ki.wVk = 83;   
   inputs128[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs128, sizeof(INPUT));
   
   INPUT inputs129[2] = {};   
   ZeroMemory(inputs129, sizeof(inputs129));
   
   inputs129[0].type = INPUT_KEYBOARD;   
   inputs129[0].ki.wVk = 83;
   
   inputs129[1].type = INPUT_KEYBOARD;   
   inputs129[1].ki.wVk = 83;   
   inputs129[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs129, sizeof(INPUT));
   
   INPUT inputs130[2] = {};   
   ZeroMemory(inputs130, sizeof(inputs130));
   
   inputs130[0].type = INPUT_KEYBOARD;   
   inputs130[0].ki.wVk = 32;
   
   inputs130[1].type = INPUT_KEYBOARD;   
   inputs130[1].ki.wVk = 32;   
   inputs130[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs130, sizeof(INPUT));
   
   INPUT inputs131[2] = {};   
   ZeroMemory(inputs131, sizeof(inputs131));
   
   inputs131[0].type = INPUT_KEYBOARD;   
   inputs131[0].ki.wVk = 65;
   
   inputs131[1].type = INPUT_KEYBOARD;   
   inputs131[1].ki.wVk = 65;   
   inputs131[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs131, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs132[2] = {};   
   ZeroMemory(inputs132, sizeof(inputs132));
   
   inputs132[0].type = INPUT_KEYBOARD;   
   inputs132[0].ki.wVk = 85;
   
   inputs132[1].type = INPUT_KEYBOARD;   
   inputs132[1].ki.wVk = 85;   
   inputs132[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs132, sizeof(INPUT));
   
   INPUT inputs133[2] = {};   
   ZeroMemory(inputs133, sizeof(inputs133));
   
   inputs133[0].type = INPUT_KEYBOARD;   
   inputs133[0].ki.wVk = 68;
   
   inputs133[1].type = INPUT_KEYBOARD;   
   inputs133[1].ki.wVk = 68;   
   inputs133[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs133, sizeof(INPUT));
   
   INPUT inputs134[2] = {};   
   ZeroMemory(inputs134, sizeof(inputs134));
   
   inputs134[0].type = INPUT_KEYBOARD;   
   inputs134[0].ki.wVk = 73;
   
   inputs134[1].type = INPUT_KEYBOARD;   
   inputs134[1].ki.wVk = 73;   
   inputs134[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs134, sizeof(INPUT));
   
   INPUT inputs135[2] = {};   
   ZeroMemory(inputs135, sizeof(inputs135));
   
   inputs135[0].type = INPUT_KEYBOARD;   
   inputs135[0].ki.wVk = 79;
   
   inputs135[1].type = INPUT_KEYBOARD;   
   inputs135[1].ki.wVk = 79;   
   inputs135[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs135, sizeof(INPUT));
   
   INPUT inputs136[2] = {};   
   ZeroMemory(inputs136, sizeof(inputs136));
   
   inputs136[0].type = INPUT_KEYBOARD;   
   inputs136[0].ki.wVk = 66;
   
   inputs136[1].type = INPUT_KEYBOARD;   
   inputs136[1].ki.wVk = 66;   
   inputs136[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs136, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs137[2] = {};   
   ZeroMemory(inputs137, sizeof(inputs137));
   
   inputs137[0].type = INPUT_KEYBOARD;   
   inputs137[0].ki.wVk = 32;
   
   inputs137[1].type = INPUT_KEYBOARD;   
   inputs137[1].ki.wVk = 32;   
   inputs137[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs137, sizeof(INPUT));
   
   INPUT inputs138[2] = {};   
   ZeroMemory(inputs138, sizeof(inputs138));
   
   inputs138[0].type = INPUT_KEYBOARD;   
   inputs138[0].ki.wVk = 190;
   
   inputs138[1].type = INPUT_KEYBOARD;   
   inputs138[1].ki.wVk = 190;   
   inputs138[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs138, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs139[2] = {};   
   ZeroMemory(inputs139, sizeof(inputs139));
   
   inputs139[0].type = INPUT_KEYBOARD;   
   inputs139[0].ki.wVk = 190;
   
   inputs139[1].type = INPUT_KEYBOARD;   
   inputs139[1].ki.wVk = 190;   
   inputs139[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs139, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs140[2] = {};   
   ZeroMemory(inputs140, sizeof(inputs140));
   
   inputs140[0].type = INPUT_KEYBOARD;   
   inputs140[0].ki.wVk = 32;
   
   inputs140[1].type = INPUT_KEYBOARD;   
   inputs140[1].ki.wVk = 32;   
   inputs140[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs140, sizeof(INPUT));
   
   INPUT inputs141[2] = {};   
   ZeroMemory(inputs141, sizeof(inputs141));
   
   inputs141[0].type = INPUT_KEYBOARD;   
   inputs141[0].ki.wVk = 86;
   
   inputs141[1].type = INPUT_KEYBOARD;   
   inputs141[1].ki.wVk = 86;   
   inputs141[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs141, sizeof(INPUT));
   
   INPUT inputs142[2] = {};   
   ZeroMemory(inputs142, sizeof(inputs142));
   
   inputs142[0].type = INPUT_KEYBOARD;   
   inputs142[0].ki.wVk = 79;
   
   inputs142[1].type = INPUT_KEYBOARD;   
   inputs142[1].ki.wVk = 79;   
   inputs142[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs142, sizeof(INPUT));
   
   INPUT inputs143[2] = {};   
   ZeroMemory(inputs143, sizeof(inputs143));
   
   inputs143[0].type = INPUT_KEYBOARD;   
   inputs143[0].ki.wVk = 76;
   
   inputs143[1].type = INPUT_KEYBOARD;   
   inputs143[1].ki.wVk = 76;   
   inputs143[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs143, sizeof(INPUT));
   
   INPUT inputs144[2] = {};   
   ZeroMemory(inputs144, sizeof(inputs144));
   
   inputs144[0].type = INPUT_KEYBOARD;   
   inputs144[0].ki.wVk = 85;
   
   inputs144[1].type = INPUT_KEYBOARD;   
   inputs144[1].ki.wVk = 85;   
   inputs144[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs144, sizeof(INPUT));
   
   INPUT inputs145[2] = {};   
   ZeroMemory(inputs145, sizeof(inputs145));
   
   inputs145[0].type = INPUT_KEYBOARD;   
   inputs145[0].ki.wVk = 80;
   
   inputs145[1].type = INPUT_KEYBOARD;   
   inputs145[1].ki.wVk = 80;   
   inputs145[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs145, sizeof(INPUT));
   
   INPUT inputs146[2] = {};   
   ZeroMemory(inputs146, sizeof(inputs146));
   
   inputs146[0].type = INPUT_KEYBOARD;   
   inputs146[0].ki.wVk = 190;
   
   inputs146[1].type = INPUT_KEYBOARD;   
   inputs146[1].ki.wVk = 190;   
   inputs146[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs146, sizeof(INPUT));
   
   INPUT inputs147[2] = {};   
   ZeroMemory(inputs147, sizeof(inputs147));
   
   inputs147[0].type = INPUT_KEYBOARD;   
   inputs147[0].ki.wVk = 80;
   
   inputs147[1].type = INPUT_KEYBOARD;   
   inputs147[1].ki.wVk = 80;   
   inputs147[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs147, sizeof(INPUT));
   
   INPUT inputs148[2] = {};   
   ZeroMemory(inputs148, sizeof(inputs148));
   
   inputs148[0].type = INPUT_KEYBOARD;   
   inputs148[0].ki.wVk = 83;
   
   inputs148[1].type = INPUT_KEYBOARD;   
   inputs148[1].ki.wVk = 83;   
   inputs148[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs148, sizeof(INPUT));
   
   INPUT inputs149[2] = {};   
   ZeroMemory(inputs149, sizeof(inputs149));
   
   inputs149[0].type = INPUT_KEYBOARD;   
   inputs149[0].ki.wVk = 49;
   
   inputs149[1].type = INPUT_KEYBOARD;   
   inputs149[1].ki.wVk = 49;   
   inputs149[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs149, sizeof(INPUT));
   
   INPUT inputs150[2] = {};   
   ZeroMemory(inputs150, sizeof(inputs150));
   
   inputs150[0].type = INPUT_KEYBOARD;   
   inputs150[0].ki.wVk = 32;
   
   inputs150[1].type = INPUT_KEYBOARD;   
   inputs150[1].ki.wVk = 32;   
   inputs150[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs150, sizeof(INPUT));
   
   INPUT inputs151[2] = {};   
   ZeroMemory(inputs151, sizeof(inputs151));
   
   inputs151[0].type = INPUT_KEYBOARD;   
   inputs151[0].ki.wVk = 54;
   
   inputs151[1].type = INPUT_KEYBOARD;   
   inputs151[1].ki.wVk = 54;   
   inputs151[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs151, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs152[2] = {};   
   ZeroMemory(inputs152, sizeof(inputs152));
   
   inputs152[0].type = INPUT_KEYBOARD;   
   inputs152[0].ki.wVk = 32;
   
   inputs152[1].type = INPUT_KEYBOARD;   
   inputs152[1].ki.wVk = 32;   
   inputs152[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs152, sizeof(INPUT));
   
   INPUT inputs153[2] = {};   
   ZeroMemory(inputs153, sizeof(inputs153));
   
   inputs153[0].type = INPUT_KEYBOARD;   
   inputs153[0].ki.wVk = 69;
   
   inputs153[1].type = INPUT_KEYBOARD;   
   inputs153[1].ki.wVk = 69;   
   inputs153[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs153, sizeof(INPUT));
   
   INPUT inputs154[2] = {};   
   ZeroMemory(inputs154, sizeof(inputs154));
   
   inputs154[0].type = INPUT_KEYBOARD;   
   inputs154[0].ki.wVk = 67;
   
   inputs154[1].type = INPUT_KEYBOARD;   
   inputs154[1].ki.wVk = 67;   
   inputs154[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs154, sizeof(INPUT));
   
   INPUT inputs155[2] = {};   
   ZeroMemory(inputs155, sizeof(inputs155));
   
   inputs155[0].type = INPUT_KEYBOARD;   
   inputs155[0].ki.wVk = 72;
   
   inputs155[1].type = INPUT_KEYBOARD;   
   inputs155[1].ki.wVk = 72;   
   inputs155[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs155, sizeof(INPUT));
   
   INPUT inputs156[2] = {};   
   ZeroMemory(inputs156, sizeof(inputs156));
   
   inputs156[0].type = INPUT_KEYBOARD;   
   inputs156[0].ki.wVk = 79;
   
   inputs156[1].type = INPUT_KEYBOARD;   
   inputs156[1].ki.wVk = 79;   
   inputs156[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs156, sizeof(INPUT));
   
   INPUT inputs157[2] = {};   
   ZeroMemory(inputs157, sizeof(inputs157));
   
   inputs157[0].type = INPUT_KEYBOARD;   
   inputs157[0].ki.wVk = 32;
   
   inputs157[1].type = INPUT_KEYBOARD;   
   inputs157[1].ki.wVk = 32;   
   inputs157[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs157, sizeof(INPUT));
   
   INPUT inputs158[2] = {};   
   ZeroMemory(inputs158, sizeof(inputs158));
   
   inputs158[0].type = INPUT_KEYBOARD;   
   inputs158[0].ki.wVk = 32;
   
   inputs158[1].type = INPUT_KEYBOARD;   
   inputs158[1].ki.wVk = 32;   
   inputs158[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs158, sizeof(INPUT));
   
   INPUT inputs159[2] = {};   
   ZeroMemory(inputs159, sizeof(inputs159));
   
   inputs159[0].type = INPUT_KEYBOARD;   
   inputs159[0].ki.wVk = 32;
   
   inputs159[1].type = INPUT_KEYBOARD;   
   inputs159[1].ki.wVk = 32;   
   inputs159[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs159, sizeof(INPUT));
   
   INPUT inputs160[2] = {};   
   ZeroMemory(inputs160, sizeof(inputs160));
   
   inputs160[0].type = INPUT_KEYBOARD;   
   inputs160[0].ki.wVk = 32;
   
   inputs160[1].type = INPUT_KEYBOARD;   
   inputs160[1].ki.wVk = 32;   
   inputs160[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs160, sizeof(INPUT));
   
   INPUT inputs161[2] = {};   
   ZeroMemory(inputs161, sizeof(inputs161));
   
   inputs161[0].type = INPUT_KEYBOARD;   
   inputs161[0].ki.wVk = 32;
   
   inputs161[1].type = INPUT_KEYBOARD;   
   inputs161[1].ki.wVk = 32;   
   inputs161[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs161, sizeof(INPUT));
   
   INPUT inputs162[2] = {};   
   ZeroMemory(inputs162, sizeof(inputs162));
   
   inputs162[0].type = INPUT_KEYBOARD;   
   inputs162[0].ki.wVk = 70;
   
   inputs162[1].type = INPUT_KEYBOARD;   
   inputs162[1].ki.wVk = 70;   
   inputs162[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs162, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs163[2] = {};   
   ZeroMemory(inputs163, sizeof(inputs163));
   
   inputs163[0].type = INPUT_KEYBOARD;   
   inputs163[0].ki.wVk = 68;
   
   inputs163[1].type = INPUT_KEYBOARD;   
   inputs163[1].ki.wVk = 68;   
   inputs163[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs163, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs164[2] = {};   
   ZeroMemory(inputs164, sizeof(inputs164));
   
   inputs164[0].type = INPUT_KEYBOARD;   
   inputs164[0].ki.wVk = 76;
   
   inputs164[1].type = INPUT_KEYBOARD;   
   inputs164[1].ki.wVk = 76;   
   inputs164[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs164, sizeof(INPUT));
   
   INPUT inputs165[2] = {};   
   ZeroMemory(inputs165, sizeof(inputs165));
   
   inputs165[0].type = INPUT_KEYBOARD;   
   inputs165[0].ki.wVk = 76;
   
   inputs165[1].type = INPUT_KEYBOARD;   
   inputs165[1].ki.wVk = 76;   
   inputs165[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs165, sizeof(INPUT));
   
   INPUT inputs166[2] = {};   
   ZeroMemory(inputs166, sizeof(inputs166));
   
   inputs166[0].type = INPUT_KEYBOARD;   
   inputs166[0].ki.wVk = 73;
   
   inputs166[1].type = INPUT_KEYBOARD;   
   inputs166[1].ki.wVk = 73;   
   inputs166[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs166, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs167[2] = {};   
   ZeroMemory(inputs167, sizeof(inputs167));
   
   inputs167[0].type = INPUT_KEYBOARD;   
   inputs167[0].ki.wVk = 77;
   
   inputs167[1].type = INPUT_KEYBOARD;   
   inputs167[1].ki.wVk = 77;   
   inputs167[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs167, sizeof(INPUT));
   
   INPUT inputs168[2] = {};   
   ZeroMemory(inputs168, sizeof(inputs168));
   
   inputs168[0].type = INPUT_KEYBOARD;   
   inputs168[0].ki.wVk = 80;
   
   inputs168[1].type = INPUT_KEYBOARD;   
   inputs168[1].ki.wVk = 80;   
   inputs168[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs168, sizeof(INPUT));
   
   INPUT inputs169[2] = {};   
   ZeroMemory(inputs169, sizeof(inputs169));
   
   inputs169[0].type = INPUT_KEYBOARD;   
   inputs169[0].ki.wVk = 79;
   
   inputs169[1].type = INPUT_KEYBOARD;   
   inputs169[1].ki.wVk = 79;   
   inputs169[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs169, sizeof(INPUT));
   
   INPUT inputs170[2] = {};   
   ZeroMemory(inputs170, sizeof(inputs170));
   
   inputs170[0].type = INPUT_KEYBOARD;   
   inputs170[0].ki.wVk = 82;
   
   inputs170[1].type = INPUT_KEYBOARD;   
   inputs170[1].ki.wVk = 82;   
   inputs170[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs170, sizeof(INPUT));
   
   INPUT inputs171[2] = {};   
   ZeroMemory(inputs171, sizeof(inputs171));
   
   inputs171[0].type = INPUT_KEYBOARD;   
   inputs171[0].ki.wVk = 84;
   
   inputs171[1].type = INPUT_KEYBOARD;   
   inputs171[1].ki.wVk = 84;   
   inputs171[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs171, sizeof(INPUT));
   
   INPUT inputs172[2] = {};   
   ZeroMemory(inputs172, sizeof(inputs172));
   
   inputs172[0].type = INPUT_KEYBOARD;   
   inputs172[0].ki.wVk = 56;
   
   inputs172[1].type = INPUT_KEYBOARD;   
   inputs172[1].ki.wVk = 56;   
   inputs172[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs172, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs173[2] = {};   
   ZeroMemory(inputs173, sizeof(inputs173));
   
   inputs173[0].type = INPUT_KEYBOARD;   
   inputs173[0].ki.wVk = 50;
   
   inputs173[1].type = INPUT_KEYBOARD;   
   inputs173[1].ki.wVk = 50;   
   inputs173[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs173, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs174[2] = {};   
   ZeroMemory(inputs174, sizeof(inputs174));
   
   inputs174[0].type = INPUT_KEYBOARD;   
   inputs174[0].ki.wVk = 85;
   
   inputs174[1].type = INPUT_KEYBOARD;   
   inputs174[1].ki.wVk = 85;   
   inputs174[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs174, sizeof(INPUT));
   
   INPUT inputs175[2] = {};   
   ZeroMemory(inputs175, sizeof(inputs175));
   
   inputs175[0].type = INPUT_KEYBOARD;   
   inputs175[0].ki.wVk = 83;
   
   inputs175[1].type = INPUT_KEYBOARD;   
   inputs175[1].ki.wVk = 83;   
   inputs175[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs175, sizeof(INPUT));
   
   INPUT inputs176[2] = {};   
   ZeroMemory(inputs176, sizeof(inputs176));
   
   inputs176[0].type = INPUT_KEYBOARD;   
   inputs176[0].ki.wVk = 69;
   
   inputs176[1].type = INPUT_KEYBOARD;   
   inputs176[1].ki.wVk = 69;   
   inputs176[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs176, sizeof(INPUT));
   
   INPUT inputs177[2] = {};   
   ZeroMemory(inputs177, sizeof(inputs177));
   
   inputs177[0].type = INPUT_KEYBOARD;   
   inputs177[0].ki.wVk = 82;
   
   inputs177[1].type = INPUT_KEYBOARD;   
   inputs177[1].ki.wVk = 82;   
   inputs177[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs177, sizeof(INPUT));
   
   INPUT inputs178[2] = {};   
   ZeroMemory(inputs178, sizeof(inputs178));
   
   inputs178[0].type = INPUT_KEYBOARD;   
   inputs178[0].ki.wVk = 51;
   
   inputs178[1].type = INPUT_KEYBOARD;   
   inputs178[1].ki.wVk = 51;   
   inputs178[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs178, sizeof(INPUT));
   
   INPUT inputs179[2] = {};   
   ZeroMemory(inputs179, sizeof(inputs179));
   
   inputs179[0].type = INPUT_KEYBOARD;   
   inputs179[0].ki.wVk = 50;
   
   inputs179[1].type = INPUT_KEYBOARD;   
   inputs179[1].ki.wVk = 50;   
   inputs179[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs179, sizeof(INPUT));
   
   INPUT inputs180[2] = {};   
   ZeroMemory(inputs180, sizeof(inputs180));
   
   inputs180[0].type = INPUT_KEYBOARD;   
   inputs180[0].ki.wVk = 190;
   
   inputs180[1].type = INPUT_KEYBOARD;   
   inputs180[1].ki.wVk = 190;   
   inputs180[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs180, sizeof(INPUT));
   
   INPUT inputs181[2] = {};   
   ZeroMemory(inputs181, sizeof(inputs181));
   
   inputs181[0].type = INPUT_KEYBOARD;   
   inputs181[0].ki.wVk = 68;
   
   inputs181[1].type = INPUT_KEYBOARD;   
   inputs181[1].ki.wVk = 68;   
   inputs181[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs181, sizeof(INPUT));
   
   INPUT inputs182[2] = {};   
   ZeroMemory(inputs182, sizeof(inputs182));
   
   inputs182[0].type = INPUT_KEYBOARD;   
   inputs182[0].ki.wVk = 76;
   
   inputs182[1].type = INPUT_KEYBOARD;   
   inputs182[1].ki.wVk = 76;   
   inputs182[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs182, sizeof(INPUT));
   
   INPUT inputs183[2] = {};   
   ZeroMemory(inputs183, sizeof(inputs183));
   
   inputs183[0].type = INPUT_KEYBOARD;   
   inputs183[0].ki.wVk = 76;
   
   inputs183[1].type = INPUT_KEYBOARD;   
   inputs183[1].ki.wVk = 76;   
   inputs183[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs183, sizeof(INPUT));
   
   INPUT inputs184[2] = {};   
   ZeroMemory(inputs184, sizeof(inputs184));
   
   inputs184[0].type = INPUT_KEYBOARD;   
   inputs184[0].ki.wVk = 50;
   
   inputs184[1].type = INPUT_KEYBOARD;   
   inputs184[1].ki.wVk = 50;   
   inputs184[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs184, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs185[2] = {};   
   ZeroMemory(inputs185, sizeof(inputs185));
   
   inputs185[0].type = INPUT_KEYBOARD;   
   inputs185[0].ki.wVk = 57;
   
   inputs185[1].type = INPUT_KEYBOARD;   
   inputs185[1].ki.wVk = 57;   
   inputs185[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs185, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs186[2] = {};   
   ZeroMemory(inputs186, sizeof(inputs186));
   
   inputs186[0].type = INPUT_KEYBOARD;   
   inputs186[0].ki.wVk = 71;
   
   inputs186[1].type = INPUT_KEYBOARD;   
   inputs186[1].ki.wVk = 71;   
   inputs186[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs186, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs187[2] = {};   
   ZeroMemory(inputs187, sizeof(inputs187));
   
   inputs187[0].type = INPUT_KEYBOARD;   
   inputs187[0].ki.wVk = 32;
   
   inputs187[1].type = INPUT_KEYBOARD;   
   inputs187[1].ki.wVk = 32;   
   inputs187[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs187, sizeof(INPUT));
   
   INPUT inputs188[2] = {};   
   ZeroMemory(inputs188, sizeof(inputs188));
   
   inputs188[0].type = INPUT_KEYBOARD;   
   inputs188[0].ki.wVk = 190;
   
   inputs188[1].type = INPUT_KEYBOARD;   
   inputs188[1].ki.wVk = 190;   
   inputs188[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs188, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs189[2] = {};   
   ZeroMemory(inputs189, sizeof(inputs189));
   
   inputs189[0].type = INPUT_KEYBOARD;   
   inputs189[0].ki.wVk = 190;
   
   inputs189[1].type = INPUT_KEYBOARD;   
   inputs189[1].ki.wVk = 190;   
   inputs189[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs189, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs190[2] = {};   
   ZeroMemory(inputs190, sizeof(inputs190));
   
   inputs190[0].type = INPUT_KEYBOARD;   
   inputs190[0].ki.wVk = 32;
   
   inputs190[1].type = INPUT_KEYBOARD;   
   inputs190[1].ki.wVk = 32;   
   inputs190[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs190, sizeof(INPUT));
   
   INPUT inputs191[2] = {};   
   ZeroMemory(inputs191, sizeof(inputs191));
   
   inputs191[0].type = INPUT_KEYBOARD;   
   inputs191[0].ki.wVk = 86;
   
   inputs191[1].type = INPUT_KEYBOARD;   
   inputs191[1].ki.wVk = 86;   
   inputs191[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs191, sizeof(INPUT));
   
   INPUT inputs192[2] = {};   
   ZeroMemory(inputs192, sizeof(inputs192));
   
   inputs192[0].type = INPUT_KEYBOARD;   
   inputs192[0].ki.wVk = 79;
   
   inputs192[1].type = INPUT_KEYBOARD;   
   inputs192[1].ki.wVk = 79;   
   inputs192[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs192, sizeof(INPUT));
   
   INPUT inputs193[2] = {};   
   ZeroMemory(inputs193, sizeof(inputs193));
   
   inputs193[0].type = INPUT_KEYBOARD;   
   inputs193[0].ki.wVk = 76;
   
   inputs193[1].type = INPUT_KEYBOARD;   
   inputs193[1].ki.wVk = 76;   
   inputs193[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs193, sizeof(INPUT));
   
   INPUT inputs194[2] = {};   
   ZeroMemory(inputs194, sizeof(inputs194));
   
   inputs194[0].type = INPUT_KEYBOARD;   
   inputs194[0].ki.wVk = 85;
   
   inputs194[1].type = INPUT_KEYBOARD;   
   inputs194[1].ki.wVk = 85;   
   inputs194[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs194, sizeof(INPUT));
   
   INPUT inputs195[2] = {};   
   ZeroMemory(inputs195, sizeof(inputs195));
   
   inputs195[0].type = INPUT_KEYBOARD;   
   inputs195[0].ki.wVk = 80;
   
   inputs195[1].type = INPUT_KEYBOARD;   
   inputs195[1].ki.wVk = 80;   
   inputs195[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs195, sizeof(INPUT));
   
   INPUT inputs196[2] = {};   
   ZeroMemory(inputs196, sizeof(inputs196));
   
   inputs196[0].type = INPUT_KEYBOARD;   
   inputs196[0].ki.wVk = 190;
   
   inputs196[1].type = INPUT_KEYBOARD;   
   inputs196[1].ki.wVk = 190;   
   inputs196[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs196, sizeof(INPUT));
   
   INPUT inputs197[2] = {};   
   ZeroMemory(inputs197, sizeof(inputs197));
   
   inputs197[0].type = INPUT_KEYBOARD;   
   inputs197[0].ki.wVk = 80;
   
   inputs197[1].type = INPUT_KEYBOARD;   
   inputs197[1].ki.wVk = 80;   
   inputs197[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs197, sizeof(INPUT));
   
   INPUT inputs198[2] = {};   
   ZeroMemory(inputs198, sizeof(inputs198));
   
   inputs198[0].type = INPUT_KEYBOARD;   
   inputs198[0].ki.wVk = 83;
   
   inputs198[1].type = INPUT_KEYBOARD;   
   inputs198[1].ki.wVk = 83;   
   inputs198[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs198, sizeof(INPUT));
   
   INPUT inputs199[2] = {};   
   ZeroMemory(inputs199, sizeof(inputs199));
   
   inputs199[0].type = INPUT_KEYBOARD;   
   inputs199[0].ki.wVk = 49;
   
   inputs199[1].type = INPUT_KEYBOARD;   
   inputs199[1].ki.wVk = 49;   
   inputs199[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs199, sizeof(INPUT));
   
   INPUT inputs200[2] = {};   
   ZeroMemory(inputs200, sizeof(inputs200));
   
   inputs200[0].type = INPUT_KEYBOARD;   
   inputs200[0].ki.wVk = 32;
   
   inputs200[1].type = INPUT_KEYBOARD;   
   inputs200[1].ki.wVk = 32;   
   inputs200[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs200, sizeof(INPUT));
   
   INPUT inputs201[2] = {};   
   ZeroMemory(inputs201, sizeof(inputs201));
   
   inputs201[0].type = INPUT_KEYBOARD;   
   inputs201[0].ki.wVk = 54;
   
   inputs201[1].type = INPUT_KEYBOARD;   
   inputs201[1].ki.wVk = 54;   
   inputs201[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs201, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs202[2] = {};   
   ZeroMemory(inputs202, sizeof(inputs202));
   
   inputs202[0].type = INPUT_KEYBOARD;   
   inputs202[0].ki.wVk = 32;
   
   inputs202[1].type = INPUT_KEYBOARD;   
   inputs202[1].ki.wVk = 32;   
   inputs202[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs202, sizeof(INPUT));
   
   INPUT inputs203[2] = {};   
   ZeroMemory(inputs203, sizeof(inputs203));
   
   inputs203[0].type = INPUT_KEYBOARD;   
   inputs203[0].ki.wVk = 69;
   
   inputs203[1].type = INPUT_KEYBOARD;   
   inputs203[1].ki.wVk = 69;   
   inputs203[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs203, sizeof(INPUT));
   
   INPUT inputs204[2] = {};   
   ZeroMemory(inputs204, sizeof(inputs204));
   
   inputs204[0].type = INPUT_KEYBOARD;   
   inputs204[0].ki.wVk = 67;
   
   inputs204[1].type = INPUT_KEYBOARD;   
   inputs204[1].ki.wVk = 67;   
   inputs204[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs204, sizeof(INPUT));
   
   INPUT inputs205[2] = {};   
   ZeroMemory(inputs205, sizeof(inputs205));
   
   inputs205[0].type = INPUT_KEYBOARD;   
   inputs205[0].ki.wVk = 72;
   
   inputs205[1].type = INPUT_KEYBOARD;   
   inputs205[1].ki.wVk = 72;   
   inputs205[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs205, sizeof(INPUT));
   
   INPUT inputs206[2] = {};   
   ZeroMemory(inputs206, sizeof(inputs206));
   
   inputs206[0].type = INPUT_KEYBOARD;   
   inputs206[0].ki.wVk = 79;
   
   inputs206[1].type = INPUT_KEYBOARD;   
   inputs206[1].ki.wVk = 79;   
   inputs206[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs206, sizeof(INPUT));
   
   INPUT inputs207[2] = {};   
   ZeroMemory(inputs207, sizeof(inputs207));
   
   inputs207[0].type = INPUT_KEYBOARD;   
   inputs207[0].ki.wVk = 32;
   
   inputs207[1].type = INPUT_KEYBOARD;   
   inputs207[1].ki.wVk = 32;   
   inputs207[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs207, sizeof(INPUT));
   
   INPUT inputs208[2] = {};   
   ZeroMemory(inputs208, sizeof(inputs208));
   
   inputs208[0].type = INPUT_KEYBOARD;   
   inputs208[0].ki.wVk = 32;
   
   inputs208[1].type = INPUT_KEYBOARD;   
   inputs208[1].ki.wVk = 32;   
   inputs208[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs208, sizeof(INPUT));
   
   INPUT inputs209[2] = {};   
   ZeroMemory(inputs209, sizeof(inputs209));
   
   inputs209[0].type = INPUT_KEYBOARD;   
   inputs209[0].ki.wVk = 32;
   
   inputs209[1].type = INPUT_KEYBOARD;   
   inputs209[1].ki.wVk = 32;   
   inputs209[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs209, sizeof(INPUT));
   
   INPUT inputs210[2] = {};   
   ZeroMemory(inputs210, sizeof(inputs210));
   
   inputs210[0].type = INPUT_KEYBOARD;   
   inputs210[0].ki.wVk = 32;
   
   inputs210[1].type = INPUT_KEYBOARD;   
   inputs210[1].ki.wVk = 32;   
   inputs210[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs210, sizeof(INPUT));
   
   INPUT inputs211[2] = {};   
   ZeroMemory(inputs211, sizeof(inputs211));
   
   inputs211[0].type = INPUT_KEYBOARD;   
   inputs211[0].ki.wVk = 32;
   
   inputs211[1].type = INPUT_KEYBOARD;   
   inputs211[1].ki.wVk = 32;   
   inputs211[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs211, sizeof(INPUT));
   
   INPUT inputs212[2] = {};   
   ZeroMemory(inputs212, sizeof(inputs212));
   
   inputs212[0].type = INPUT_KEYBOARD;   
   inputs212[0].ki.wVk = 80;
   
   inputs212[1].type = INPUT_KEYBOARD;   
   inputs212[1].ki.wVk = 80;   
   inputs212[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs212, sizeof(INPUT));
   
   INPUT inputs213[2] = {};   
   ZeroMemory(inputs213, sizeof(inputs213));
   
   inputs213[0].type = INPUT_KEYBOARD;   
   inputs213[0].ki.wVk = 85;
   
   inputs213[1].type = INPUT_KEYBOARD;   
   inputs213[1].ki.wVk = 85;   
   inputs213[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs213, sizeof(INPUT));
   
   INPUT inputs214[2] = {};   
   ZeroMemory(inputs214, sizeof(inputs214));
   
   inputs214[0].type = INPUT_KEYBOARD;   
   inputs214[0].ki.wVk = 66;
   
   inputs214[1].type = INPUT_KEYBOARD;   
   inputs214[1].ki.wVk = 66;   
   inputs214[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs214, sizeof(INPUT));
   
   INPUT inputs215[2] = {};   
   ZeroMemory(inputs215, sizeof(inputs215));
   
   inputs215[0].type = INPUT_KEYBOARD;   
   inputs215[0].ki.wVk = 76;
   
   inputs215[1].type = INPUT_KEYBOARD;   
   inputs215[1].ki.wVk = 76;   
   inputs215[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs215, sizeof(INPUT));
   
   INPUT inputs216[2] = {};   
   ZeroMemory(inputs216, sizeof(inputs216));
   
   inputs216[0].type = INPUT_KEYBOARD;   
   inputs216[0].ki.wVk = 73;
   
   inputs216[1].type = INPUT_KEYBOARD;   
   inputs216[1].ki.wVk = 73;   
   inputs216[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs216, sizeof(INPUT));
   
   INPUT inputs217[2] = {};   
   ZeroMemory(inputs217, sizeof(inputs217));
   
   inputs217[0].type = INPUT_KEYBOARD;   
   inputs217[0].ki.wVk = 67;
   
   inputs217[1].type = INPUT_KEYBOARD;   
   inputs217[1].ki.wVk = 67;   
   inputs217[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs217, sizeof(INPUT));
   
   INPUT inputs218[2] = {};   
   ZeroMemory(inputs218, sizeof(inputs218));
   
   inputs218[0].type = INPUT_KEYBOARD;   
   inputs218[0].ki.wVk = 32;
   
   inputs218[1].type = INPUT_KEYBOARD;   
   inputs218[1].ki.wVk = 32;   
   inputs218[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs218, sizeof(INPUT));
   
   INPUT inputs219[2] = {};   
   ZeroMemory(inputs219, sizeof(inputs219));
   
   inputs219[0].type = INPUT_KEYBOARD;   
   inputs219[0].ki.wVk = 83;
   
   inputs219[1].type = INPUT_KEYBOARD;   
   inputs219[1].ki.wVk = 83;   
   inputs219[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs219, sizeof(INPUT));
   
   INPUT inputs220[2] = {};   
   ZeroMemory(inputs220, sizeof(inputs220));
   
   inputs220[0].type = INPUT_KEYBOARD;   
   inputs220[0].ki.wVk = 84;
   
   inputs220[1].type = INPUT_KEYBOARD;   
   inputs220[1].ki.wVk = 84;   
   inputs220[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs220, sizeof(INPUT));
   
   INPUT inputs221[2] = {};   
   ZeroMemory(inputs221, sizeof(inputs221));
   
   inputs221[0].type = INPUT_KEYBOARD;   
   inputs221[0].ki.wVk = 65;
   
   inputs221[1].type = INPUT_KEYBOARD;   
   inputs221[1].ki.wVk = 65;   
   inputs221[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs221, sizeof(INPUT));
   
   INPUT inputs222[2] = {};   
   ZeroMemory(inputs222, sizeof(inputs222));
   
   inputs222[0].type = INPUT_KEYBOARD;   
   inputs222[0].ki.wVk = 84;
   
   inputs222[1].type = INPUT_KEYBOARD;   
   inputs222[1].ki.wVk = 84;   
   inputs222[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs222, sizeof(INPUT));
   
   INPUT inputs223[2] = {};   
   ZeroMemory(inputs223, sizeof(inputs223));
   
   inputs223[0].type = INPUT_KEYBOARD;   
   inputs223[0].ki.wVk = 73;
   
   inputs223[1].type = INPUT_KEYBOARD;   
   inputs223[1].ki.wVk = 73;   
   inputs223[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs223, sizeof(INPUT));
   
   INPUT inputs224[2] = {};   
   ZeroMemory(inputs224, sizeof(inputs224));
   
   inputs224[0].type = INPUT_KEYBOARD;   
   inputs224[0].ki.wVk = 67;
   
   inputs224[1].type = INPUT_KEYBOARD;   
   inputs224[1].ki.wVk = 67;   
   inputs224[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs224, sizeof(INPUT));
   
   INPUT inputs225[2] = {};   
   ZeroMemory(inputs225, sizeof(inputs225));
   
   inputs225[0].type = INPUT_KEYBOARD;   
   inputs225[0].ki.wVk = 32;
   
   inputs225[1].type = INPUT_KEYBOARD;   
   inputs225[1].ki.wVk = 32;   
   inputs225[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs225, sizeof(INPUT));
   
   INPUT inputs226[2] = {};   
   ZeroMemory(inputs226, sizeof(inputs226));
   
   inputs226[0].type = INPUT_KEYBOARD;   
   inputs226[0].ki.wVk = 69;
   
   inputs226[1].type = INPUT_KEYBOARD;   
   inputs226[1].ki.wVk = 69;   
   inputs226[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs226, sizeof(INPUT));
   
   INPUT inputs227[2] = {};   
   ZeroMemory(inputs227, sizeof(inputs227));
   
   inputs227[0].type = INPUT_KEYBOARD;   
   inputs227[0].ki.wVk = 88;
   
   inputs227[1].type = INPUT_KEYBOARD;   
   inputs227[1].ki.wVk = 88;   
   inputs227[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs227, sizeof(INPUT));
   
   INPUT inputs228[2] = {};   
   ZeroMemory(inputs228, sizeof(inputs228));
   
   inputs228[0].type = INPUT_KEYBOARD;   
   inputs228[0].ki.wVk = 84;
   
   inputs228[1].type = INPUT_KEYBOARD;   
   inputs228[1].ki.wVk = 84;   
   inputs228[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs228, sizeof(INPUT));
   
   INPUT inputs229[2] = {};   
   ZeroMemory(inputs229, sizeof(inputs229));
   
   inputs229[0].type = INPUT_KEYBOARD;   
   inputs229[0].ki.wVk = 69;
   
   inputs229[1].type = INPUT_KEYBOARD;   
   inputs229[1].ki.wVk = 69;   
   inputs229[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs229, sizeof(INPUT));
   
   INPUT inputs230[2] = {};   
   ZeroMemory(inputs230, sizeof(inputs230));
   
   inputs230[0].type = INPUT_KEYBOARD;   
   inputs230[0].ki.wVk = 82;
   
   inputs230[1].type = INPUT_KEYBOARD;   
   inputs230[1].ki.wVk = 82;   
   inputs230[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs230, sizeof(INPUT));
   
   INPUT inputs231[2] = {};   
   ZeroMemory(inputs231, sizeof(inputs231));
   
   inputs231[0].type = INPUT_KEYBOARD;   
   inputs231[0].ki.wVk = 78;
   
   inputs231[1].type = INPUT_KEYBOARD;   
   inputs231[1].ki.wVk = 78;   
   inputs231[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs231, sizeof(INPUT));
   
   INPUT inputs232[2] = {};   
   ZeroMemory(inputs232, sizeof(inputs232));
   
   inputs232[0].type = INPUT_KEYBOARD;   
   inputs232[0].ki.wVk = 32;
   
   inputs232[1].type = INPUT_KEYBOARD;   
   inputs232[1].ki.wVk = 32;   
   inputs232[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs232, sizeof(INPUT));
   
   INPUT inputs233[2] = {};   
   ZeroMemory(inputs233, sizeof(inputs233));
   
   inputs233[0].type = INPUT_KEYBOARD;   
   inputs233[0].ki.wVk = 73;
   
   inputs233[1].type = INPUT_KEYBOARD;   
   inputs233[1].ki.wVk = 73;   
   inputs233[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs233, sizeof(INPUT));
   
   INPUT inputs234[2] = {};   
   ZeroMemory(inputs234, sizeof(inputs234));
   
   inputs234[0].type = INPUT_KEYBOARD;   
   inputs234[0].ki.wVk = 78;
   
   inputs234[1].type = INPUT_KEYBOARD;   
   inputs234[1].ki.wVk = 78;   
   inputs234[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs234, sizeof(INPUT));
   
   INPUT inputs235[2] = {};   
   ZeroMemory(inputs235, sizeof(inputs235));
   
   inputs235[0].type = INPUT_KEYBOARD;   
   inputs235[0].ki.wVk = 84;
   
   inputs235[1].type = INPUT_KEYBOARD;   
   inputs235[1].ki.wVk = 84;   
   inputs235[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs235, sizeof(INPUT));
   
   INPUT inputs236[2] = {};   
   ZeroMemory(inputs236, sizeof(inputs236));
   
   inputs236[0].type = INPUT_KEYBOARD;   
   inputs236[0].ki.wVk = 32;
   
   inputs236[1].type = INPUT_KEYBOARD;   
   inputs236[1].ki.wVk = 32;   
   inputs236[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs236, sizeof(INPUT));
   
   INPUT inputs237[2] = {};   
   ZeroMemory(inputs237, sizeof(inputs237));
   
   inputs237[0].type = INPUT_KEYBOARD;   
   inputs237[0].ki.wVk = 83;
   
   inputs237[1].type = INPUT_KEYBOARD;   
   inputs237[1].ki.wVk = 83;   
   inputs237[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs237, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs238[2] = {};   
   ZeroMemory(inputs238, sizeof(inputs238));
   
   inputs238[0].type = INPUT_KEYBOARD;   
   inputs238[0].ki.wVk = 69;
   
   inputs238[1].type = INPUT_KEYBOARD;   
   inputs238[1].ki.wVk = 69;   
   inputs238[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs238, sizeof(INPUT));
   
   INPUT inputs239[2] = {};   
   ZeroMemory(inputs239, sizeof(inputs239));
   
   inputs239[0].type = INPUT_KEYBOARD;   
   inputs239[0].ki.wVk = 78;
   
   inputs239[1].type = INPUT_KEYBOARD;   
   inputs239[1].ki.wVk = 78;   
   inputs239[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs239, sizeof(INPUT));
   
   INPUT inputs240[2] = {};   
   ZeroMemory(inputs240, sizeof(inputs240));
   
   inputs240[0].type = INPUT_KEYBOARD;   
   inputs240[0].ki.wVk = 68;
   
   inputs240[1].type = INPUT_KEYBOARD;   
   inputs240[1].ki.wVk = 68;   
   inputs240[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs240, sizeof(INPUT));
   
   INPUT inputs241[2] = {};   
   ZeroMemory(inputs241, sizeof(inputs241));
   
   inputs241[0].type = INPUT_KEYBOARD;   
   inputs241[0].ki.wVk = 77;
   
   inputs241[1].type = INPUT_KEYBOARD;   
   inputs241[1].ki.wVk = 77;   
   inputs241[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs241, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs242[2] = {};   
   ZeroMemory(inputs242, sizeof(inputs242));
   
   inputs242[0].type = INPUT_KEYBOARD;   
   inputs242[0].ki.wVk = 69;
   
   inputs242[1].type = INPUT_KEYBOARD;   
   inputs242[1].ki.wVk = 69;   
   inputs242[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs242, sizeof(INPUT));
   
   INPUT inputs243[2] = {};   
   ZeroMemory(inputs243, sizeof(inputs243));
   
   inputs243[0].type = INPUT_KEYBOARD;   
   inputs243[0].ki.wVk = 83;
   
   inputs243[1].type = INPUT_KEYBOARD;   
   inputs243[1].ki.wVk = 83;   
   inputs243[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs243, sizeof(INPUT));
   
   INPUT inputs244[2] = {};   
   ZeroMemory(inputs244, sizeof(inputs244));
   
   inputs244[0].type = INPUT_KEYBOARD;   
   inputs244[0].ki.wVk = 83;
   
   inputs244[1].type = INPUT_KEYBOARD;   
   inputs244[1].ki.wVk = 83;   
   inputs244[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs244, sizeof(INPUT));
   
   INPUT inputs245[2] = {};   
   ZeroMemory(inputs245, sizeof(inputs245));
   
   inputs245[0].type = INPUT_KEYBOARD;   
   inputs245[0].ki.wVk = 65;
   
   inputs245[1].type = INPUT_KEYBOARD;   
   inputs245[1].ki.wVk = 65;   
   inputs245[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs245, sizeof(INPUT));
   
   INPUT inputs246[2] = {};   
   ZeroMemory(inputs246, sizeof(inputs246));
   
   inputs246[0].type = INPUT_KEYBOARD;   
   inputs246[0].ki.wVk = 71;
   
   inputs246[1].type = INPUT_KEYBOARD;   
   inputs246[1].ki.wVk = 71;   
   inputs246[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs246, sizeof(INPUT));
   
   INPUT inputs247[2] = {};   
   ZeroMemory(inputs247, sizeof(inputs247));
   
   inputs247[0].type = INPUT_KEYBOARD;   
   inputs247[0].ki.wVk = 69;
   
   inputs247[1].type = INPUT_KEYBOARD;   
   inputs247[1].ki.wVk = 69;   
   inputs247[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs247, sizeof(INPUT));
   
   INPUT inputs248[2] = {};   
   ZeroMemory(inputs248, sizeof(inputs248));
   
   inputs248[0].type = INPUT_KEYBOARD;   
   inputs248[0].ki.wVk = 87;
   
   inputs248[1].type = INPUT_KEYBOARD;   
   inputs248[1].ki.wVk = 87;   
   inputs248[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs248, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs249[2] = {};   
   ZeroMemory(inputs249, sizeof(inputs249));
   
   inputs249[0].type = INPUT_KEYBOARD;   
   inputs249[0].ki.wVk = 56;
   
   inputs249[1].type = INPUT_KEYBOARD;   
   inputs249[1].ki.wVk = 56;   
   inputs249[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs249, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs250[2] = {};   
   ZeroMemory(inputs250, sizeof(inputs250));
   
   inputs250[0].type = INPUT_KEYBOARD;   
   inputs250[0].ki.wVk = 73;
   
   inputs250[1].type = INPUT_KEYBOARD;   
   inputs250[1].ki.wVk = 73;   
   inputs250[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs250, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs251[2] = {};   
   ZeroMemory(inputs251, sizeof(inputs251));
   
   inputs251[0].type = INPUT_KEYBOARD;   
   inputs251[0].ki.wVk = 78;
   
   inputs251[1].type = INPUT_KEYBOARD;   
   inputs251[1].ki.wVk = 78;   
   inputs251[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs251, sizeof(INPUT));
   
   INPUT inputs252[2] = {};   
   ZeroMemory(inputs252, sizeof(inputs252));
   
   inputs252[0].type = INPUT_KEYBOARD;   
   inputs252[0].ki.wVk = 84;
   
   inputs252[1].type = INPUT_KEYBOARD;   
   inputs252[1].ki.wVk = 84;   
   inputs252[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs252, sizeof(INPUT));
   
   INPUT inputs253[2] = {};   
   ZeroMemory(inputs253, sizeof(inputs253));
   
   inputs253[0].type = INPUT_KEYBOARD;   
   inputs253[0].ki.wVk = 80;
   
   inputs253[1].type = INPUT_KEYBOARD;   
   inputs253[1].ki.wVk = 80;   
   inputs253[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs253, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs254[2] = {};   
   ZeroMemory(inputs254, sizeof(inputs254));
   
   inputs254[0].type = INPUT_KEYBOARD;   
   inputs254[0].ki.wVk = 84;
   
   inputs254[1].type = INPUT_KEYBOARD;   
   inputs254[1].ki.wVk = 84;   
   inputs254[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs254, sizeof(INPUT));
   
   INPUT inputs255[2] = {};   
   ZeroMemory(inputs255, sizeof(inputs255));
   
   inputs255[0].type = INPUT_KEYBOARD;   
   inputs255[0].ki.wVk = 82;
   
   inputs255[1].type = INPUT_KEYBOARD;   
   inputs255[1].ki.wVk = 82;   
   inputs255[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs255, sizeof(INPUT));
   
   INPUT inputs256[2] = {};   
   ZeroMemory(inputs256, sizeof(inputs256));
   
   inputs256[0].type = INPUT_KEYBOARD;   
   inputs256[0].ki.wVk = 32;
   
   inputs256[1].type = INPUT_KEYBOARD;   
   inputs256[1].ki.wVk = 32;   
   inputs256[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs256, sizeof(INPUT));
   
   INPUT inputs257[2] = {};   
   ZeroMemory(inputs257, sizeof(inputs257));
   
   inputs257[0].type = INPUT_KEYBOARD;   
   inputs257[0].ki.wVk = 72;
   
   inputs257[1].type = INPUT_KEYBOARD;   
   inputs257[1].ki.wVk = 72;   
   inputs257[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs257, sizeof(INPUT));
   
   INPUT inputs258[2] = {};   
   ZeroMemory(inputs258, sizeof(inputs258));
   
   inputs258[0].type = INPUT_KEYBOARD;   
   inputs258[0].ki.wVk = 87;
   
   inputs258[1].type = INPUT_KEYBOARD;   
   inputs258[1].ki.wVk = 87;   
   inputs258[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs258, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs259[2] = {};   
   ZeroMemory(inputs259, sizeof(inputs259));
   
   inputs259[0].type = INPUT_KEYBOARD;   
   inputs259[0].ki.wVk = 78;
   
   inputs259[1].type = INPUT_KEYBOARD;   
   inputs259[1].ki.wVk = 78;   
   inputs259[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs259, sizeof(INPUT));
   
   INPUT inputs260[2] = {};   
   ZeroMemory(inputs260, sizeof(inputs260));
   
   inputs260[0].type = INPUT_KEYBOARD;   
   inputs260[0].ki.wVk = 68;
   
   inputs260[1].type = INPUT_KEYBOARD;   
   inputs260[1].ki.wVk = 68;   
   inputs260[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs260, sizeof(INPUT));
   
   INPUT inputs261[2] = {};   
   ZeroMemory(inputs261, sizeof(inputs261));
   
   inputs261[0].type = INPUT_KEYBOARD;   
   inputs261[0].ki.wVk = 188;
   
   inputs261[1].type = INPUT_KEYBOARD;   
   inputs261[1].ki.wVk = 188;   
   inputs261[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs261, sizeof(INPUT));
   
   INPUT inputs262[2] = {};   
   ZeroMemory(inputs262, sizeof(inputs262));
   
   inputs262[0].type = INPUT_KEYBOARD;   
   inputs262[0].ki.wVk = 32;
   
   inputs262[1].type = INPUT_KEYBOARD;   
   inputs262[1].ki.wVk = 32;   
   inputs262[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs262, sizeof(INPUT));
   
   INPUT inputs263[2] = {};   
   ZeroMemory(inputs263, sizeof(inputs263));
   
   inputs263[0].type = INPUT_KEYBOARD;   
   inputs263[0].ki.wVk = 73;
   
   inputs263[1].type = INPUT_KEYBOARD;   
   inputs263[1].ki.wVk = 73;   
   inputs263[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs263, sizeof(INPUT));
   
   INPUT inputs264[2] = {};   
   ZeroMemory(inputs264, sizeof(inputs264));
   
   inputs264[0].type = INPUT_KEYBOARD;   
   inputs264[0].ki.wVk = 78;
   
   inputs264[1].type = INPUT_KEYBOARD;   
   inputs264[1].ki.wVk = 78;   
   inputs264[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs264, sizeof(INPUT));
   
   INPUT inputs265[2] = {};   
   ZeroMemory(inputs265, sizeof(inputs265));
   
   inputs265[0].type = INPUT_KEYBOARD;   
   inputs265[0].ki.wVk = 84;
   
   inputs265[1].type = INPUT_KEYBOARD;   
   inputs265[1].ki.wVk = 84;   
   inputs265[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs265, sizeof(INPUT));
   
   INPUT inputs266[2] = {};   
   ZeroMemory(inputs266, sizeof(inputs266));
   
   inputs266[0].type = INPUT_KEYBOARD;   
   inputs266[0].ki.wVk = 32;
   
   inputs266[1].type = INPUT_KEYBOARD;   
   inputs266[1].ki.wVk = 32;   
   inputs266[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs266, sizeof(INPUT));
   
   INPUT inputs267[2] = {};   
   ZeroMemory(inputs267, sizeof(inputs267));
   
   inputs267[0].type = INPUT_KEYBOARD;   
   inputs267[0].ki.wVk = 77;
   
   inputs267[1].type = INPUT_KEYBOARD;   
   inputs267[1].ki.wVk = 77;   
   inputs267[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs267, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs268[2] = {};   
   ZeroMemory(inputs268, sizeof(inputs268));
   
   inputs268[0].type = INPUT_KEYBOARD;   
   inputs268[0].ki.wVk = 83;
   
   inputs268[1].type = INPUT_KEYBOARD;   
   inputs268[1].ki.wVk = 83;   
   inputs268[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs268, sizeof(INPUT));
   
   INPUT inputs269[2] = {};   
   ZeroMemory(inputs269, sizeof(inputs269));
   
   inputs269[0].type = INPUT_KEYBOARD;   
   inputs269[0].ki.wVk = 71;
   
   inputs269[1].type = INPUT_KEYBOARD;   
   inputs269[1].ki.wVk = 71;   
   inputs269[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs269, sizeof(INPUT));
   
   INPUT inputs270[2] = {};   
   ZeroMemory(inputs270, sizeof(inputs270));
   
   inputs270[0].type = INPUT_KEYBOARD;   
   inputs270[0].ki.wVk = 188;
   
   inputs270[1].type = INPUT_KEYBOARD;   
   inputs270[1].ki.wVk = 188;   
   inputs270[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs270, sizeof(INPUT));
   
   INPUT inputs271[2] = {};   
   ZeroMemory(inputs271, sizeof(inputs271));
   
   inputs271[0].type = INPUT_KEYBOARD;   
   inputs271[0].ki.wVk = 32;
   
   inputs271[1].type = INPUT_KEYBOARD;   
   inputs271[1].ki.wVk = 32;   
   inputs271[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs271, sizeof(INPUT));
   
   INPUT inputs272[2] = {};   
   ZeroMemory(inputs272, sizeof(inputs272));
   
   inputs272[0].type = INPUT_KEYBOARD;   
   inputs272[0].ki.wVk = 73;
   
   inputs272[1].type = INPUT_KEYBOARD;   
   inputs272[1].ki.wVk = 73;   
   inputs272[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs272, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs273[2] = {};   
   ZeroMemory(inputs273, sizeof(inputs273));
   
   inputs273[0].type = INPUT_KEYBOARD;   
   inputs273[0].ki.wVk = 78;
   
   inputs273[1].type = INPUT_KEYBOARD;   
   inputs273[1].ki.wVk = 78;   
   inputs273[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs273, sizeof(INPUT));
   
   INPUT inputs274[2] = {};   
   ZeroMemory(inputs274, sizeof(inputs274));
   
   inputs274[0].type = INPUT_KEYBOARD;   
   inputs274[0].ki.wVk = 84;
   
   inputs274[1].type = INPUT_KEYBOARD;   
   inputs274[1].ki.wVk = 84;   
   inputs274[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs274, sizeof(INPUT));
   
   INPUT inputs275[2] = {};   
   ZeroMemory(inputs275, sizeof(inputs275));
   
   inputs275[0].type = INPUT_KEYBOARD;   
   inputs275[0].ki.wVk = 80;
   
   inputs275[1].type = INPUT_KEYBOARD;   
   inputs275[1].ki.wVk = 80;   
   inputs275[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs275, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs276[2] = {};   
   ZeroMemory(inputs276, sizeof(inputs276));
   
   inputs276[0].type = INPUT_KEYBOARD;   
   inputs276[0].ki.wVk = 84;
   
   inputs276[1].type = INPUT_KEYBOARD;   
   inputs276[1].ki.wVk = 84;   
   inputs276[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs276, sizeof(INPUT));
   
   INPUT inputs277[2] = {};   
   ZeroMemory(inputs277, sizeof(inputs277));
   
   inputs277[0].type = INPUT_KEYBOARD;   
   inputs277[0].ki.wVk = 82;
   
   inputs277[1].type = INPUT_KEYBOARD;   
   inputs277[1].ki.wVk = 82;   
   inputs277[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs277, sizeof(INPUT));
   
   INPUT inputs278[2] = {};   
   ZeroMemory(inputs278, sizeof(inputs278));
   
   inputs278[0].type = INPUT_KEYBOARD;   
   inputs278[0].ki.wVk = 32;
   
   inputs278[1].type = INPUT_KEYBOARD;   
   inputs278[1].ki.wVk = 32;   
   inputs278[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs278, sizeof(INPUT));
   
   INPUT inputs279[2] = {};   
   ZeroMemory(inputs279, sizeof(inputs279));
   
   inputs279[0].type = INPUT_KEYBOARD;   
   inputs279[0].ki.wVk = 87;
   
   inputs279[1].type = INPUT_KEYBOARD;   
   inputs279[1].ki.wVk = 87;   
   inputs279[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs279, sizeof(INPUT));
   
   INPUT inputs280[2] = {};   
   ZeroMemory(inputs280, sizeof(inputs280));
   
   inputs280[0].type = INPUT_KEYBOARD;   
   inputs280[0].ki.wVk = 80;
   
   inputs280[1].type = INPUT_KEYBOARD;   
   inputs280[1].ki.wVk = 80;   
   inputs280[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs280, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs281[2] = {};   
   ZeroMemory(inputs281, sizeof(inputs281));
   
   inputs281[0].type = INPUT_KEYBOARD;   
   inputs281[0].ki.wVk = 65;
   
   inputs281[1].type = INPUT_KEYBOARD;   
   inputs281[1].ki.wVk = 65;   
   inputs281[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs281, sizeof(INPUT));
   
   INPUT inputs282[2] = {};   
   ZeroMemory(inputs282, sizeof(inputs282));
   
   inputs282[0].type = INPUT_KEYBOARD;   
   inputs282[0].ki.wVk = 82;
   
   inputs282[1].type = INPUT_KEYBOARD;   
   inputs282[1].ki.wVk = 82;   
   inputs282[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs282, sizeof(INPUT));
   
   INPUT inputs283[2] = {};   
   ZeroMemory(inputs283, sizeof(inputs283));
   
   inputs283[0].type = INPUT_KEYBOARD;   
   inputs283[0].ki.wVk = 65;
   
   inputs283[1].type = INPUT_KEYBOARD;   
   inputs283[1].ki.wVk = 65;   
   inputs283[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs283, sizeof(INPUT));
   
   INPUT inputs284[2] = {};   
   ZeroMemory(inputs284, sizeof(inputs284));
   
   inputs284[0].type = INPUT_KEYBOARD;   
   inputs284[0].ki.wVk = 77;
   
   inputs284[1].type = INPUT_KEYBOARD;   
   inputs284[1].ki.wVk = 77;   
   inputs284[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs284, sizeof(INPUT));
   
   INPUT inputs285[2] = {};   
   ZeroMemory(inputs285, sizeof(inputs285));
   
   inputs285[0].type = INPUT_KEYBOARD;   
   inputs285[0].ki.wVk = 188;
   
   inputs285[1].type = INPUT_KEYBOARD;   
   inputs285[1].ki.wVk = 188;   
   inputs285[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs285, sizeof(INPUT));
   
   INPUT inputs286[2] = {};   
   ZeroMemory(inputs286, sizeof(inputs286));
   
   inputs286[0].type = INPUT_KEYBOARD;   
   inputs286[0].ki.wVk = 32;
   
   inputs286[1].type = INPUT_KEYBOARD;   
   inputs286[1].ki.wVk = 32;   
   inputs286[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs286, sizeof(INPUT));
   
   INPUT inputs287[2] = {};   
   ZeroMemory(inputs287, sizeof(inputs287));
   
   inputs287[0].type = INPUT_KEYBOARD;   
   inputs287[0].ki.wVk = 73;
   
   inputs287[1].type = INPUT_KEYBOARD;   
   inputs287[1].ki.wVk = 73;   
   inputs287[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs287, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs288[2] = {};   
   ZeroMemory(inputs288, sizeof(inputs288));
   
   inputs288[0].type = INPUT_KEYBOARD;   
   inputs288[0].ki.wVk = 78;
   
   inputs288[1].type = INPUT_KEYBOARD;   
   inputs288[1].ki.wVk = 78;   
   inputs288[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs288, sizeof(INPUT));
   
   INPUT inputs289[2] = {};   
   ZeroMemory(inputs289, sizeof(inputs289));
   
   inputs289[0].type = INPUT_KEYBOARD;   
   inputs289[0].ki.wVk = 84;
   
   inputs289[1].type = INPUT_KEYBOARD;   
   inputs289[1].ki.wVk = 84;   
   inputs289[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs289, sizeof(INPUT));
   
   INPUT inputs290[2] = {};   
   ZeroMemory(inputs290, sizeof(inputs290));
   
   inputs290[0].type = INPUT_KEYBOARD;   
   inputs290[0].ki.wVk = 80;
   
   inputs290[1].type = INPUT_KEYBOARD;   
   inputs290[1].ki.wVk = 80;   
   inputs290[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs290, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs291[2] = {};   
   ZeroMemory(inputs291, sizeof(inputs291));
   
   inputs291[0].type = INPUT_KEYBOARD;   
   inputs291[0].ki.wVk = 84;
   
   inputs291[1].type = INPUT_KEYBOARD;   
   inputs291[1].ki.wVk = 84;   
   inputs291[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs291, sizeof(INPUT));
   
   INPUT inputs292[2] = {};   
   ZeroMemory(inputs292, sizeof(inputs292));
   
   inputs292[0].type = INPUT_KEYBOARD;   
   inputs292[0].ki.wVk = 82;
   
   inputs292[1].type = INPUT_KEYBOARD;   
   inputs292[1].ki.wVk = 82;   
   inputs292[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs292, sizeof(INPUT));
   
   INPUT inputs293[2] = {};   
   ZeroMemory(inputs293, sizeof(inputs293));
   
   inputs293[0].type = INPUT_KEYBOARD;   
   inputs293[0].ki.wVk = 32;
   
   inputs293[1].type = INPUT_KEYBOARD;   
   inputs293[1].ki.wVk = 32;   
   inputs293[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs293, sizeof(INPUT));
   
   INPUT inputs294[2] = {};   
   ZeroMemory(inputs294, sizeof(inputs294));
   
   inputs294[0].type = INPUT_KEYBOARD;   
   inputs294[0].ki.wVk = 76;
   
   inputs294[1].type = INPUT_KEYBOARD;   
   inputs294[1].ki.wVk = 76;   
   inputs294[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs294, sizeof(INPUT));
   
   INPUT inputs295[2] = {};   
   ZeroMemory(inputs295, sizeof(inputs295));
   
   inputs295[0].type = INPUT_KEYBOARD;   
   inputs295[0].ki.wVk = 80;
   
   inputs295[1].type = INPUT_KEYBOARD;   
   inputs295[1].ki.wVk = 80;   
   inputs295[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs295, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs296[2] = {};   
   ZeroMemory(inputs296, sizeof(inputs296));
   
   inputs296[0].type = INPUT_KEYBOARD;   
   inputs296[0].ki.wVk = 65;
   
   inputs296[1].type = INPUT_KEYBOARD;   
   inputs296[1].ki.wVk = 65;   
   inputs296[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs296, sizeof(INPUT));
   
   INPUT inputs297[2] = {};   
   ZeroMemory(inputs297, sizeof(inputs297));
   
   inputs297[0].type = INPUT_KEYBOARD;   
   inputs297[0].ki.wVk = 82;
   
   inputs297[1].type = INPUT_KEYBOARD;   
   inputs297[1].ki.wVk = 82;   
   inputs297[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs297, sizeof(INPUT));
   
   INPUT inputs298[2] = {};   
   ZeroMemory(inputs298, sizeof(inputs298));
   
   inputs298[0].type = INPUT_KEYBOARD;   
   inputs298[0].ki.wVk = 65;
   
   inputs298[1].type = INPUT_KEYBOARD;   
   inputs298[1].ki.wVk = 65;   
   inputs298[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs298, sizeof(INPUT));
   
   INPUT inputs299[2] = {};   
   ZeroMemory(inputs299, sizeof(inputs299));
   
   inputs299[0].type = INPUT_KEYBOARD;   
   inputs299[0].ki.wVk = 77;
   
   inputs299[1].type = INPUT_KEYBOARD;   
   inputs299[1].ki.wVk = 77;   
   inputs299[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs299, sizeof(INPUT));
   
   INPUT inputs300[2] = {};   
   ZeroMemory(inputs300, sizeof(inputs300));
   
   inputs300[0].type = INPUT_KEYBOARD;   
   inputs300[0].ki.wVk = 57;
   
   inputs300[1].type = INPUT_KEYBOARD;   
   inputs300[1].ki.wVk = 57;   
   inputs300[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs300, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs301[2] = {};   
   ZeroMemory(inputs301, sizeof(inputs301));
   
   inputs301[0].type = INPUT_KEYBOARD;   
   inputs301[0].ki.wVk = 188;
   
   inputs301[1].type = INPUT_KEYBOARD;   
   inputs301[1].ki.wVk = 188;   
   inputs301[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs301, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs302[2] = {};   
   ZeroMemory(inputs302, sizeof(inputs302));
   
   inputs302[0].type = INPUT_KEYBOARD;   
   inputs302[0].ki.wVk = 32;
   
   inputs302[1].type = INPUT_KEYBOARD;   
   inputs302[1].ki.wVk = 32;   
   inputs302[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs302, sizeof(INPUT));
   
   INPUT inputs303[2] = {};   
   ZeroMemory(inputs303, sizeof(inputs303));
   
   inputs303[0].type = INPUT_KEYBOARD;   
   inputs303[0].ki.wVk = 80;
   
   inputs303[1].type = INPUT_KEYBOARD;   
   inputs303[1].ki.wVk = 80;   
   inputs303[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs303, sizeof(INPUT));
   
   INPUT inputs304[2] = {};   
   ZeroMemory(inputs304, sizeof(inputs304));
   
   inputs304[0].type = INPUT_KEYBOARD;   
   inputs304[0].ki.wVk = 82;
   
   inputs304[1].type = INPUT_KEYBOARD;   
   inputs304[1].ki.wVk = 82;   
   inputs304[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs304, sizeof(INPUT));
   
   INPUT inputs305[2] = {};   
   ZeroMemory(inputs305, sizeof(inputs305));
   
   inputs305[0].type = INPUT_KEYBOARD;   
   inputs305[0].ki.wVk = 73;
   
   inputs305[1].type = INPUT_KEYBOARD;   
   inputs305[1].ki.wVk = 73;   
   inputs305[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs305, sizeof(INPUT));
   
   INPUT inputs306[2] = {};   
   ZeroMemory(inputs306, sizeof(inputs306));
   
   inputs306[0].type = INPUT_KEYBOARD;   
   inputs306[0].ki.wVk = 86;
   
   inputs306[1].type = INPUT_KEYBOARD;   
   inputs306[1].ki.wVk = 86;   
   inputs306[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs306, sizeof(INPUT));
   
   INPUT inputs307[2] = {};   
   ZeroMemory(inputs307, sizeof(inputs307));
   
   inputs307[0].type = INPUT_KEYBOARD;   
   inputs307[0].ki.wVk = 65;
   
   inputs307[1].type = INPUT_KEYBOARD;   
   inputs307[1].ki.wVk = 65;   
   inputs307[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs307, sizeof(INPUT));
   
   INPUT inputs308[2] = {};   
   ZeroMemory(inputs308, sizeof(inputs308));
   
   inputs308[0].type = INPUT_KEYBOARD;   
   inputs308[0].ki.wVk = 84;
   
   inputs308[1].type = INPUT_KEYBOARD;   
   inputs308[1].ki.wVk = 84;   
   inputs308[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs308, sizeof(INPUT));
   
   INPUT inputs309[2] = {};   
   ZeroMemory(inputs309, sizeof(inputs309));
   
   inputs309[0].type = INPUT_KEYBOARD;   
   inputs309[0].ki.wVk = 69;
   
   inputs309[1].type = INPUT_KEYBOARD;   
   inputs309[1].ki.wVk = 69;   
   inputs309[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs309, sizeof(INPUT));
   
   INPUT inputs310[2] = {};   
   ZeroMemory(inputs310, sizeof(inputs310));
   
   inputs310[0].type = INPUT_KEYBOARD;   
   inputs310[0].ki.wVk = 32;
   
   inputs310[1].type = INPUT_KEYBOARD;   
   inputs310[1].ki.wVk = 32;   
   inputs310[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs310, sizeof(INPUT));
   
   INPUT inputs311[2] = {};   
   ZeroMemory(inputs311, sizeof(inputs311));
   
   inputs311[0].type = INPUT_KEYBOARD;   
   inputs311[0].ki.wVk = 67;
   
   inputs311[1].type = INPUT_KEYBOARD;   
   inputs311[1].ki.wVk = 67;   
   inputs311[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs311, sizeof(INPUT));
   
   INPUT inputs312[2] = {};   
   ZeroMemory(inputs312, sizeof(inputs312));
   
   inputs312[0].type = INPUT_KEYBOARD;   
   inputs312[0].ki.wVk = 79;
   
   inputs312[1].type = INPUT_KEYBOARD;   
   inputs312[1].ki.wVk = 79;   
   inputs312[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs312, sizeof(INPUT));
   
   INPUT inputs313[2] = {};   
   ZeroMemory(inputs313, sizeof(inputs313));
   
   inputs313[0].type = INPUT_KEYBOARD;   
   inputs313[0].ki.wVk = 78;
   
   inputs313[1].type = INPUT_KEYBOARD;   
   inputs313[1].ki.wVk = 78;   
   inputs313[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs313, sizeof(INPUT));
   
   INPUT inputs314[2] = {};   
   ZeroMemory(inputs314, sizeof(inputs314));
   
   inputs314[0].type = INPUT_KEYBOARD;   
   inputs314[0].ki.wVk = 83;
   
   inputs314[1].type = INPUT_KEYBOARD;   
   inputs314[1].ki.wVk = 83;   
   inputs314[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs314, sizeof(INPUT));
   
   INPUT inputs315[2] = {};   
   ZeroMemory(inputs315, sizeof(inputs315));
   
   inputs315[0].type = INPUT_KEYBOARD;   
   inputs315[0].ki.wVk = 84;
   
   inputs315[1].type = INPUT_KEYBOARD;   
   inputs315[1].ki.wVk = 84;   
   inputs315[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs315, sizeof(INPUT));
   
   INPUT inputs316[2] = {};   
   ZeroMemory(inputs316, sizeof(inputs316));
   
   inputs316[0].type = INPUT_KEYBOARD;   
   inputs316[0].ki.wVk = 32;
   
   inputs316[1].type = INPUT_KEYBOARD;   
   inputs316[1].ki.wVk = 32;   
   inputs316[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs316, sizeof(INPUT));
   
   INPUT inputs317[2] = {};   
   ZeroMemory(inputs317, sizeof(inputs317));
   
   inputs317[0].type = INPUT_KEYBOARD;   
   inputs317[0].ki.wVk = 73;
   
   inputs317[1].type = INPUT_KEYBOARD;   
   inputs317[1].ki.wVk = 73;   
   inputs317[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs317, sizeof(INPUT));
   
   INPUT inputs318[2] = {};   
   ZeroMemory(inputs318, sizeof(inputs318));
   
   inputs318[0].type = INPUT_KEYBOARD;   
   inputs318[0].ki.wVk = 78;
   
   inputs318[1].type = INPUT_KEYBOARD;   
   inputs318[1].ki.wVk = 78;   
   inputs318[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs318, sizeof(INPUT));
   
   INPUT inputs319[2] = {};   
   ZeroMemory(inputs319, sizeof(inputs319));
   
   inputs319[0].type = INPUT_KEYBOARD;   
   inputs319[0].ki.wVk = 84;
   
   inputs319[1].type = INPUT_KEYBOARD;   
   inputs319[1].ki.wVk = 84;   
   inputs319[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs319, sizeof(INPUT));
   
   INPUT inputs320[2] = {};   
   ZeroMemory(inputs320, sizeof(inputs320));
   
   inputs320[0].type = INPUT_KEYBOARD;   
   inputs320[0].ki.wVk = 32;
   
   inputs320[1].type = INPUT_KEYBOARD;   
   inputs320[1].ki.wVk = 32;   
   inputs320[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs320, sizeof(INPUT));
   
   INPUT inputs321[2] = {};   
   ZeroMemory(inputs321, sizeof(inputs321));
   
   inputs321[0].type = INPUT_KEYBOARD;   
   inputs321[0].ki.wVk = 65;
   
   inputs321[1].type = INPUT_KEYBOARD;   
   inputs321[1].ki.wVk = 65;   
   inputs321[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs321, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs322[2] = {};   
   ZeroMemory(inputs322, sizeof(inputs322));
   
   inputs322[0].type = INPUT_KEYBOARD;   
   inputs322[0].ki.wVk = 80;
   
   inputs322[1].type = INPUT_KEYBOARD;   
   inputs322[1].ki.wVk = 80;   
   inputs322[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs322, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs323[2] = {};   
   ZeroMemory(inputs323, sizeof(inputs323));
   
   inputs323[0].type = INPUT_KEYBOARD;   
   inputs323[0].ki.wVk = 80;
   
   inputs323[1].type = INPUT_KEYBOARD;   
   inputs323[1].ki.wVk = 80;   
   inputs323[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs323, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs324[2] = {};   
   ZeroMemory(inputs324, sizeof(inputs324));
   
   inputs324[0].type = INPUT_KEYBOARD;   
   inputs324[0].ki.wVk = 67;
   
   inputs324[1].type = INPUT_KEYBOARD;   
   inputs324[1].ki.wVk = 67;   
   inputs324[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs324, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs325[2] = {};   
   ZeroMemory(inputs325, sizeof(inputs325));
   
   inputs325[0].type = INPUT_KEYBOARD;   
   inputs325[0].ki.wVk = 79;
   
   inputs325[1].type = INPUT_KEYBOARD;   
   inputs325[1].ki.wVk = 79;   
   inputs325[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs325, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs326[2] = {};   
   ZeroMemory(inputs326, sizeof(inputs326));
   
   inputs326[0].type = INPUT_KEYBOARD;   
   inputs326[0].ki.wVk = 77;
   
   inputs326[1].type = INPUT_KEYBOARD;   
   inputs326[1].ki.wVk = 77;   
   inputs326[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs326, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs327[2] = {};   
   ZeroMemory(inputs327, sizeof(inputs327));
   
   inputs327[0].type = INPUT_KEYBOARD;   
   inputs327[0].ki.wVk = 77;
   
   inputs327[1].type = INPUT_KEYBOARD;   
   inputs327[1].ki.wVk = 77;   
   inputs327[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs327, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs328[2] = {};   
   ZeroMemory(inputs328, sizeof(inputs328));
   
   inputs328[0].type = INPUT_KEYBOARD;   
   inputs328[0].ki.wVk = 65;
   
   inputs328[1].type = INPUT_KEYBOARD;   
   inputs328[1].ki.wVk = 65;   
   inputs328[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs328, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs329[2] = {};   
   ZeroMemory(inputs329, sizeof(inputs329));
   
   inputs329[0].type = INPUT_KEYBOARD;   
   inputs329[0].ki.wVk = 78;
   
   inputs329[1].type = INPUT_KEYBOARD;   
   inputs329[1].ki.wVk = 78;   
   inputs329[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs329, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs330[2] = {};   
   ZeroMemory(inputs330, sizeof(inputs330));
   
   inputs330[0].type = INPUT_KEYBOARD;   
   inputs330[0].ki.wVk = 68;
   
   inputs330[1].type = INPUT_KEYBOARD;   
   inputs330[1].ki.wVk = 68;   
   inputs330[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs330, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs331[2] = {};   
   ZeroMemory(inputs331, sizeof(inputs331));
   
   inputs331[0].type = INPUT_KEYBOARD;   
   inputs331[0].ki.wVk = 189;
   
   inputs331[1].type = INPUT_KEYBOARD;   
   inputs331[1].ki.wVk = 189;   
   inputs331[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs331, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs332[2] = {};   
   ZeroMemory(inputs332, sizeof(inputs332));
   
   inputs332[0].type = INPUT_KEYBOARD;   
   inputs332[0].ki.wVk = 86;
   
   inputs332[1].type = INPUT_KEYBOARD;   
   inputs332[1].ki.wVk = 86;   
   inputs332[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs332, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs333[2] = {};   
   ZeroMemory(inputs333, sizeof(inputs333));
   
   inputs333[0].type = INPUT_KEYBOARD;   
   inputs333[0].ki.wVk = 79;
   
   inputs333[1].type = INPUT_KEYBOARD;   
   inputs333[1].ki.wVk = 79;   
   inputs333[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs333, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs334[2] = {};   
   ZeroMemory(inputs334, sizeof(inputs334));
   
   inputs334[0].type = INPUT_KEYBOARD;   
   inputs334[0].ki.wVk = 76;
   
   inputs334[1].type = INPUT_KEYBOARD;   
   inputs334[1].ki.wVk = 76;   
   inputs334[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs334, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs335[2] = {};   
   ZeroMemory(inputs335, sizeof(inputs335));
   
   inputs335[0].type = INPUT_KEYBOARD;   
   inputs335[0].ki.wVk = 85;
   
   inputs335[1].type = INPUT_KEYBOARD;   
   inputs335[1].ki.wVk = 85;   
   inputs335[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs335, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs336[2] = {};   
   ZeroMemory(inputs336, sizeof(inputs336));
   
   inputs336[0].type = INPUT_KEYBOARD;   
   inputs336[0].ki.wVk = 77;
   
   inputs336[1].type = INPUT_KEYBOARD;   
   inputs336[1].ki.wVk = 77;   
   inputs336[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs336, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs337[2] = {};   
   ZeroMemory(inputs337, sizeof(inputs337));
   
   inputs337[0].type = INPUT_KEYBOARD;   
   inputs337[0].ki.wVk = 69;
   
   inputs337[1].type = INPUT_KEYBOARD;   
   inputs337[1].ki.wVk = 69;   
   inputs337[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs337, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs338[2] = {};   
   ZeroMemory(inputs338, sizeof(inputs338));
   
   inputs338[0].type = INPUT_KEYBOARD;   
   inputs338[0].ki.wVk = 189;
   
   inputs338[1].type = INPUT_KEYBOARD;   
   inputs338[1].ki.wVk = 189;   
   inputs338[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs338, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs339[2] = {};   
   ZeroMemory(inputs339, sizeof(inputs339));
   
   inputs339[0].type = INPUT_KEYBOARD;   
   inputs339[0].ki.wVk = 85;
   
   inputs339[1].type = INPUT_KEYBOARD;   
   inputs339[1].ki.wVk = 85;   
   inputs339[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs339, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs340[2] = {};   
   ZeroMemory(inputs340, sizeof(inputs340));
   
   inputs340[0].type = INPUT_KEYBOARD;   
   inputs340[0].ki.wVk = 80;
   
   inputs340[1].type = INPUT_KEYBOARD;   
   inputs340[1].ki.wVk = 80;   
   inputs340[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs340, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs341[2] = {};   
   ZeroMemory(inputs341, sizeof(inputs341));
   
   inputs341[0].type = INPUT_KEYBOARD;   
   inputs341[0].ki.wVk = 32;
   
   inputs341[1].type = INPUT_KEYBOARD;   
   inputs341[1].ki.wVk = 32;   
   inputs341[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs341, sizeof(INPUT));
   
   INPUT inputs342[2] = {};   
   ZeroMemory(inputs342, sizeof(inputs342));
   
   inputs342[0].type = INPUT_KEYBOARD;   
   inputs342[0].ki.wVk = 48;
   
   inputs342[1].type = INPUT_KEYBOARD;   
   inputs342[1].ki.wVk = 48;   
   inputs342[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs342, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs343[2] = {};   
   ZeroMemory(inputs343, sizeof(inputs343));
   
   inputs343[0].type = INPUT_KEYBOARD;   
   inputs343[0].ki.wVk = 32;
   
   inputs343[1].type = INPUT_KEYBOARD;   
   inputs343[1].ki.wVk = 32;   
   inputs343[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs343, sizeof(INPUT));
   
   INPUT inputs344[2] = {};   
   ZeroMemory(inputs344, sizeof(inputs344));
   
   inputs344[0].type = INPUT_KEYBOARD;   
   inputs344[0].ki.wVk = 48;
   
   inputs344[1].type = INPUT_KEYBOARD;   
   inputs344[1].ki.wVk = 48;   
   inputs344[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs344, sizeof(INPUT));
   
   INPUT inputs345[2] = {};   
   ZeroMemory(inputs345, sizeof(inputs345));
   
   inputs345[0].type = INPUT_KEYBOARD;   
   inputs345[0].ki.wVk = 88;
   
   inputs345[1].type = INPUT_KEYBOARD;   
   inputs345[1].ki.wVk = 88;   
   inputs345[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs345, sizeof(INPUT));
   
   INPUT inputs346[2] = {};   
   ZeroMemory(inputs346, sizeof(inputs346));
   
   inputs346[0].type = INPUT_KEYBOARD;   
   inputs346[0].ki.wVk = 65;
   
   inputs346[1].type = INPUT_KEYBOARD;   
   inputs346[1].ki.wVk = 65;   
   inputs346[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs346, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs347[2] = {};   
   ZeroMemory(inputs347, sizeof(inputs347));
   
   inputs347[0].type = INPUT_KEYBOARD;   
   inputs347[0].ki.wVk = 48;
   
   inputs347[1].type = INPUT_KEYBOARD;   
   inputs347[1].ki.wVk = 48;   
   inputs347[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs347, sizeof(INPUT));
   
   INPUT inputs348[2] = {};   
   ZeroMemory(inputs348, sizeof(inputs348));
   
   inputs348[0].type = INPUT_KEYBOARD;   
   inputs348[0].ki.wVk = 48;
   
   inputs348[1].type = INPUT_KEYBOARD;   
   inputs348[1].ki.wVk = 48;   
   inputs348[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs348, sizeof(INPUT));
   
   INPUT inputs349[2] = {};   
   ZeroMemory(inputs349, sizeof(inputs349));
   
   inputs349[0].type = INPUT_KEYBOARD;   
   inputs349[0].ki.wVk = 48;
   
   inputs349[1].type = INPUT_KEYBOARD;   
   inputs349[1].ki.wVk = 48;   
   inputs349[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs349, sizeof(INPUT));
   
   INPUT inputs350[2] = {};   
   ZeroMemory(inputs350, sizeof(inputs350));
   
   inputs350[0].type = INPUT_KEYBOARD;   
   inputs350[0].ki.wVk = 48;
   
   inputs350[1].type = INPUT_KEYBOARD;   
   inputs350[1].ki.wVk = 48;   
   inputs350[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs350, sizeof(INPUT));
   
   INPUT inputs351[2] = {};   
   ZeroMemory(inputs351, sizeof(inputs351));
   
   inputs351[0].type = INPUT_KEYBOARD;   
   inputs351[0].ki.wVk = 188;
   
   inputs351[1].type = INPUT_KEYBOARD;   
   inputs351[1].ki.wVk = 188;   
   inputs351[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs351, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs352[2] = {};   
   ZeroMemory(inputs352, sizeof(inputs352));
   
   inputs352[0].type = INPUT_KEYBOARD;   
   inputs352[0].ki.wVk = 32;
   
   inputs352[1].type = INPUT_KEYBOARD;   
   inputs352[1].ki.wVk = 32;   
   inputs352[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs352, sizeof(INPUT));
   
   INPUT inputs353[2] = {};   
   ZeroMemory(inputs353, sizeof(inputs353));
   
   inputs353[0].type = INPUT_KEYBOARD;   
   inputs353[0].ki.wVk = 80;
   
   inputs353[1].type = INPUT_KEYBOARD;   
   inputs353[1].ki.wVk = 80;   
   inputs353[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs353, sizeof(INPUT));
   
   INPUT inputs354[2] = {};   
   ZeroMemory(inputs354, sizeof(inputs354));
   
   inputs354[0].type = INPUT_KEYBOARD;   
   inputs354[0].ki.wVk = 82;
   
   inputs354[1].type = INPUT_KEYBOARD;   
   inputs354[1].ki.wVk = 82;   
   inputs354[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs354, sizeof(INPUT));
   
   INPUT inputs355[2] = {};   
   ZeroMemory(inputs355, sizeof(inputs355));
   
   inputs355[0].type = INPUT_KEYBOARD;   
   inputs355[0].ki.wVk = 73;
   
   inputs355[1].type = INPUT_KEYBOARD;   
   inputs355[1].ki.wVk = 73;   
   inputs355[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs355, sizeof(INPUT));
   
   INPUT inputs356[2] = {};   
   ZeroMemory(inputs356, sizeof(inputs356));
   
   inputs356[0].type = INPUT_KEYBOARD;   
   inputs356[0].ki.wVk = 86;
   
   inputs356[1].type = INPUT_KEYBOARD;   
   inputs356[1].ki.wVk = 86;   
   inputs356[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs356, sizeof(INPUT));
   
   INPUT inputs357[2] = {};   
   ZeroMemory(inputs357, sizeof(inputs357));
   
   inputs357[0].type = INPUT_KEYBOARD;   
   inputs357[0].ki.wVk = 65;
   
   inputs357[1].type = INPUT_KEYBOARD;   
   inputs357[1].ki.wVk = 65;   
   inputs357[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs357, sizeof(INPUT));
   
   INPUT inputs358[2] = {};   
   ZeroMemory(inputs358, sizeof(inputs358));
   
   inputs358[0].type = INPUT_KEYBOARD;   
   inputs358[0].ki.wVk = 84;
   
   inputs358[1].type = INPUT_KEYBOARD;   
   inputs358[1].ki.wVk = 84;   
   inputs358[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs358, sizeof(INPUT));
   
   INPUT inputs359[2] = {};   
   ZeroMemory(inputs359, sizeof(inputs359));
   
   inputs359[0].type = INPUT_KEYBOARD;   
   inputs359[0].ki.wVk = 69;
   
   inputs359[1].type = INPUT_KEYBOARD;   
   inputs359[1].ki.wVk = 69;   
   inputs359[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs359, sizeof(INPUT));
   
   INPUT inputs360[2] = {};   
   ZeroMemory(inputs360, sizeof(inputs360));
   
   inputs360[0].type = INPUT_KEYBOARD;   
   inputs360[0].ki.wVk = 32;
   
   inputs360[1].type = INPUT_KEYBOARD;   
   inputs360[1].ki.wVk = 32;   
   inputs360[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs360, sizeof(INPUT));
   
   INPUT inputs361[2] = {};   
   ZeroMemory(inputs361, sizeof(inputs361));
   
   inputs361[0].type = INPUT_KEYBOARD;   
   inputs361[0].ki.wVk = 67;
   
   inputs361[1].type = INPUT_KEYBOARD;   
   inputs361[1].ki.wVk = 67;   
   inputs361[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs361, sizeof(INPUT));
   
   INPUT inputs362[2] = {};   
   ZeroMemory(inputs362, sizeof(inputs362));
   
   inputs362[0].type = INPUT_KEYBOARD;   
   inputs362[0].ki.wVk = 79;
   
   inputs362[1].type = INPUT_KEYBOARD;   
   inputs362[1].ki.wVk = 79;   
   inputs362[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs362, sizeof(INPUT));
   
   INPUT inputs363[2] = {};   
   ZeroMemory(inputs363, sizeof(inputs363));
   
   inputs363[0].type = INPUT_KEYBOARD;   
   inputs363[0].ki.wVk = 78;
   
   inputs363[1].type = INPUT_KEYBOARD;   
   inputs363[1].ki.wVk = 78;   
   inputs363[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs363, sizeof(INPUT));
   
   INPUT inputs364[2] = {};   
   ZeroMemory(inputs364, sizeof(inputs364));
   
   inputs364[0].type = INPUT_KEYBOARD;   
   inputs364[0].ki.wVk = 83;
   
   inputs364[1].type = INPUT_KEYBOARD;   
   inputs364[1].ki.wVk = 83;   
   inputs364[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs364, sizeof(INPUT));
   
   INPUT inputs365[2] = {};   
   ZeroMemory(inputs365, sizeof(inputs365));
   
   inputs365[0].type = INPUT_KEYBOARD;   
   inputs365[0].ki.wVk = 84;
   
   inputs365[1].type = INPUT_KEYBOARD;   
   inputs365[1].ki.wVk = 84;   
   inputs365[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs365, sizeof(INPUT));
   
   INPUT inputs366[2] = {};   
   ZeroMemory(inputs366, sizeof(inputs366));
   
   inputs366[0].type = INPUT_KEYBOARD;   
   inputs366[0].ki.wVk = 32;
   
   inputs366[1].type = INPUT_KEYBOARD;   
   inputs366[1].ki.wVk = 32;   
   inputs366[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs366, sizeof(INPUT));
   
   INPUT inputs367[2] = {};   
   ZeroMemory(inputs367, sizeof(inputs367));
   
   inputs367[0].type = INPUT_KEYBOARD;   
   inputs367[0].ki.wVk = 73;
   
   inputs367[1].type = INPUT_KEYBOARD;   
   inputs367[1].ki.wVk = 73;   
   inputs367[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs367, sizeof(INPUT));
   
   INPUT inputs368[2] = {};   
   ZeroMemory(inputs368, sizeof(inputs368));
   
   inputs368[0].type = INPUT_KEYBOARD;   
   inputs368[0].ki.wVk = 78;
   
   inputs368[1].type = INPUT_KEYBOARD;   
   inputs368[1].ki.wVk = 78;   
   inputs368[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs368, sizeof(INPUT));
   
   INPUT inputs369[2] = {};   
   ZeroMemory(inputs369, sizeof(inputs369));
   
   inputs369[0].type = INPUT_KEYBOARD;   
   inputs369[0].ki.wVk = 84;
   
   inputs369[1].type = INPUT_KEYBOARD;   
   inputs369[1].ki.wVk = 84;   
   inputs369[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs369, sizeof(INPUT));
   
   INPUT inputs370[2] = {};   
   ZeroMemory(inputs370, sizeof(inputs370));
   
   inputs370[0].type = INPUT_KEYBOARD;   
   inputs370[0].ki.wVk = 32;
   
   inputs370[1].type = INPUT_KEYBOARD;   
   inputs370[1].ki.wVk = 32;   
   inputs370[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs370, sizeof(INPUT));
   
   INPUT inputs371[2] = {};   
   ZeroMemory(inputs371, sizeof(inputs371));
   
   inputs371[0].type = INPUT_KEYBOARD;   
   inputs371[0].ki.wVk = 87;
   
   inputs371[1].type = INPUT_KEYBOARD;   
   inputs371[1].ki.wVk = 87;   
   inputs371[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs371, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs372[2] = {};   
   ZeroMemory(inputs372, sizeof(inputs372));
   
   inputs372[0].type = INPUT_KEYBOARD;   
   inputs372[0].ki.wVk = 77;
   
   inputs372[1].type = INPUT_KEYBOARD;   
   inputs372[1].ki.wVk = 77;   
   inputs372[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs372, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs373[2] = {};   
   ZeroMemory(inputs373, sizeof(inputs373));
   
   inputs373[0].type = INPUT_KEYBOARD;   
   inputs373[0].ki.wVk = 189;
   
   inputs373[1].type = INPUT_KEYBOARD;   
   inputs373[1].ki.wVk = 189;   
   inputs373[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs373, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs374[2] = {};   
   ZeroMemory(inputs374, sizeof(inputs374));
   
   inputs374[0].type = INPUT_KEYBOARD;   
   inputs374[0].ki.wVk = 65;
   
   inputs374[1].type = INPUT_KEYBOARD;   
   inputs374[1].ki.wVk = 65;   
   inputs374[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs374, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs375[2] = {};   
   ZeroMemory(inputs375, sizeof(inputs375));
   
   inputs375[0].type = INPUT_KEYBOARD;   
   inputs375[0].ki.wVk = 80;
   
   inputs375[1].type = INPUT_KEYBOARD;   
   inputs375[1].ki.wVk = 80;   
   inputs375[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs375, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs376[2] = {};   
   ZeroMemory(inputs376, sizeof(inputs376));
   
   inputs376[0].type = INPUT_KEYBOARD;   
   inputs376[0].ki.wVk = 80;
   
   inputs376[1].type = INPUT_KEYBOARD;   
   inputs376[1].ki.wVk = 80;   
   inputs376[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs376, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs377[2] = {};   
   ZeroMemory(inputs377, sizeof(inputs377));
   
   inputs377[0].type = INPUT_KEYBOARD;   
   inputs377[0].ki.wVk = 67;
   
   inputs377[1].type = INPUT_KEYBOARD;   
   inputs377[1].ki.wVk = 67;   
   inputs377[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs377, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs378[2] = {};   
   ZeroMemory(inputs378, sizeof(inputs378));
   
   inputs378[0].type = INPUT_KEYBOARD;   
   inputs378[0].ki.wVk = 79;
   
   inputs378[1].type = INPUT_KEYBOARD;   
   inputs378[1].ki.wVk = 79;   
   inputs378[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs378, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs379[2] = {};   
   ZeroMemory(inputs379, sizeof(inputs379));
   
   inputs379[0].type = INPUT_KEYBOARD;   
   inputs379[0].ki.wVk = 77;
   
   inputs379[1].type = INPUT_KEYBOARD;   
   inputs379[1].ki.wVk = 77;   
   inputs379[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs379, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs380[2] = {};   
   ZeroMemory(inputs380, sizeof(inputs380));
   
   inputs380[0].type = INPUT_KEYBOARD;   
   inputs380[0].ki.wVk = 77;
   
   inputs380[1].type = INPUT_KEYBOARD;   
   inputs380[1].ki.wVk = 77;   
   inputs380[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs380, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs381[2] = {};   
   ZeroMemory(inputs381, sizeof(inputs381));
   
   inputs381[0].type = INPUT_KEYBOARD;   
   inputs381[0].ki.wVk = 65;
   
   inputs381[1].type = INPUT_KEYBOARD;   
   inputs381[1].ki.wVk = 65;   
   inputs381[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs381, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs382[2] = {};   
   ZeroMemory(inputs382, sizeof(inputs382));
   
   inputs382[0].type = INPUT_KEYBOARD;   
   inputs382[0].ki.wVk = 78;
   
   inputs382[1].type = INPUT_KEYBOARD;   
   inputs382[1].ki.wVk = 78;   
   inputs382[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs382, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs383[2] = {};   
   ZeroMemory(inputs383, sizeof(inputs383));
   
   inputs383[0].type = INPUT_KEYBOARD;   
   inputs383[0].ki.wVk = 68;
   
   inputs383[1].type = INPUT_KEYBOARD;   
   inputs383[1].ki.wVk = 68;   
   inputs383[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs383, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs384[2] = {};   
   ZeroMemory(inputs384, sizeof(inputs384));
   
   inputs384[0].type = INPUT_KEYBOARD;   
   inputs384[0].ki.wVk = 32;
   
   inputs384[1].type = INPUT_KEYBOARD;   
   inputs384[1].ki.wVk = 32;   
   inputs384[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs384, sizeof(INPUT));
   
   INPUT inputs385[2] = {};   
   ZeroMemory(inputs385, sizeof(inputs385));
   
   inputs385[0].type = INPUT_KEYBOARD;   
   inputs385[0].ki.wVk = 48;
   
   inputs385[1].type = INPUT_KEYBOARD;   
   inputs385[1].ki.wVk = 48;   
   inputs385[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs385, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs386[2] = {};   
   ZeroMemory(inputs386, sizeof(inputs386));
   
   inputs386[0].type = INPUT_KEYBOARD;   
   inputs386[0].ki.wVk = 32;
   
   inputs386[1].type = INPUT_KEYBOARD;   
   inputs386[1].ki.wVk = 32;   
   inputs386[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs386, sizeof(INPUT));
   
   INPUT inputs387[2] = {};   
   ZeroMemory(inputs387, sizeof(inputs387));
   
   inputs387[0].type = INPUT_KEYBOARD;   
   inputs387[0].ki.wVk = 48;
   
   inputs387[1].type = INPUT_KEYBOARD;   
   inputs387[1].ki.wVk = 48;   
   inputs387[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs387, sizeof(INPUT));
   
   INPUT inputs388[2] = {};   
   ZeroMemory(inputs388, sizeof(inputs388));
   
   inputs388[0].type = INPUT_KEYBOARD;   
   inputs388[0].ki.wVk = 88;
   
   inputs388[1].type = INPUT_KEYBOARD;   
   inputs388[1].ki.wVk = 88;   
   inputs388[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs388, sizeof(INPUT));
   
   INPUT inputs389[2] = {};   
   ZeroMemory(inputs389, sizeof(inputs389));
   
   inputs389[0].type = INPUT_KEYBOARD;   
   inputs389[0].ki.wVk = 51;
   
   inputs389[1].type = INPUT_KEYBOARD;   
   inputs389[1].ki.wVk = 51;   
   inputs389[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs389, sizeof(INPUT));
   
   INPUT inputs390[2] = {};   
   ZeroMemory(inputs390, sizeof(inputs390));
   
   inputs390[0].type = INPUT_KEYBOARD;   
   inputs390[0].ki.wVk = 49;
   
   inputs390[1].type = INPUT_KEYBOARD;   
   inputs390[1].ki.wVk = 49;   
   inputs390[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs390, sizeof(INPUT));
   
   INPUT inputs391[2] = {};   
   ZeroMemory(inputs391, sizeof(inputs391));
   
   inputs391[0].type = INPUT_KEYBOARD;   
   inputs391[0].ki.wVk = 57;
   
   inputs391[1].type = INPUT_KEYBOARD;   
   inputs391[1].ki.wVk = 57;   
   inputs391[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs391, sizeof(INPUT));
   
   INPUT inputs392[2] = {};   
   ZeroMemory(inputs392, sizeof(inputs392));
   
   inputs392[0].type = INPUT_KEYBOARD;   
   inputs392[0].ki.wVk = 188;
   
   inputs392[1].type = INPUT_KEYBOARD;   
   inputs392[1].ki.wVk = 188;   
   inputs392[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs392, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs393[2] = {};   
   ZeroMemory(inputs393, sizeof(inputs393));
   
   inputs393[0].type = INPUT_KEYBOARD;   
   inputs393[0].ki.wVk = 32;
   
   inputs393[1].type = INPUT_KEYBOARD;   
   inputs393[1].ki.wVk = 32;   
   inputs393[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs393, sizeof(INPUT));
   
   INPUT inputs394[2] = {};   
   ZeroMemory(inputs394, sizeof(inputs394));
   
   inputs394[0].type = INPUT_KEYBOARD;   
   inputs394[0].ki.wVk = 80;
   
   inputs394[1].type = INPUT_KEYBOARD;   
   inputs394[1].ki.wVk = 80;   
   inputs394[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs394, sizeof(INPUT));
   
   INPUT inputs395[2] = {};   
   ZeroMemory(inputs395, sizeof(inputs395));
   
   inputs395[0].type = INPUT_KEYBOARD;   
   inputs395[0].ki.wVk = 85;
   
   inputs395[1].type = INPUT_KEYBOARD;   
   inputs395[1].ki.wVk = 85;   
   inputs395[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs395, sizeof(INPUT));
   
   INPUT inputs396[2] = {};   
   ZeroMemory(inputs396, sizeof(inputs396));
   
   inputs396[0].type = INPUT_KEYBOARD;   
   inputs396[0].ki.wVk = 66;
   
   inputs396[1].type = INPUT_KEYBOARD;   
   inputs396[1].ki.wVk = 66;   
   inputs396[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs396, sizeof(INPUT));
   
   INPUT inputs397[2] = {};   
   ZeroMemory(inputs397, sizeof(inputs397));
   
   inputs397[0].type = INPUT_KEYBOARD;   
   inputs397[0].ki.wVk = 76;
   
   inputs397[1].type = INPUT_KEYBOARD;   
   inputs397[1].ki.wVk = 76;   
   inputs397[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs397, sizeof(INPUT));
   
   INPUT inputs398[2] = {};   
   ZeroMemory(inputs398, sizeof(inputs398));
   
   inputs398[0].type = INPUT_KEYBOARD;   
   inputs398[0].ki.wVk = 73;
   
   inputs398[1].type = INPUT_KEYBOARD;   
   inputs398[1].ki.wVk = 73;   
   inputs398[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs398, sizeof(INPUT));
   
   INPUT inputs399[2] = {};   
   ZeroMemory(inputs399, sizeof(inputs399));
   
   inputs399[0].type = INPUT_KEYBOARD;   
   inputs399[0].ki.wVk = 67;
   
   inputs399[1].type = INPUT_KEYBOARD;   
   inputs399[1].ki.wVk = 67;   
   inputs399[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs399, sizeof(INPUT));
   
   INPUT inputs400[2] = {};   
   ZeroMemory(inputs400, sizeof(inputs400));
   
   inputs400[0].type = INPUT_KEYBOARD;   
   inputs400[0].ki.wVk = 32;
   
   inputs400[1].type = INPUT_KEYBOARD;   
   inputs400[1].ki.wVk = 32;   
   inputs400[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs400, sizeof(INPUT));
   
   INPUT inputs401[2] = {};   
   ZeroMemory(inputs401, sizeof(inputs401));
   
   inputs401[0].type = INPUT_KEYBOARD;   
   inputs401[0].ki.wVk = 83;
   
   inputs401[1].type = INPUT_KEYBOARD;   
   inputs401[1].ki.wVk = 83;   
   inputs401[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs401, sizeof(INPUT));
   
   INPUT inputs402[2] = {};   
   ZeroMemory(inputs402, sizeof(inputs402));
   
   inputs402[0].type = INPUT_KEYBOARD;   
   inputs402[0].ki.wVk = 84;
   
   inputs402[1].type = INPUT_KEYBOARD;   
   inputs402[1].ki.wVk = 84;   
   inputs402[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs402, sizeof(INPUT));
   
   INPUT inputs403[2] = {};   
   ZeroMemory(inputs403, sizeof(inputs403));
   
   inputs403[0].type = INPUT_KEYBOARD;   
   inputs403[0].ki.wVk = 65;
   
   inputs403[1].type = INPUT_KEYBOARD;   
   inputs403[1].ki.wVk = 65;   
   inputs403[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs403, sizeof(INPUT));
   
   INPUT inputs404[2] = {};   
   ZeroMemory(inputs404, sizeof(inputs404));
   
   inputs404[0].type = INPUT_KEYBOARD;   
   inputs404[0].ki.wVk = 84;
   
   inputs404[1].type = INPUT_KEYBOARD;   
   inputs404[1].ki.wVk = 84;   
   inputs404[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs404, sizeof(INPUT));
   
   INPUT inputs405[2] = {};   
   ZeroMemory(inputs405, sizeof(inputs405));
   
   inputs405[0].type = INPUT_KEYBOARD;   
   inputs405[0].ki.wVk = 73;
   
   inputs405[1].type = INPUT_KEYBOARD;   
   inputs405[1].ki.wVk = 73;   
   inputs405[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs405, sizeof(INPUT));
   
   INPUT inputs406[2] = {};   
   ZeroMemory(inputs406, sizeof(inputs406));
   
   inputs406[0].type = INPUT_KEYBOARD;   
   inputs406[0].ki.wVk = 67;
   
   inputs406[1].type = INPUT_KEYBOARD;   
   inputs406[1].ki.wVk = 67;   
   inputs406[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs406, sizeof(INPUT));
   
   INPUT inputs407[2] = {};   
   ZeroMemory(inputs407, sizeof(inputs407));
   
   inputs407[0].type = INPUT_KEYBOARD;   
   inputs407[0].ki.wVk = 32;
   
   inputs407[1].type = INPUT_KEYBOARD;   
   inputs407[1].ki.wVk = 32;   
   inputs407[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs407, sizeof(INPUT));
   
   INPUT inputs408[2] = {};   
   ZeroMemory(inputs408, sizeof(inputs408));
   
   inputs408[0].type = INPUT_KEYBOARD;   
   inputs408[0].ki.wVk = 86;
   
   inputs408[1].type = INPUT_KEYBOARD;   
   inputs408[1].ki.wVk = 86;   
   inputs408[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs408, sizeof(INPUT));
   
   INPUT inputs409[2] = {};   
   ZeroMemory(inputs409, sizeof(inputs409));
   
   inputs409[0].type = INPUT_KEYBOARD;   
   inputs409[0].ki.wVk = 79;
   
   inputs409[1].type = INPUT_KEYBOARD;   
   inputs409[1].ki.wVk = 79;   
   inputs409[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs409, sizeof(INPUT));
   
   INPUT inputs410[2] = {};   
   ZeroMemory(inputs410, sizeof(inputs410));
   
   inputs410[0].type = INPUT_KEYBOARD;   
   inputs410[0].ki.wVk = 73;
   
   inputs410[1].type = INPUT_KEYBOARD;   
   inputs410[1].ki.wVk = 73;   
   inputs410[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs410, sizeof(INPUT));
   
   INPUT inputs411[2] = {};   
   ZeroMemory(inputs411, sizeof(inputs411));
   
   inputs411[0].type = INPUT_KEYBOARD;   
   inputs411[0].ki.wVk = 68;
   
   inputs411[1].type = INPUT_KEYBOARD;   
   inputs411[1].ki.wVk = 68;   
   inputs411[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs411, sizeof(INPUT));
   
   INPUT inputs412[2] = {};   
   ZeroMemory(inputs412, sizeof(inputs412));
   
   inputs412[0].type = INPUT_KEYBOARD;   
   inputs412[0].ki.wVk = 32;
   
   inputs412[1].type = INPUT_KEYBOARD;   
   inputs412[1].ki.wVk = 32;   
   inputs412[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs412, sizeof(INPUT));
   
   INPUT inputs413[2] = {};   
   ZeroMemory(inputs413, sizeof(inputs413));
   
   inputs413[0].type = INPUT_KEYBOARD;   
   inputs413[0].ki.wVk = 77;
   
   inputs413[1].type = INPUT_KEYBOARD;   
   inputs413[1].ki.wVk = 77;   
   inputs413[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs413, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs414[2] = {};   
   ZeroMemory(inputs414, sizeof(inputs414));
   
   inputs414[0].type = INPUT_KEYBOARD;   
   inputs414[0].ki.wVk = 65;
   
   inputs414[1].type = INPUT_KEYBOARD;   
   inputs414[1].ki.wVk = 65;   
   inputs414[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs414, sizeof(INPUT));
   
   INPUT inputs415[2] = {};   
   ZeroMemory(inputs415, sizeof(inputs415));
   
   inputs415[0].type = INPUT_KEYBOARD;   
   inputs415[0].ki.wVk = 88;
   
   inputs415[1].type = INPUT_KEYBOARD;   
   inputs415[1].ki.wVk = 88;   
   inputs415[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs415, sizeof(INPUT));
   
   INPUT inputs416[2] = {};   
   ZeroMemory(inputs416, sizeof(inputs416));
   
   inputs416[0].type = INPUT_KEYBOARD;   
   inputs416[0].ki.wVk = 86;
   
   inputs416[1].type = INPUT_KEYBOARD;   
   inputs416[1].ki.wVk = 86;   
   inputs416[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs416, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs417[2] = {};   
   ZeroMemory(inputs417, sizeof(inputs417));
   
   inputs417[0].type = INPUT_KEYBOARD;   
   inputs417[0].ki.wVk = 79;
   
   inputs417[1].type = INPUT_KEYBOARD;   
   inputs417[1].ki.wVk = 79;   
   inputs417[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs417, sizeof(INPUT));
   
   INPUT inputs418[2] = {};   
   ZeroMemory(inputs418, sizeof(inputs418));
   
   inputs418[0].type = INPUT_KEYBOARD;   
   inputs418[0].ki.wVk = 76;
   
   inputs418[1].type = INPUT_KEYBOARD;   
   inputs418[1].ki.wVk = 76;   
   inputs418[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs418, sizeof(INPUT));
   
   INPUT inputs419[2] = {};   
   ZeroMemory(inputs419, sizeof(inputs419));
   
   inputs419[0].type = INPUT_KEYBOARD;   
   inputs419[0].ki.wVk = 85;
   
   inputs419[1].type = INPUT_KEYBOARD;   
   inputs419[1].ki.wVk = 85;   
   inputs419[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs419, sizeof(INPUT));
   
   INPUT inputs420[2] = {};   
   ZeroMemory(inputs420, sizeof(inputs420));
   
   inputs420[0].type = INPUT_KEYBOARD;   
   inputs420[0].ki.wVk = 77;
   
   inputs420[1].type = INPUT_KEYBOARD;   
   inputs420[1].ki.wVk = 77;   
   inputs420[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs420, sizeof(INPUT));
   
   INPUT inputs421[2] = {};   
   ZeroMemory(inputs421, sizeof(inputs421));
   
   inputs421[0].type = INPUT_KEYBOARD;   
   inputs421[0].ki.wVk = 69;
   
   inputs421[1].type = INPUT_KEYBOARD;   
   inputs421[1].ki.wVk = 69;   
   inputs421[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs421, sizeof(INPUT));
   
   INPUT inputs422[2] = {};   
   ZeroMemory(inputs422, sizeof(inputs422));
   
   inputs422[0].type = INPUT_KEYBOARD;   
   inputs422[0].ki.wVk = 56;
   
   inputs422[1].type = INPUT_KEYBOARD;   
   inputs422[1].ki.wVk = 56;   
   inputs422[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs422, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs423[2] = {};   
   ZeroMemory(inputs423, sizeof(inputs423));
   
   inputs423[0].type = INPUT_KEYBOARD;   
   inputs423[0].ki.wVk = 57;
   
   inputs423[1].type = INPUT_KEYBOARD;   
   inputs423[1].ki.wVk = 57;   
   inputs423[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs423, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs424[2] = {};   
   ZeroMemory(inputs424, sizeof(inputs424));
   
   inputs424[0].type = INPUT_KEYBOARD;   
   inputs424[0].ki.wVk = 66;
   
   inputs424[1].type = INPUT_KEYBOARD;   
   inputs424[1].ki.wVk = 66;   
   inputs424[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs424, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs425[2] = {};   
   ZeroMemory(inputs425, sizeof(inputs425));
   
   inputs425[0].type = INPUT_KEYBOARD;   
   inputs425[0].ki.wVk = 83;
   
   inputs425[1].type = INPUT_KEYBOARD;   
   inputs425[1].ki.wVk = 83;   
   inputs425[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs425, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs426[2] = {};   
   ZeroMemory(inputs426, sizeof(inputs426));
   
   inputs426[0].type = INPUT_KEYBOARD;   
   inputs426[0].ki.wVk = 69;
   
   inputs426[1].type = INPUT_KEYBOARD;   
   inputs426[1].ki.wVk = 69;   
   inputs426[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs426, sizeof(INPUT));
   
   INPUT inputs427[2] = {};   
   ZeroMemory(inputs427, sizeof(inputs427));
   
   inputs427[0].type = INPUT_KEYBOARD;   
   inputs427[0].ki.wVk = 78;
   
   inputs427[1].type = INPUT_KEYBOARD;   
   inputs427[1].ki.wVk = 78;   
   inputs427[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs427, sizeof(INPUT));
   
   INPUT inputs428[2] = {};   
   ZeroMemory(inputs428, sizeof(inputs428));
   
   inputs428[0].type = INPUT_KEYBOARD;   
   inputs428[0].ki.wVk = 68;
   
   inputs428[1].type = INPUT_KEYBOARD;   
   inputs428[1].ki.wVk = 68;   
   inputs428[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs428, sizeof(INPUT));
   
   INPUT inputs429[2] = {};   
   ZeroMemory(inputs429, sizeof(inputs429));
   
   inputs429[0].type = INPUT_KEYBOARD;   
   inputs429[0].ki.wVk = 77;
   
   inputs429[1].type = INPUT_KEYBOARD;   
   inputs429[1].ki.wVk = 77;   
   inputs429[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs429, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs430[2] = {};   
   ZeroMemory(inputs430, sizeof(inputs430));
   
   inputs430[0].type = INPUT_KEYBOARD;   
   inputs430[0].ki.wVk = 69;
   
   inputs430[1].type = INPUT_KEYBOARD;   
   inputs430[1].ki.wVk = 69;   
   inputs430[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs430, sizeof(INPUT));
   
   INPUT inputs431[2] = {};   
   ZeroMemory(inputs431, sizeof(inputs431));
   
   inputs431[0].type = INPUT_KEYBOARD;   
   inputs431[0].ki.wVk = 83;
   
   inputs431[1].type = INPUT_KEYBOARD;   
   inputs431[1].ki.wVk = 83;   
   inputs431[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs431, sizeof(INPUT));
   
   INPUT inputs432[2] = {};   
   ZeroMemory(inputs432, sizeof(inputs432));
   
   inputs432[0].type = INPUT_KEYBOARD;   
   inputs432[0].ki.wVk = 83;
   
   inputs432[1].type = INPUT_KEYBOARD;   
   inputs432[1].ki.wVk = 83;   
   inputs432[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs432, sizeof(INPUT));
   
   INPUT inputs433[2] = {};   
   ZeroMemory(inputs433, sizeof(inputs433));
   
   inputs433[0].type = INPUT_KEYBOARD;   
   inputs433[0].ki.wVk = 65;
   
   inputs433[1].type = INPUT_KEYBOARD;   
   inputs433[1].ki.wVk = 65;   
   inputs433[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs433, sizeof(INPUT));
   
   INPUT inputs434[2] = {};   
   ZeroMemory(inputs434, sizeof(inputs434));
   
   inputs434[0].type = INPUT_KEYBOARD;   
   inputs434[0].ki.wVk = 71;
   
   inputs434[1].type = INPUT_KEYBOARD;   
   inputs434[1].ki.wVk = 71;   
   inputs434[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs434, sizeof(INPUT));
   
   INPUT inputs435[2] = {};   
   ZeroMemory(inputs435, sizeof(inputs435));
   
   inputs435[0].type = INPUT_KEYBOARD;   
   inputs435[0].ki.wVk = 69;
   
   inputs435[1].type = INPUT_KEYBOARD;   
   inputs435[1].ki.wVk = 69;   
   inputs435[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs435, sizeof(INPUT));
   
   INPUT inputs436[2] = {};   
   ZeroMemory(inputs436, sizeof(inputs436));
   
   inputs436[0].type = INPUT_KEYBOARD;   
   inputs436[0].ki.wVk = 87;
   
   inputs436[1].type = INPUT_KEYBOARD;   
   inputs436[1].ki.wVk = 87;   
   inputs436[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs436, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs437[2] = {};   
   ZeroMemory(inputs437, sizeof(inputs437));
   
   inputs437[0].type = INPUT_KEYBOARD;   
   inputs437[0].ki.wVk = 56;
   
   inputs437[1].type = INPUT_KEYBOARD;   
   inputs437[1].ki.wVk = 56;   
   inputs437[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs437, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs438[2] = {};   
   ZeroMemory(inputs438, sizeof(inputs438));
   
   inputs438[0].type = INPUT_KEYBOARD;   
   inputs438[0].ki.wVk = 78;
   
   inputs438[1].type = INPUT_KEYBOARD;   
   inputs438[1].ki.wVk = 78;   
   inputs438[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs438, sizeof(INPUT));
   
   INPUT inputs439[2] = {};   
   ZeroMemory(inputs439, sizeof(inputs439));
   
   inputs439[0].type = INPUT_KEYBOARD;   
   inputs439[0].ki.wVk = 69;
   
   inputs439[1].type = INPUT_KEYBOARD;   
   inputs439[1].ki.wVk = 69;   
   inputs439[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs439, sizeof(INPUT));
   
   INPUT inputs440[2] = {};   
   ZeroMemory(inputs440, sizeof(inputs440));
   
   inputs440[0].type = INPUT_KEYBOARD;   
   inputs440[0].ki.wVk = 87;
   
   inputs440[1].type = INPUT_KEYBOARD;   
   inputs440[1].ki.wVk = 87;   
   inputs440[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs440, sizeof(INPUT));
   
   INPUT inputs441[2] = {};   
   ZeroMemory(inputs441, sizeof(inputs441));
   
   inputs441[0].type = INPUT_KEYBOARD;   
   inputs441[0].ki.wVk = 32;
   
   inputs441[1].type = INPUT_KEYBOARD;   
   inputs441[1].ki.wVk = 32;   
   inputs441[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs441, sizeof(INPUT));
   
   INPUT inputs442[2] = {};   
   ZeroMemory(inputs442, sizeof(inputs442));
   
   inputs442[0].type = INPUT_KEYBOARD;   
   inputs442[0].ki.wVk = 73;
   
   inputs442[1].type = INPUT_KEYBOARD;   
   inputs442[1].ki.wVk = 73;   
   inputs442[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs442, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs443[2] = {};   
   ZeroMemory(inputs443, sizeof(inputs443));
   
   inputs443[0].type = INPUT_KEYBOARD;   
   inputs443[0].ki.wVk = 78;
   
   inputs443[1].type = INPUT_KEYBOARD;   
   inputs443[1].ki.wVk = 78;   
   inputs443[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs443, sizeof(INPUT));
   
   INPUT inputs444[2] = {};   
   ZeroMemory(inputs444, sizeof(inputs444));
   
   inputs444[0].type = INPUT_KEYBOARD;   
   inputs444[0].ki.wVk = 84;
   
   inputs444[1].type = INPUT_KEYBOARD;   
   inputs444[1].ki.wVk = 84;   
   inputs444[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs444, sizeof(INPUT));
   
   INPUT inputs445[2] = {};   
   ZeroMemory(inputs445, sizeof(inputs445));
   
   inputs445[0].type = INPUT_KEYBOARD;   
   inputs445[0].ki.wVk = 80;
   
   inputs445[1].type = INPUT_KEYBOARD;   
   inputs445[1].ki.wVk = 80;   
   inputs445[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs445, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs446[2] = {};   
   ZeroMemory(inputs446, sizeof(inputs446));
   
   inputs446[0].type = INPUT_KEYBOARD;   
   inputs446[0].ki.wVk = 84;
   
   inputs446[1].type = INPUT_KEYBOARD;   
   inputs446[1].ki.wVk = 84;   
   inputs446[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs446, sizeof(INPUT));
   
   INPUT inputs447[2] = {};   
   ZeroMemory(inputs447, sizeof(inputs447));
   
   inputs447[0].type = INPUT_KEYBOARD;   
   inputs447[0].ki.wVk = 82;
   
   inputs447[1].type = INPUT_KEYBOARD;   
   inputs447[1].ki.wVk = 82;   
   inputs447[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs447, sizeof(INPUT));
   
   INPUT inputs448[2] = {};   
   ZeroMemory(inputs448, sizeof(inputs448));
   
   inputs448[0].type = INPUT_KEYBOARD;   
   inputs448[0].ki.wVk = 56;
   
   inputs448[1].type = INPUT_KEYBOARD;   
   inputs448[1].ki.wVk = 56;   
   inputs448[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs448, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs449[2] = {};   
   ZeroMemory(inputs449, sizeof(inputs449));
   
   inputs449[0].type = INPUT_KEYBOARD;   
   inputs449[0].ki.wVk = 48;
   
   inputs449[1].type = INPUT_KEYBOARD;   
   inputs449[1].ki.wVk = 48;   
   inputs449[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs449, sizeof(INPUT));
   
   INPUT inputs450[2] = {};   
   ZeroMemory(inputs450, sizeof(inputs450));
   
   inputs450[0].type = INPUT_KEYBOARD;   
   inputs450[0].ki.wVk = 88;
   
   inputs450[1].type = INPUT_KEYBOARD;   
   inputs450[1].ki.wVk = 88;   
   inputs450[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs450, sizeof(INPUT));
   
   INPUT inputs451[2] = {};   
   ZeroMemory(inputs451, sizeof(inputs451));
   
   inputs451[0].type = INPUT_KEYBOARD;   
   inputs451[0].ki.wVk = 70;
   
   inputs451[1].type = INPUT_KEYBOARD;   
   inputs451[1].ki.wVk = 70;   
   inputs451[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs451, sizeof(INPUT));
   
   INPUT inputs452[2] = {};   
   ZeroMemory(inputs452, sizeof(inputs452));
   
   inputs452[0].type = INPUT_KEYBOARD;   
   inputs452[0].ki.wVk = 70;
   
   inputs452[1].type = INPUT_KEYBOARD;   
   inputs452[1].ki.wVk = 70;   
   inputs452[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs452, sizeof(INPUT));
   
   INPUT inputs453[2] = {};   
   ZeroMemory(inputs453, sizeof(inputs453));
   
   inputs453[0].type = INPUT_KEYBOARD;   
   inputs453[0].ki.wVk = 70;
   
   inputs453[1].type = INPUT_KEYBOARD;   
   inputs453[1].ki.wVk = 70;   
   inputs453[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs453, sizeof(INPUT));
   
   INPUT inputs454[2] = {};   
   ZeroMemory(inputs454, sizeof(inputs454));
   
   inputs454[0].type = INPUT_KEYBOARD;   
   inputs454[0].ki.wVk = 70;
   
   inputs454[1].type = INPUT_KEYBOARD;   
   inputs454[1].ki.wVk = 70;   
   inputs454[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs454, sizeof(INPUT));
   
   INPUT inputs455[2] = {};   
   ZeroMemory(inputs455, sizeof(inputs455));
   
   inputs455[0].type = INPUT_KEYBOARD;   
   inputs455[0].ki.wVk = 57;
   
   inputs455[1].type = INPUT_KEYBOARD;   
   inputs455[1].ki.wVk = 57;   
   inputs455[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs455, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs456[2] = {};   
   ZeroMemory(inputs456, sizeof(inputs456));
   
   inputs456[0].type = INPUT_KEYBOARD;   
   inputs456[0].ki.wVk = 188;
   
   inputs456[1].type = INPUT_KEYBOARD;   
   inputs456[1].ki.wVk = 188;   
   inputs456[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs456, sizeof(INPUT));
   
   INPUT inputs457[2] = {};   
   ZeroMemory(inputs457, sizeof(inputs457));
   
   inputs457[0].type = INPUT_KEYBOARD;   
   inputs457[0].ki.wVk = 32;
   
   inputs457[1].type = INPUT_KEYBOARD;   
   inputs457[1].ki.wVk = 32;   
   inputs457[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs457, sizeof(INPUT));
   
   INPUT inputs458[2] = {};   
   ZeroMemory(inputs458, sizeof(inputs458));
   
   inputs458[0].type = INPUT_KEYBOARD;   
   inputs458[0].ki.wVk = 87;
   
   inputs458[1].type = INPUT_KEYBOARD;   
   inputs458[1].ki.wVk = 87;   
   inputs458[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs458, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs459[2] = {};   
   ZeroMemory(inputs459, sizeof(inputs459));
   
   inputs459[0].type = INPUT_KEYBOARD;   
   inputs459[0].ki.wVk = 77;
   
   inputs459[1].type = INPUT_KEYBOARD;   
   inputs459[1].ki.wVk = 77;   
   inputs459[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs459, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs460[2] = {};   
   ZeroMemory(inputs460, sizeof(inputs460));
   
   inputs460[0].type = INPUT_KEYBOARD;   
   inputs460[0].ki.wVk = 189;
   
   inputs460[1].type = INPUT_KEYBOARD;   
   inputs460[1].ki.wVk = 189;   
   inputs460[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs460, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs461[2] = {};   
   ZeroMemory(inputs461, sizeof(inputs461));
   
   inputs461[0].type = INPUT_KEYBOARD;   
   inputs461[0].ki.wVk = 65;
   
   inputs461[1].type = INPUT_KEYBOARD;   
   inputs461[1].ki.wVk = 65;   
   inputs461[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs461, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs462[2] = {};   
   ZeroMemory(inputs462, sizeof(inputs462));
   
   inputs462[0].type = INPUT_KEYBOARD;   
   inputs462[0].ki.wVk = 80;
   
   inputs462[1].type = INPUT_KEYBOARD;   
   inputs462[1].ki.wVk = 80;   
   inputs462[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs462, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs463[2] = {};   
   ZeroMemory(inputs463, sizeof(inputs463));
   
   inputs463[0].type = INPUT_KEYBOARD;   
   inputs463[0].ki.wVk = 80;
   
   inputs463[1].type = INPUT_KEYBOARD;   
   inputs463[1].ki.wVk = 80;   
   inputs463[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs463, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs464[2] = {};   
   ZeroMemory(inputs464, sizeof(inputs464));
   
   inputs464[0].type = INPUT_KEYBOARD;   
   inputs464[0].ki.wVk = 67;
   
   inputs464[1].type = INPUT_KEYBOARD;   
   inputs464[1].ki.wVk = 67;   
   inputs464[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs464, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs465[2] = {};   
   ZeroMemory(inputs465, sizeof(inputs465));
   
   inputs465[0].type = INPUT_KEYBOARD;   
   inputs465[0].ki.wVk = 79;
   
   inputs465[1].type = INPUT_KEYBOARD;   
   inputs465[1].ki.wVk = 79;   
   inputs465[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs465, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs466[2] = {};   
   ZeroMemory(inputs466, sizeof(inputs466));
   
   inputs466[0].type = INPUT_KEYBOARD;   
   inputs466[0].ki.wVk = 77;
   
   inputs466[1].type = INPUT_KEYBOARD;   
   inputs466[1].ki.wVk = 77;   
   inputs466[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs466, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs467[2] = {};   
   ZeroMemory(inputs467, sizeof(inputs467));
   
   inputs467[0].type = INPUT_KEYBOARD;   
   inputs467[0].ki.wVk = 77;
   
   inputs467[1].type = INPUT_KEYBOARD;   
   inputs467[1].ki.wVk = 77;   
   inputs467[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs467, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs468[2] = {};   
   ZeroMemory(inputs468, sizeof(inputs468));
   
   inputs468[0].type = INPUT_KEYBOARD;   
   inputs468[0].ki.wVk = 65;
   
   inputs468[1].type = INPUT_KEYBOARD;   
   inputs468[1].ki.wVk = 65;   
   inputs468[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs468, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs469[2] = {};   
   ZeroMemory(inputs469, sizeof(inputs469));
   
   inputs469[0].type = INPUT_KEYBOARD;   
   inputs469[0].ki.wVk = 78;
   
   inputs469[1].type = INPUT_KEYBOARD;   
   inputs469[1].ki.wVk = 78;   
   inputs469[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs469, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs470[2] = {};   
   ZeroMemory(inputs470, sizeof(inputs470));
   
   inputs470[0].type = INPUT_KEYBOARD;   
   inputs470[0].ki.wVk = 68;
   
   inputs470[1].type = INPUT_KEYBOARD;   
   inputs470[1].ki.wVk = 68;   
   inputs470[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs470, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs471[2] = {};   
   ZeroMemory(inputs471, sizeof(inputs471));
   
   inputs471[0].type = INPUT_KEYBOARD;   
   inputs471[0].ki.wVk = 188;
   
   inputs471[1].type = INPUT_KEYBOARD;   
   inputs471[1].ki.wVk = 188;   
   inputs471[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs471, sizeof(INPUT));
   
   INPUT inputs472[2] = {};   
   ZeroMemory(inputs472, sizeof(inputs472));
   
   inputs472[0].type = INPUT_KEYBOARD;   
   inputs472[0].ki.wVk = 32;
   
   inputs472[1].type = INPUT_KEYBOARD;   
   inputs472[1].ki.wVk = 32;   
   inputs472[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs472, sizeof(INPUT));
   
   INPUT inputs473[2] = {};   
   ZeroMemory(inputs473, sizeof(inputs473));
   
   inputs473[0].type = INPUT_KEYBOARD;   
   inputs473[0].ki.wVk = 73;
   
   inputs473[1].type = INPUT_KEYBOARD;   
   inputs473[1].ki.wVk = 73;   
   inputs473[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs473, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs474[2] = {};   
   ZeroMemory(inputs474, sizeof(inputs474));
   
   inputs474[0].type = INPUT_KEYBOARD;   
   inputs474[0].ki.wVk = 78;
   
   inputs474[1].type = INPUT_KEYBOARD;   
   inputs474[1].ki.wVk = 78;   
   inputs474[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs474, sizeof(INPUT));
   
   INPUT inputs475[2] = {};   
   ZeroMemory(inputs475, sizeof(inputs475));
   
   inputs475[0].type = INPUT_KEYBOARD;   
   inputs475[0].ki.wVk = 84;
   
   inputs475[1].type = INPUT_KEYBOARD;   
   inputs475[1].ki.wVk = 84;   
   inputs475[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs475, sizeof(INPUT));
   
   INPUT inputs476[2] = {};   
   ZeroMemory(inputs476, sizeof(inputs476));
   
   inputs476[0].type = INPUT_KEYBOARD;   
   inputs476[0].ki.wVk = 80;
   
   inputs476[1].type = INPUT_KEYBOARD;   
   inputs476[1].ki.wVk = 80;   
   inputs476[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs476, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs477[2] = {};   
   ZeroMemory(inputs477, sizeof(inputs477));
   
   inputs477[0].type = INPUT_KEYBOARD;   
   inputs477[0].ki.wVk = 84;
   
   inputs477[1].type = INPUT_KEYBOARD;   
   inputs477[1].ki.wVk = 84;   
   inputs477[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs477, sizeof(INPUT));
   
   INPUT inputs478[2] = {};   
   ZeroMemory(inputs478, sizeof(inputs478));
   
   inputs478[0].type = INPUT_KEYBOARD;   
   inputs478[0].ki.wVk = 82;
   
   inputs478[1].type = INPUT_KEYBOARD;   
   inputs478[1].ki.wVk = 82;   
   inputs478[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs478, sizeof(INPUT));
   
   INPUT inputs479[2] = {};   
   ZeroMemory(inputs479, sizeof(inputs479));
   
   inputs479[0].type = INPUT_KEYBOARD;   
   inputs479[0].ki.wVk = 190;
   
   inputs479[1].type = INPUT_KEYBOARD;   
   inputs479[1].ki.wVk = 190;   
   inputs479[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs479, sizeof(INPUT));
   
   INPUT inputs480[2] = {};   
   ZeroMemory(inputs480, sizeof(inputs480));
   
   inputs480[0].type = INPUT_KEYBOARD;   
   inputs480[0].ki.wVk = 90;
   
   inputs480[1].type = INPUT_KEYBOARD;   
   inputs480[1].ki.wVk = 90;   
   inputs480[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs480, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs481[2] = {};   
   ZeroMemory(inputs481, sizeof(inputs481));
   
   inputs481[0].type = INPUT_KEYBOARD;   
   inputs481[0].ki.wVk = 69;
   
   inputs481[1].type = INPUT_KEYBOARD;   
   inputs481[1].ki.wVk = 69;   
   inputs481[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs481, sizeof(INPUT));
   
   INPUT inputs482[2] = {};   
   ZeroMemory(inputs482, sizeof(inputs482));
   
   inputs482[0].type = INPUT_KEYBOARD;   
   inputs482[0].ki.wVk = 82;
   
   inputs482[1].type = INPUT_KEYBOARD;   
   inputs482[1].ki.wVk = 82;   
   inputs482[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs482, sizeof(INPUT));
   
   INPUT inputs483[2] = {};   
   ZeroMemory(inputs483, sizeof(inputs483));
   
   inputs483[0].type = INPUT_KEYBOARD;   
   inputs483[0].ki.wVk = 79;
   
   inputs483[1].type = INPUT_KEYBOARD;   
   inputs483[1].ki.wVk = 79;   
   inputs483[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs483, sizeof(INPUT));
   
   INPUT inputs484[2] = {};   
   ZeroMemory(inputs484, sizeof(inputs484));
   
   inputs484[0].type = INPUT_KEYBOARD;   
   inputs484[0].ki.wVk = 188;
   
   inputs484[1].type = INPUT_KEYBOARD;   
   inputs484[1].ki.wVk = 188;   
   inputs484[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs484, sizeof(INPUT));
   
   INPUT inputs485[2] = {};   
   ZeroMemory(inputs485, sizeof(inputs485));
   
   inputs485[0].type = INPUT_KEYBOARD;   
   inputs485[0].ki.wVk = 32;
   
   inputs485[1].type = INPUT_KEYBOARD;   
   inputs485[1].ki.wVk = 32;   
   inputs485[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs485, sizeof(INPUT));
   
   INPUT inputs486[2] = {};   
   ZeroMemory(inputs486, sizeof(inputs486));
   
   inputs486[0].type = INPUT_KEYBOARD;   
   inputs486[0].ki.wVk = 56;
   
   inputs486[1].type = INPUT_KEYBOARD;   
   inputs486[1].ki.wVk = 56;   
   inputs486[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs486, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs487[2] = {};   
   ZeroMemory(inputs487, sizeof(inputs487));
   
   inputs487[0].type = INPUT_KEYBOARD;   
   inputs487[0].ki.wVk = 73;
   
   inputs487[1].type = INPUT_KEYBOARD;   
   inputs487[1].ki.wVk = 73;   
   inputs487[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs487, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs488[2] = {};   
   ZeroMemory(inputs488, sizeof(inputs488));
   
   inputs488[0].type = INPUT_KEYBOARD;   
   inputs488[0].ki.wVk = 78;
   
   inputs488[1].type = INPUT_KEYBOARD;   
   inputs488[1].ki.wVk = 78;   
   inputs488[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs488, sizeof(INPUT));
   
   INPUT inputs489[2] = {};   
   ZeroMemory(inputs489, sizeof(inputs489));
   
   inputs489[0].type = INPUT_KEYBOARD;   
   inputs489[0].ki.wVk = 84;
   
   inputs489[1].type = INPUT_KEYBOARD;   
   inputs489[1].ki.wVk = 84;   
   inputs489[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs489, sizeof(INPUT));
   
   INPUT inputs490[2] = {};   
   ZeroMemory(inputs490, sizeof(inputs490));
   
   inputs490[0].type = INPUT_KEYBOARD;   
   inputs490[0].ki.wVk = 80;
   
   inputs490[1].type = INPUT_KEYBOARD;   
   inputs490[1].ki.wVk = 80;   
   inputs490[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs490, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs491[2] = {};   
   ZeroMemory(inputs491, sizeof(inputs491));
   
   inputs491[0].type = INPUT_KEYBOARD;   
   inputs491[0].ki.wVk = 84;
   
   inputs491[1].type = INPUT_KEYBOARD;   
   inputs491[1].ki.wVk = 84;   
   inputs491[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs491, sizeof(INPUT));
   
   INPUT inputs492[2] = {};   
   ZeroMemory(inputs492, sizeof(inputs492));
   
   inputs492[0].type = INPUT_KEYBOARD;   
   inputs492[0].ki.wVk = 82;
   
   inputs492[1].type = INPUT_KEYBOARD;   
   inputs492[1].ki.wVk = 82;   
   inputs492[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs492, sizeof(INPUT));
   
   INPUT inputs493[2] = {};   
   ZeroMemory(inputs493, sizeof(inputs493));
   
   inputs493[0].type = INPUT_KEYBOARD;   
   inputs493[0].ki.wVk = 57;
   
   inputs493[1].type = INPUT_KEYBOARD;   
   inputs493[1].ki.wVk = 57;   
   inputs493[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs493, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs494[2] = {};   
   ZeroMemory(inputs494, sizeof(inputs494));
   
   inputs494[0].type = INPUT_KEYBOARD;   
   inputs494[0].ki.wVk = 65;
   
   inputs494[1].type = INPUT_KEYBOARD;   
   inputs494[1].ki.wVk = 65;   
   inputs494[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs494, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs495[2] = {};   
   ZeroMemory(inputs495, sizeof(inputs495));
   
   inputs495[0].type = INPUT_KEYBOARD;   
   inputs495[0].ki.wVk = 80;
   
   inputs495[1].type = INPUT_KEYBOARD;   
   inputs495[1].ki.wVk = 80;   
   inputs495[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs495, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs496[2] = {};   
   ZeroMemory(inputs496, sizeof(inputs496));
   
   inputs496[0].type = INPUT_KEYBOARD;   
   inputs496[0].ki.wVk = 80;
   
   inputs496[1].type = INPUT_KEYBOARD;   
   inputs496[1].ki.wVk = 80;   
   inputs496[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs496, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs497[2] = {};   
   ZeroMemory(inputs497, sizeof(inputs497));
   
   inputs497[0].type = INPUT_KEYBOARD;   
   inputs497[0].ki.wVk = 67;
   
   inputs497[1].type = INPUT_KEYBOARD;   
   inputs497[1].ki.wVk = 67;   
   inputs497[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs497, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs498[2] = {};   
   ZeroMemory(inputs498, sizeof(inputs498));
   
   inputs498[0].type = INPUT_KEYBOARD;   
   inputs498[0].ki.wVk = 79;
   
   inputs498[1].type = INPUT_KEYBOARD;   
   inputs498[1].ki.wVk = 79;   
   inputs498[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs498, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs499[2] = {};   
   ZeroMemory(inputs499, sizeof(inputs499));
   
   inputs499[0].type = INPUT_KEYBOARD;   
   inputs499[0].ki.wVk = 77;
   
   inputs499[1].type = INPUT_KEYBOARD;   
   inputs499[1].ki.wVk = 77;   
   inputs499[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs499, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs500[2] = {};   
   ZeroMemory(inputs500, sizeof(inputs500));
   
   inputs500[0].type = INPUT_KEYBOARD;   
   inputs500[0].ki.wVk = 77;
   
   inputs500[1].type = INPUT_KEYBOARD;   
   inputs500[1].ki.wVk = 77;   
   inputs500[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs500, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs501[2] = {};   
   ZeroMemory(inputs501, sizeof(inputs501));
   
   inputs501[0].type = INPUT_KEYBOARD;   
   inputs501[0].ki.wVk = 65;
   
   inputs501[1].type = INPUT_KEYBOARD;   
   inputs501[1].ki.wVk = 65;   
   inputs501[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs501, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs502[2] = {};   
   ZeroMemory(inputs502, sizeof(inputs502));
   
   inputs502[0].type = INPUT_KEYBOARD;   
   inputs502[0].ki.wVk = 78;
   
   inputs502[1].type = INPUT_KEYBOARD;   
   inputs502[1].ki.wVk = 78;   
   inputs502[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs502, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs503[2] = {};   
   ZeroMemory(inputs503, sizeof(inputs503));
   
   inputs503[0].type = INPUT_KEYBOARD;   
   inputs503[0].ki.wVk = 68;
   
   inputs503[1].type = INPUT_KEYBOARD;   
   inputs503[1].ki.wVk = 68;   
   inputs503[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs503, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs504[2] = {};   
   ZeroMemory(inputs504, sizeof(inputs504));
   
   inputs504[0].type = INPUT_KEYBOARD;   
   inputs504[0].ki.wVk = 189;
   
   inputs504[1].type = INPUT_KEYBOARD;   
   inputs504[1].ki.wVk = 189;   
   inputs504[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs504, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs505[2] = {};   
   ZeroMemory(inputs505, sizeof(inputs505));
   
   inputs505[0].type = INPUT_KEYBOARD;   
   inputs505[0].ki.wVk = 86;
   
   inputs505[1].type = INPUT_KEYBOARD;   
   inputs505[1].ki.wVk = 86;   
   inputs505[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs505, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs506[2] = {};   
   ZeroMemory(inputs506, sizeof(inputs506));
   
   inputs506[0].type = INPUT_KEYBOARD;   
   inputs506[0].ki.wVk = 79;
   
   inputs506[1].type = INPUT_KEYBOARD;   
   inputs506[1].ki.wVk = 79;   
   inputs506[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs506, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs507[2] = {};   
   ZeroMemory(inputs507, sizeof(inputs507));
   
   inputs507[0].type = INPUT_KEYBOARD;   
   inputs507[0].ki.wVk = 76;
   
   inputs507[1].type = INPUT_KEYBOARD;   
   inputs507[1].ki.wVk = 76;   
   inputs507[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs507, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs508[2] = {};   
   ZeroMemory(inputs508, sizeof(inputs508));
   
   inputs508[0].type = INPUT_KEYBOARD;   
   inputs508[0].ki.wVk = 85;
   
   inputs508[1].type = INPUT_KEYBOARD;   
   inputs508[1].ki.wVk = 85;   
   inputs508[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs508, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs509[2] = {};   
   ZeroMemory(inputs509, sizeof(inputs509));
   
   inputs509[0].type = INPUT_KEYBOARD;   
   inputs509[0].ki.wVk = 77;
   
   inputs509[1].type = INPUT_KEYBOARD;   
   inputs509[1].ki.wVk = 77;   
   inputs509[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs509, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs510[2] = {};   
   ZeroMemory(inputs510, sizeof(inputs510));
   
   inputs510[0].type = INPUT_KEYBOARD;   
   inputs510[0].ki.wVk = 69;
   
   inputs510[1].type = INPUT_KEYBOARD;   
   inputs510[1].ki.wVk = 69;   
   inputs510[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs510, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs511[2] = {};   
   ZeroMemory(inputs511, sizeof(inputs511));
   
   inputs511[0].type = INPUT_KEYBOARD;   
   inputs511[0].ki.wVk = 189;
   
   inputs511[1].type = INPUT_KEYBOARD;   
   inputs511[1].ki.wVk = 189;   
   inputs511[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs511, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs512[2] = {};   
   ZeroMemory(inputs512, sizeof(inputs512));
   
   inputs512[0].type = INPUT_KEYBOARD;   
   inputs512[0].ki.wVk = 85;
   
   inputs512[1].type = INPUT_KEYBOARD;   
   inputs512[1].ki.wVk = 85;   
   inputs512[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs512, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs513[2] = {};   
   ZeroMemory(inputs513, sizeof(inputs513));
   
   inputs513[0].type = INPUT_KEYBOARD;   
   inputs513[0].ki.wVk = 80;
   
   inputs513[1].type = INPUT_KEYBOARD;   
   inputs513[1].ki.wVk = 80;   
   inputs513[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs513, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs514[2] = {};   
   ZeroMemory(inputs514, sizeof(inputs514));
   
   inputs514[0].type = INPUT_KEYBOARD;   
   inputs514[0].ki.wVk = 57;
   
   inputs514[1].type = INPUT_KEYBOARD;   
   inputs514[1].ki.wVk = 57;   
   inputs514[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs514, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs515[2] = {};   
   ZeroMemory(inputs515, sizeof(inputs515));
   
   inputs515[0].type = INPUT_KEYBOARD;   
   inputs515[0].ki.wVk = 188;
   
   inputs515[1].type = INPUT_KEYBOARD;   
   inputs515[1].ki.wVk = 188;   
   inputs515[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs515, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs516[2] = {};   
   ZeroMemory(inputs516, sizeof(inputs516));
   
   inputs516[0].type = INPUT_KEYBOARD;   
   inputs516[0].ki.wVk = 78;
   
   inputs516[1].type = INPUT_KEYBOARD;   
   inputs516[1].ki.wVk = 78;   
   inputs516[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs516, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs517[2] = {};   
   ZeroMemory(inputs517, sizeof(inputs517));
   
   inputs517[0].type = INPUT_KEYBOARD;   
   inputs517[0].ki.wVk = 78;
   
   inputs517[1].type = INPUT_KEYBOARD;   
   inputs517[1].ki.wVk = 78;   
   inputs517[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs517, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs518[2] = {};   
   ZeroMemory(inputs518, sizeof(inputs518));
   
   inputs518[0].type = INPUT_KEYBOARD;   
   inputs518[0].ki.wVk = 32;
   
   inputs518[1].type = INPUT_KEYBOARD;   
   inputs518[1].ki.wVk = 32;   
   inputs518[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs518, sizeof(INPUT));
   
   INPUT inputs519[2] = {};   
   ZeroMemory(inputs519, sizeof(inputs519));
   
   inputs519[0].type = INPUT_KEYBOARD;   
   inputs519[0].ki.wVk = 190;
   
   inputs519[1].type = INPUT_KEYBOARD;   
   inputs519[1].ki.wVk = 190;   
   inputs519[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs519, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs520[2] = {};   
   ZeroMemory(inputs520, sizeof(inputs520));
   
   inputs520[0].type = INPUT_KEYBOARD;   
   inputs520[0].ki.wVk = 190;
   
   inputs520[1].type = INPUT_KEYBOARD;   
   inputs520[1].ki.wVk = 190;   
   inputs520[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs520, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs521[2] = {};   
   ZeroMemory(inputs521, sizeof(inputs521));
   
   inputs521[0].type = INPUT_KEYBOARD;   
   inputs521[0].ki.wVk = 32;
   
   inputs521[1].type = INPUT_KEYBOARD;   
   inputs521[1].ki.wVk = 32;   
   inputs521[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs521, sizeof(INPUT));
   
   INPUT inputs522[2] = {};   
   ZeroMemory(inputs522, sizeof(inputs522));
   
   inputs522[0].type = INPUT_KEYBOARD;   
   inputs522[0].ki.wVk = 86;
   
   inputs522[1].type = INPUT_KEYBOARD;   
   inputs522[1].ki.wVk = 86;   
   inputs522[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs522, sizeof(INPUT));
   
   INPUT inputs523[2] = {};   
   ZeroMemory(inputs523, sizeof(inputs523));
   
   inputs523[0].type = INPUT_KEYBOARD;   
   inputs523[0].ki.wVk = 79;
   
   inputs523[1].type = INPUT_KEYBOARD;   
   inputs523[1].ki.wVk = 79;   
   inputs523[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs523, sizeof(INPUT));
   
   INPUT inputs524[2] = {};   
   ZeroMemory(inputs524, sizeof(inputs524));
   
   inputs524[0].type = INPUT_KEYBOARD;   
   inputs524[0].ki.wVk = 76;
   
   inputs524[1].type = INPUT_KEYBOARD;   
   inputs524[1].ki.wVk = 76;   
   inputs524[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs524, sizeof(INPUT));
   
   INPUT inputs525[2] = {};   
   ZeroMemory(inputs525, sizeof(inputs525));
   
   inputs525[0].type = INPUT_KEYBOARD;   
   inputs525[0].ki.wVk = 85;
   
   inputs525[1].type = INPUT_KEYBOARD;   
   inputs525[1].ki.wVk = 85;   
   inputs525[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs525, sizeof(INPUT));
   
   INPUT inputs526[2] = {};   
   ZeroMemory(inputs526, sizeof(inputs526));
   
   inputs526[0].type = INPUT_KEYBOARD;   
   inputs526[0].ki.wVk = 80;
   
   inputs526[1].type = INPUT_KEYBOARD;   
   inputs526[1].ki.wVk = 80;   
   inputs526[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs526, sizeof(INPUT));
   
   INPUT inputs527[2] = {};   
   ZeroMemory(inputs527, sizeof(inputs527));
   
   inputs527[0].type = INPUT_KEYBOARD;   
   inputs527[0].ki.wVk = 190;
   
   inputs527[1].type = INPUT_KEYBOARD;   
   inputs527[1].ki.wVk = 190;   
   inputs527[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs527, sizeof(INPUT));
   
   INPUT inputs528[2] = {};   
   ZeroMemory(inputs528, sizeof(inputs528));
   
   inputs528[0].type = INPUT_KEYBOARD;   
   inputs528[0].ki.wVk = 80;
   
   inputs528[1].type = INPUT_KEYBOARD;   
   inputs528[1].ki.wVk = 80;   
   inputs528[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs528, sizeof(INPUT));
   
   INPUT inputs529[2] = {};   
   ZeroMemory(inputs529, sizeof(inputs529));
   
   inputs529[0].type = INPUT_KEYBOARD;   
   inputs529[0].ki.wVk = 83;
   
   inputs529[1].type = INPUT_KEYBOARD;   
   inputs529[1].ki.wVk = 83;   
   inputs529[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs529, sizeof(INPUT));
   
   INPUT inputs530[2] = {};   
   ZeroMemory(inputs530, sizeof(inputs530));
   
   inputs530[0].type = INPUT_KEYBOARD;   
   inputs530[0].ki.wVk = 49;
   
   inputs530[1].type = INPUT_KEYBOARD;   
   inputs530[1].ki.wVk = 49;   
   inputs530[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs530, sizeof(INPUT));
   
   INPUT inputs531[2] = {};   
   ZeroMemory(inputs531, sizeof(inputs531));
   
   inputs531[0].type = INPUT_KEYBOARD;   
   inputs531[0].ki.wVk = 32;
   
   inputs531[1].type = INPUT_KEYBOARD;   
   inputs531[1].ki.wVk = 32;   
   inputs531[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs531, sizeof(INPUT));
   
   INPUT inputs532[2] = {};   
   ZeroMemory(inputs532, sizeof(inputs532));
   
   inputs532[0].type = INPUT_KEYBOARD;   
   inputs532[0].ki.wVk = 54;
   
   inputs532[1].type = INPUT_KEYBOARD;   
   inputs532[1].ki.wVk = 54;   
   inputs532[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs532, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs533[2] = {};   
   ZeroMemory(inputs533, sizeof(inputs533));
   
   inputs533[0].type = INPUT_KEYBOARD;   
   inputs533[0].ki.wVk = 32;
   
   inputs533[1].type = INPUT_KEYBOARD;   
   inputs533[1].ki.wVk = 32;   
   inputs533[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs533, sizeof(INPUT));
   
   INPUT inputs534[2] = {};   
   ZeroMemory(inputs534, sizeof(inputs534));
   
   inputs534[0].type = INPUT_KEYBOARD;   
   inputs534[0].ki.wVk = 69;
   
   inputs534[1].type = INPUT_KEYBOARD;   
   inputs534[1].ki.wVk = 69;   
   inputs534[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs534, sizeof(INPUT));
   
   INPUT inputs535[2] = {};   
   ZeroMemory(inputs535, sizeof(inputs535));
   
   inputs535[0].type = INPUT_KEYBOARD;   
   inputs535[0].ki.wVk = 67;
   
   inputs535[1].type = INPUT_KEYBOARD;   
   inputs535[1].ki.wVk = 67;   
   inputs535[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs535, sizeof(INPUT));
   
   INPUT inputs536[2] = {};   
   ZeroMemory(inputs536, sizeof(inputs536));
   
   inputs536[0].type = INPUT_KEYBOARD;   
   inputs536[0].ki.wVk = 72;
   
   inputs536[1].type = INPUT_KEYBOARD;   
   inputs536[1].ki.wVk = 72;   
   inputs536[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs536, sizeof(INPUT));
   
   INPUT inputs537[2] = {};   
   ZeroMemory(inputs537, sizeof(inputs537));
   
   inputs537[0].type = INPUT_KEYBOARD;   
   inputs537[0].ki.wVk = 79;
   
   inputs537[1].type = INPUT_KEYBOARD;   
   inputs537[1].ki.wVk = 79;   
   inputs537[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs537, sizeof(INPUT));
   
   INPUT inputs538[2] = {};   
   ZeroMemory(inputs538, sizeof(inputs538));
   
   inputs538[0].type = INPUT_KEYBOARD;   
   inputs538[0].ki.wVk = 32;
   
   inputs538[1].type = INPUT_KEYBOARD;   
   inputs538[1].ki.wVk = 32;   
   inputs538[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs538, sizeof(INPUT));
   
   INPUT inputs539[2] = {};   
   ZeroMemory(inputs539, sizeof(inputs539));
   
   inputs539[0].type = INPUT_KEYBOARD;   
   inputs539[0].ki.wVk = 51;
   
   inputs539[1].type = INPUT_KEYBOARD;   
   inputs539[1].ki.wVk = 51;   
   inputs539[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs539, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs540[2] = {};   
   ZeroMemory(inputs540, sizeof(inputs540));
   
   inputs540[0].type = INPUT_KEYBOARD;   
   inputs540[0].ki.wVk = 50;
   
   inputs540[1].type = INPUT_KEYBOARD;   
   inputs540[1].ki.wVk = 50;   
   inputs540[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs540, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs541[2] = {};   
   ZeroMemory(inputs541, sizeof(inputs541));
   
   inputs541[0].type = INPUT_KEYBOARD;   
   inputs541[0].ki.wVk = 86;
   
   inputs541[1].type = INPUT_KEYBOARD;   
   inputs541[1].ki.wVk = 86;   
   inputs541[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs541, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs542[2] = {};   
   ZeroMemory(inputs542, sizeof(inputs542));
   
   inputs542[0].type = INPUT_KEYBOARD;   
   inputs542[0].ki.wVk = 32;
   
   inputs542[1].type = INPUT_KEYBOARD;   
   inputs542[1].ki.wVk = 32;   
   inputs542[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs542, sizeof(INPUT));
   
   INPUT inputs543[2] = {};   
   ZeroMemory(inputs543, sizeof(inputs543));
   
   inputs543[0].type = INPUT_KEYBOARD;   
   inputs543[0].ki.wVk = 190;
   
   inputs543[1].type = INPUT_KEYBOARD;   
   inputs543[1].ki.wVk = 190;   
   inputs543[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs543, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs544[2] = {};   
   ZeroMemory(inputs544, sizeof(inputs544));
   
   inputs544[0].type = INPUT_KEYBOARD;   
   inputs544[0].ki.wVk = 190;
   
   inputs544[1].type = INPUT_KEYBOARD;   
   inputs544[1].ki.wVk = 190;   
   inputs544[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs544, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs545[2] = {};   
   ZeroMemory(inputs545, sizeof(inputs545));
   
   inputs545[0].type = INPUT_KEYBOARD;   
   inputs545[0].ki.wVk = 32;
   
   inputs545[1].type = INPUT_KEYBOARD;   
   inputs545[1].ki.wVk = 32;   
   inputs545[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs545, sizeof(INPUT));
   
   INPUT inputs546[2] = {};   
   ZeroMemory(inputs546, sizeof(inputs546));
   
   inputs546[0].type = INPUT_KEYBOARD;   
   inputs546[0].ki.wVk = 86;
   
   inputs546[1].type = INPUT_KEYBOARD;   
   inputs546[1].ki.wVk = 86;   
   inputs546[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs546, sizeof(INPUT));
   
   INPUT inputs547[2] = {};   
   ZeroMemory(inputs547, sizeof(inputs547));
   
   inputs547[0].type = INPUT_KEYBOARD;   
   inputs547[0].ki.wVk = 79;
   
   inputs547[1].type = INPUT_KEYBOARD;   
   inputs547[1].ki.wVk = 79;   
   inputs547[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs547, sizeof(INPUT));
   
   INPUT inputs548[2] = {};   
   ZeroMemory(inputs548, sizeof(inputs548));
   
   inputs548[0].type = INPUT_KEYBOARD;   
   inputs548[0].ki.wVk = 76;
   
   inputs548[1].type = INPUT_KEYBOARD;   
   inputs548[1].ki.wVk = 76;   
   inputs548[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs548, sizeof(INPUT));
   
   INPUT inputs549[2] = {};   
   ZeroMemory(inputs549, sizeof(inputs549));
   
   inputs549[0].type = INPUT_KEYBOARD;   
   inputs549[0].ki.wVk = 85;
   
   inputs549[1].type = INPUT_KEYBOARD;   
   inputs549[1].ki.wVk = 85;   
   inputs549[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs549, sizeof(INPUT));
   
   INPUT inputs550[2] = {};   
   ZeroMemory(inputs550, sizeof(inputs550));
   
   inputs550[0].type = INPUT_KEYBOARD;   
   inputs550[0].ki.wVk = 80;
   
   inputs550[1].type = INPUT_KEYBOARD;   
   inputs550[1].ki.wVk = 80;   
   inputs550[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs550, sizeof(INPUT));
   
   INPUT inputs551[2] = {};   
   ZeroMemory(inputs551, sizeof(inputs551));
   
   inputs551[0].type = INPUT_KEYBOARD;   
   inputs551[0].ki.wVk = 190;
   
   inputs551[1].type = INPUT_KEYBOARD;   
   inputs551[1].ki.wVk = 190;   
   inputs551[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs551, sizeof(INPUT));
   
   INPUT inputs552[2] = {};   
   ZeroMemory(inputs552, sizeof(inputs552));
   
   inputs552[0].type = INPUT_KEYBOARD;   
   inputs552[0].ki.wVk = 80;
   
   inputs552[1].type = INPUT_KEYBOARD;   
   inputs552[1].ki.wVk = 80;   
   inputs552[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs552, sizeof(INPUT));
   
   INPUT inputs553[2] = {};   
   ZeroMemory(inputs553, sizeof(inputs553));
   
   inputs553[0].type = INPUT_KEYBOARD;   
   inputs553[0].ki.wVk = 83;
   
   inputs553[1].type = INPUT_KEYBOARD;   
   inputs553[1].ki.wVk = 83;   
   inputs553[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs553, sizeof(INPUT));
   
   INPUT inputs554[2] = {};   
   ZeroMemory(inputs554, sizeof(inputs554));
   
   inputs554[0].type = INPUT_KEYBOARD;   
   inputs554[0].ki.wVk = 49;
   
   inputs554[1].type = INPUT_KEYBOARD;   
   inputs554[1].ki.wVk = 49;   
   inputs554[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs554, sizeof(INPUT));
   
   INPUT inputs555[2] = {};   
   ZeroMemory(inputs555, sizeof(inputs555));
   
   inputs555[0].type = INPUT_KEYBOARD;   
   inputs555[0].ki.wVk = 32;
   
   inputs555[1].type = INPUT_KEYBOARD;   
   inputs555[1].ki.wVk = 32;   
   inputs555[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs555, sizeof(INPUT));
   
   INPUT inputs556[2] = {};   
   ZeroMemory(inputs556, sizeof(inputs556));
   
   inputs556[0].type = INPUT_KEYBOARD;   
   inputs556[0].ki.wVk = 54;
   
   inputs556[1].type = INPUT_KEYBOARD;   
   inputs556[1].ki.wVk = 54;   
   inputs556[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs556, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs557[2] = {};   
   ZeroMemory(inputs557, sizeof(inputs557));
   
   inputs557[0].type = INPUT_KEYBOARD;   
   inputs557[0].ki.wVk = 32;
   
   inputs557[1].type = INPUT_KEYBOARD;   
   inputs557[1].ki.wVk = 32;   
   inputs557[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs557, sizeof(INPUT));
   
   INPUT inputs558[2] = {};   
   ZeroMemory(inputs558, sizeof(inputs558));
   
   inputs558[0].type = INPUT_KEYBOARD;   
   inputs558[0].ki.wVk = 69;
   
   inputs558[1].type = INPUT_KEYBOARD;   
   inputs558[1].ki.wVk = 69;   
   inputs558[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs558, sizeof(INPUT));
   
   INPUT inputs559[2] = {};   
   ZeroMemory(inputs559, sizeof(inputs559));
   
   inputs559[0].type = INPUT_KEYBOARD;   
   inputs559[0].ki.wVk = 67;
   
   inputs559[1].type = INPUT_KEYBOARD;   
   inputs559[1].ki.wVk = 67;   
   inputs559[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs559, sizeof(INPUT));
   
   INPUT inputs560[2] = {};   
   ZeroMemory(inputs560, sizeof(inputs560));
   
   inputs560[0].type = INPUT_KEYBOARD;   
   inputs560[0].ki.wVk = 72;
   
   inputs560[1].type = INPUT_KEYBOARD;   
   inputs560[1].ki.wVk = 72;   
   inputs560[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs560, sizeof(INPUT));
   
   INPUT inputs561[2] = {};   
   ZeroMemory(inputs561, sizeof(inputs561));
   
   inputs561[0].type = INPUT_KEYBOARD;   
   inputs561[0].ki.wVk = 79;
   
   inputs561[1].type = INPUT_KEYBOARD;   
   inputs561[1].ki.wVk = 79;   
   inputs561[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs561, sizeof(INPUT));
   
   INPUT inputs562[2] = {};   
   ZeroMemory(inputs562, sizeof(inputs562));
   
   inputs562[0].type = INPUT_KEYBOARD;   
   inputs562[0].ki.wVk = 32;
   
   inputs562[1].type = INPUT_KEYBOARD;   
   inputs562[1].ki.wVk = 32;   
   inputs562[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs562, sizeof(INPUT));
   
   INPUT inputs563[2] = {};   
   ZeroMemory(inputs563, sizeof(inputs563));
   
   inputs563[0].type = INPUT_KEYBOARD;   
   inputs563[0].ki.wVk = 70;
   
   inputs563[1].type = INPUT_KEYBOARD;   
   inputs563[1].ki.wVk = 70;   
   inputs563[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs563, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs564[2] = {};   
   ZeroMemory(inputs564, sizeof(inputs564));
   
   inputs564[0].type = INPUT_KEYBOARD;   
   inputs564[0].ki.wVk = 65;
   
   inputs564[1].type = INPUT_KEYBOARD;   
   inputs564[1].ki.wVk = 65;   
   inputs564[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs564, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs565[2] = {};   
   ZeroMemory(inputs565, sizeof(inputs565));
   
   inputs565[0].type = INPUT_KEYBOARD;   
   inputs565[0].ki.wVk = 85;
   
   inputs565[1].type = INPUT_KEYBOARD;   
   inputs565[1].ki.wVk = 85;   
   inputs565[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs565, sizeof(INPUT));
   
   INPUT inputs566[2] = {};   
   ZeroMemory(inputs566, sizeof(inputs566));
   
   inputs566[0].type = INPUT_KEYBOARD;   
   inputs566[0].ki.wVk = 68;
   
   inputs566[1].type = INPUT_KEYBOARD;   
   inputs566[1].ki.wVk = 68;   
   inputs566[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs566, sizeof(INPUT));
   
   INPUT inputs567[2] = {};   
   ZeroMemory(inputs567, sizeof(inputs567));
   
   inputs567[0].type = INPUT_KEYBOARD;   
   inputs567[0].ki.wVk = 73;
   
   inputs567[1].type = INPUT_KEYBOARD;   
   inputs567[1].ki.wVk = 73;   
   inputs567[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs567, sizeof(INPUT));
   
   INPUT inputs568[2] = {};   
   ZeroMemory(inputs568, sizeof(inputs568));
   
   inputs568[0].type = INPUT_KEYBOARD;   
   inputs568[0].ki.wVk = 79;
   
   inputs568[1].type = INPUT_KEYBOARD;   
   inputs568[1].ki.wVk = 79;   
   inputs568[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs568, sizeof(INPUT));
   
   INPUT inputs569[2] = {};   
   ZeroMemory(inputs569, sizeof(inputs569));
   
   inputs569[0].type = INPUT_KEYBOARD;   
   inputs569[0].ki.wVk = 71;
   
   inputs569[1].type = INPUT_KEYBOARD;   
   inputs569[1].ki.wVk = 71;   
   inputs569[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs569, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs570[2] = {};   
   ZeroMemory(inputs570, sizeof(inputs570));
   
   inputs570[0].type = INPUT_KEYBOARD;   
   inputs570[0].ki.wVk = 190;
   
   inputs570[1].type = INPUT_KEYBOARD;   
   inputs570[1].ki.wVk = 190;   
   inputs570[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs570, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs571[2] = {};   
   ZeroMemory(inputs571, sizeof(inputs571));
   
   inputs571[0].type = INPUT_KEYBOARD;   
   inputs571[0].ki.wVk = 190;
   
   inputs571[1].type = INPUT_KEYBOARD;   
   inputs571[1].ki.wVk = 190;   
   inputs571[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs571, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs572[2] = {};   
   ZeroMemory(inputs572, sizeof(inputs572));
   
   inputs572[0].type = INPUT_KEYBOARD;   
   inputs572[0].ki.wVk = 77;
   
   inputs572[1].type = INPUT_KEYBOARD;   
   inputs572[1].ki.wVk = 77;   
   inputs572[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs572, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs573[2] = {};   
   ZeroMemory(inputs573, sizeof(inputs573));
   
   inputs573[0].type = INPUT_KEYBOARD;   
   inputs573[0].ki.wVk = 65;
   
   inputs573[1].type = INPUT_KEYBOARD;   
   inputs573[1].ki.wVk = 65;   
   inputs573[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs573, sizeof(INPUT));
   
   INPUT inputs574[2] = {};   
   ZeroMemory(inputs574, sizeof(inputs574));
   
   inputs574[0].type = INPUT_KEYBOARD;   
   inputs574[0].ki.wVk = 88;
   
   inputs574[1].type = INPUT_KEYBOARD;   
   inputs574[1].ki.wVk = 88;   
   inputs574[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs574, sizeof(INPUT));
   
   INPUT inputs575[2] = {};   
   ZeroMemory(inputs575, sizeof(inputs575));
   
   inputs575[0].type = INPUT_KEYBOARD;   
   inputs575[0].ki.wVk = 86;
   
   inputs575[1].type = INPUT_KEYBOARD;   
   inputs575[1].ki.wVk = 86;   
   inputs575[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs575, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs576[2] = {};   
   ZeroMemory(inputs576, sizeof(inputs576));
   
   inputs576[0].type = INPUT_KEYBOARD;   
   inputs576[0].ki.wVk = 79;
   
   inputs576[1].type = INPUT_KEYBOARD;   
   inputs576[1].ki.wVk = 79;   
   inputs576[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs576, sizeof(INPUT));
   
   INPUT inputs577[2] = {};   
   ZeroMemory(inputs577, sizeof(inputs577));
   
   inputs577[0].type = INPUT_KEYBOARD;   
   inputs577[0].ki.wVk = 76;
   
   inputs577[1].type = INPUT_KEYBOARD;   
   inputs577[1].ki.wVk = 76;   
   inputs577[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs577, sizeof(INPUT));
   
   INPUT inputs578[2] = {};   
   ZeroMemory(inputs578, sizeof(inputs578));
   
   inputs578[0].type = INPUT_KEYBOARD;   
   inputs578[0].ki.wVk = 85;
   
   inputs578[1].type = INPUT_KEYBOARD;   
   inputs578[1].ki.wVk = 85;   
   inputs578[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs578, sizeof(INPUT));
   
   INPUT inputs579[2] = {};   
   ZeroMemory(inputs579, sizeof(inputs579));
   
   inputs579[0].type = INPUT_KEYBOARD;   
   inputs579[0].ki.wVk = 77;
   
   inputs579[1].type = INPUT_KEYBOARD;   
   inputs579[1].ki.wVk = 77;   
   inputs579[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs579, sizeof(INPUT));
   
   INPUT inputs580[2] = {};   
   ZeroMemory(inputs580, sizeof(inputs580));
   
   inputs580[0].type = INPUT_KEYBOARD;   
   inputs580[0].ki.wVk = 69;
   
   inputs580[1].type = INPUT_KEYBOARD;   
   inputs580[1].ki.wVk = 69;   
   inputs580[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs580, sizeof(INPUT));
   
   INPUT inputs581[2] = {};   
   ZeroMemory(inputs581, sizeof(inputs581));
   
   inputs581[0].type = INPUT_KEYBOARD;   
   inputs581[0].ki.wVk = 56;
   
   inputs581[1].type = INPUT_KEYBOARD;   
   inputs581[1].ki.wVk = 56;   
   inputs581[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs581, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs582[2] = {};   
   ZeroMemory(inputs582, sizeof(inputs582));
   
   inputs582[0].type = INPUT_KEYBOARD;   
   inputs582[0].ki.wVk = 57;
   
   inputs582[1].type = INPUT_KEYBOARD;   
   inputs582[1].ki.wVk = 57;   
   inputs582[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs582, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs583[2] = {};   
   ZeroMemory(inputs583, sizeof(inputs583));
   
   inputs583[0].type = INPUT_KEYBOARD;   
   inputs583[0].ki.wVk = 32;
   
   inputs583[1].type = INPUT_KEYBOARD;   
   inputs583[1].ki.wVk = 32;   
   inputs583[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs583, sizeof(INPUT));
   
   INPUT inputs584[2] = {};   
   ZeroMemory(inputs584, sizeof(inputs584));
   
   inputs584[0].type = INPUT_KEYBOARD;   
   inputs584[0].ki.wVk = 190;
   
   inputs584[1].type = INPUT_KEYBOARD;   
   inputs584[1].ki.wVk = 190;   
   inputs584[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs584, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs585[2] = {};   
   ZeroMemory(inputs585, sizeof(inputs585));
   
   inputs585[0].type = INPUT_KEYBOARD;   
   inputs585[0].ki.wVk = 190;
   
   inputs585[1].type = INPUT_KEYBOARD;   
   inputs585[1].ki.wVk = 190;   
   inputs585[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs585, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs586[2] = {};   
   ZeroMemory(inputs586, sizeof(inputs586));
   
   inputs586[0].type = INPUT_KEYBOARD;   
   inputs586[0].ki.wVk = 32;
   
   inputs586[1].type = INPUT_KEYBOARD;   
   inputs586[1].ki.wVk = 32;   
   inputs586[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs586, sizeof(INPUT));
   
   INPUT inputs587[2] = {};   
   ZeroMemory(inputs587, sizeof(inputs587));
   
   inputs587[0].type = INPUT_KEYBOARD;   
   inputs587[0].ki.wVk = 86;
   
   inputs587[1].type = INPUT_KEYBOARD;   
   inputs587[1].ki.wVk = 86;   
   inputs587[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs587, sizeof(INPUT));
   
   INPUT inputs588[2] = {};   
   ZeroMemory(inputs588, sizeof(inputs588));
   
   inputs588[0].type = INPUT_KEYBOARD;   
   inputs588[0].ki.wVk = 79;
   
   inputs588[1].type = INPUT_KEYBOARD;   
   inputs588[1].ki.wVk = 79;   
   inputs588[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs588, sizeof(INPUT));
   
   INPUT inputs589[2] = {};   
   ZeroMemory(inputs589, sizeof(inputs589));
   
   inputs589[0].type = INPUT_KEYBOARD;   
   inputs589[0].ki.wVk = 76;
   
   inputs589[1].type = INPUT_KEYBOARD;   
   inputs589[1].ki.wVk = 76;   
   inputs589[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs589, sizeof(INPUT));
   
   INPUT inputs590[2] = {};   
   ZeroMemory(inputs590, sizeof(inputs590));
   
   inputs590[0].type = INPUT_KEYBOARD;   
   inputs590[0].ki.wVk = 85;
   
   inputs590[1].type = INPUT_KEYBOARD;   
   inputs590[1].ki.wVk = 85;   
   inputs590[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs590, sizeof(INPUT));
   
   INPUT inputs591[2] = {};   
   ZeroMemory(inputs591, sizeof(inputs591));
   
   inputs591[0].type = INPUT_KEYBOARD;   
   inputs591[0].ki.wVk = 80;
   
   inputs591[1].type = INPUT_KEYBOARD;   
   inputs591[1].ki.wVk = 80;   
   inputs591[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs591, sizeof(INPUT));
   
   INPUT inputs592[2] = {};   
   ZeroMemory(inputs592, sizeof(inputs592));
   
   inputs592[0].type = INPUT_KEYBOARD;   
   inputs592[0].ki.wVk = 190;
   
   inputs592[1].type = INPUT_KEYBOARD;   
   inputs592[1].ki.wVk = 190;   
   inputs592[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs592, sizeof(INPUT));
   
   INPUT inputs593[2] = {};   
   ZeroMemory(inputs593, sizeof(inputs593));
   
   inputs593[0].type = INPUT_KEYBOARD;   
   inputs593[0].ki.wVk = 80;
   
   inputs593[1].type = INPUT_KEYBOARD;   
   inputs593[1].ki.wVk = 80;   
   inputs593[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs593, sizeof(INPUT));
   
   INPUT inputs594[2] = {};   
   ZeroMemory(inputs594, sizeof(inputs594));
   
   inputs594[0].type = INPUT_KEYBOARD;   
   inputs594[0].ki.wVk = 83;
   
   inputs594[1].type = INPUT_KEYBOARD;   
   inputs594[1].ki.wVk = 83;   
   inputs594[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs594, sizeof(INPUT));
   
   INPUT inputs595[2] = {};   
   ZeroMemory(inputs595, sizeof(inputs595));
   
   inputs595[0].type = INPUT_KEYBOARD;   
   inputs595[0].ki.wVk = 49;
   
   inputs595[1].type = INPUT_KEYBOARD;   
   inputs595[1].ki.wVk = 49;   
   inputs595[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs595, sizeof(INPUT));
   
   INPUT inputs596[2] = {};   
   ZeroMemory(inputs596, sizeof(inputs596));
   
   inputs596[0].type = INPUT_KEYBOARD;   
   inputs596[0].ki.wVk = 32;
   
   inputs596[1].type = INPUT_KEYBOARD;   
   inputs596[1].ki.wVk = 32;   
   inputs596[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs596, sizeof(INPUT));
   
   INPUT inputs597[2] = {};   
   ZeroMemory(inputs597, sizeof(inputs597));
   
   inputs597[0].type = INPUT_KEYBOARD;   
   inputs597[0].ki.wVk = 54;
   
   inputs597[1].type = INPUT_KEYBOARD;   
   inputs597[1].ki.wVk = 54;   
   inputs597[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs597, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs598[2] = {};   
   ZeroMemory(inputs598, sizeof(inputs598));
   
   inputs598[0].type = INPUT_KEYBOARD;   
   inputs598[0].ki.wVk = 32;
   
   inputs598[1].type = INPUT_KEYBOARD;   
   inputs598[1].ki.wVk = 32;   
   inputs598[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs598, sizeof(INPUT));
   
   INPUT inputs599[2] = {};   
   ZeroMemory(inputs599, sizeof(inputs599));
   
   inputs599[0].type = INPUT_KEYBOARD;   
   inputs599[0].ki.wVk = 80;
   
   inputs599[1].type = INPUT_KEYBOARD;   
   inputs599[1].ki.wVk = 80;   
   inputs599[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs599, sizeof(INPUT));
   
   INPUT inputs600[2] = {};   
   ZeroMemory(inputs600, sizeof(inputs600));
   
   inputs600[0].type = INPUT_KEYBOARD;   
   inputs600[0].ki.wVk = 79;
   
   inputs600[1].type = INPUT_KEYBOARD;   
   inputs600[1].ki.wVk = 79;   
   inputs600[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs600, sizeof(INPUT));
   
   INPUT inputs601[2] = {};   
   ZeroMemory(inputs601, sizeof(inputs601));
   
   inputs601[0].type = INPUT_KEYBOARD;   
   inputs601[0].ki.wVk = 87;
   
   inputs601[1].type = INPUT_KEYBOARD;   
   inputs601[1].ki.wVk = 87;   
   inputs601[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs601, sizeof(INPUT));
   
   INPUT inputs602[2] = {};   
   ZeroMemory(inputs602, sizeof(inputs602));
   
   inputs602[0].type = INPUT_KEYBOARD;   
   inputs602[0].ki.wVk = 69;
   
   inputs602[1].type = INPUT_KEYBOARD;   
   inputs602[1].ki.wVk = 69;   
   inputs602[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs602, sizeof(INPUT));
   
   INPUT inputs603[2] = {};   
   ZeroMemory(inputs603, sizeof(inputs603));
   
   inputs603[0].type = INPUT_KEYBOARD;   
   inputs603[0].ki.wVk = 82;
   
   inputs603[1].type = INPUT_KEYBOARD;   
   inputs603[1].ki.wVk = 82;   
   inputs603[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs603, sizeof(INPUT));
   
   INPUT inputs604[2] = {};   
   ZeroMemory(inputs604, sizeof(inputs604));
   
   inputs604[0].type = INPUT_KEYBOARD;   
   inputs604[0].ki.wVk = 83;
   
   inputs604[1].type = INPUT_KEYBOARD;   
   inputs604[1].ki.wVk = 83;   
   inputs604[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs604, sizeof(INPUT));
   
   INPUT inputs605[2] = {};   
   ZeroMemory(inputs605, sizeof(inputs605));
   
   inputs605[0].type = INPUT_KEYBOARD;   
   inputs605[0].ki.wVk = 72;
   
   inputs605[1].type = INPUT_KEYBOARD;   
   inputs605[1].ki.wVk = 72;   
   inputs605[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs605, sizeof(INPUT));
   
   INPUT inputs606[2] = {};   
   ZeroMemory(inputs606, sizeof(inputs606));
   
   inputs606[0].type = INPUT_KEYBOARD;   
   inputs606[0].ki.wVk = 69;
   
   inputs606[1].type = INPUT_KEYBOARD;   
   inputs606[1].ki.wVk = 69;   
   inputs606[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs606, sizeof(INPUT));
   
   INPUT inputs607[2] = {};   
   ZeroMemory(inputs607, sizeof(inputs607));
   
   inputs607[0].type = INPUT_KEYBOARD;   
   inputs607[0].ki.wVk = 76;
   
   inputs607[1].type = INPUT_KEYBOARD;   
   inputs607[1].ki.wVk = 76;   
   inputs607[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs607, sizeof(INPUT));
   
   INPUT inputs608[2] = {};   
   ZeroMemory(inputs608, sizeof(inputs608));
   
   inputs608[0].type = INPUT_KEYBOARD;   
   inputs608[0].ki.wVk = 76;
   
   inputs608[1].type = INPUT_KEYBOARD;   
   inputs608[1].ki.wVk = 76;   
   inputs608[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs608, sizeof(INPUT));
   
   INPUT inputs609[2] = {};   
   ZeroMemory(inputs609, sizeof(inputs609));
   
   inputs609[0].type = INPUT_KEYBOARD;   
   inputs609[0].ki.wVk = 32;
   
   inputs609[1].type = INPUT_KEYBOARD;   
   inputs609[1].ki.wVk = 32;   
   inputs609[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs609, sizeof(INPUT));
   
   INPUT inputs610[2] = {};   
   ZeroMemory(inputs610, sizeof(inputs610));
   
   inputs610[0].type = INPUT_KEYBOARD;   
   inputs610[0].ki.wVk = 189;
   
   inputs610[1].type = INPUT_KEYBOARD;   
   inputs610[1].ki.wVk = 189;   
   inputs610[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs610, sizeof(INPUT));
   
   INPUT inputs611[2] = {};   
   ZeroMemory(inputs611, sizeof(inputs611));
   
   inputs611[0].type = INPUT_KEYBOARD;   
   inputs611[0].ki.wVk = 69;
   
   inputs611[1].type = INPUT_KEYBOARD;   
   inputs611[1].ki.wVk = 69;   
   inputs611[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs611, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs612[2] = {};   
   ZeroMemory(inputs612, sizeof(inputs612));
   
   inputs612[0].type = INPUT_KEYBOARD;   
   inputs612[0].ki.wVk = 88;
   
   inputs612[1].type = INPUT_KEYBOARD;   
   inputs612[1].ki.wVk = 88;   
   inputs612[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs612, sizeof(INPUT));
   
   INPUT inputs613[2] = {};   
   ZeroMemory(inputs613, sizeof(inputs613));
   
   inputs613[0].type = INPUT_KEYBOARD;   
   inputs613[0].ki.wVk = 69;
   
   inputs613[1].type = INPUT_KEYBOARD;   
   inputs613[1].ki.wVk = 69;   
   inputs613[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs613, sizeof(INPUT));
   
   INPUT inputs614[2] = {};   
   ZeroMemory(inputs614, sizeof(inputs614));
   
   inputs614[0].type = INPUT_KEYBOARD;   
   inputs614[0].ki.wVk = 67;
   
   inputs614[1].type = INPUT_KEYBOARD;   
   inputs614[1].ki.wVk = 67;   
   inputs614[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs614, sizeof(INPUT));
   
   INPUT inputs615[2] = {};   
   ZeroMemory(inputs615, sizeof(inputs615));
   
   inputs615[0].type = INPUT_KEYBOARD;   
   inputs615[0].ki.wVk = 85;
   
   inputs615[1].type = INPUT_KEYBOARD;   
   inputs615[1].ki.wVk = 85;   
   inputs615[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs615, sizeof(INPUT));
   
   INPUT inputs616[2] = {};   
   ZeroMemory(inputs616, sizeof(inputs616));
   
   inputs616[0].type = INPUT_KEYBOARD;   
   inputs616[0].ki.wVk = 84;
   
   inputs616[1].type = INPUT_KEYBOARD;   
   inputs616[1].ki.wVk = 84;   
   inputs616[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs616, sizeof(INPUT));
   
   INPUT inputs617[2] = {};   
   ZeroMemory(inputs617, sizeof(inputs617));
   
   inputs617[0].type = INPUT_KEYBOARD;   
   inputs617[0].ki.wVk = 73;
   
   inputs617[1].type = INPUT_KEYBOARD;   
   inputs617[1].ki.wVk = 73;   
   inputs617[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs617, sizeof(INPUT));
   
   INPUT inputs618[2] = {};   
   ZeroMemory(inputs618, sizeof(inputs618));
   
   inputs618[0].type = INPUT_KEYBOARD;   
   inputs618[0].ki.wVk = 79;
   
   inputs618[1].type = INPUT_KEYBOARD;   
   inputs618[1].ki.wVk = 79;   
   inputs618[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs618, sizeof(INPUT));
   
   INPUT inputs619[2] = {};   
   ZeroMemory(inputs619, sizeof(inputs619));
   
   inputs619[0].type = INPUT_KEYBOARD;   
   inputs619[0].ki.wVk = 78;
   
   inputs619[1].type = INPUT_KEYBOARD;   
   inputs619[1].ki.wVk = 78;   
   inputs619[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs619, sizeof(INPUT));
   
   INPUT inputs620[2] = {};   
   ZeroMemory(inputs620, sizeof(inputs620));
   
   inputs620[0].type = INPUT_KEYBOARD;   
   inputs620[0].ki.wVk = 80;
   
   inputs620[1].type = INPUT_KEYBOARD;   
   inputs620[1].ki.wVk = 80;   
   inputs620[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs620, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs621[2] = {};   
   ZeroMemory(inputs621, sizeof(inputs621));
   
   inputs621[0].type = INPUT_KEYBOARD;   
   inputs621[0].ki.wVk = 79;
   
   inputs621[1].type = INPUT_KEYBOARD;   
   inputs621[1].ki.wVk = 79;   
   inputs621[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs621, sizeof(INPUT));
   
   INPUT inputs622[2] = {};   
   ZeroMemory(inputs622, sizeof(inputs622));
   
   inputs622[0].type = INPUT_KEYBOARD;   
   inputs622[0].ki.wVk = 76;
   
   inputs622[1].type = INPUT_KEYBOARD;   
   inputs622[1].ki.wVk = 76;   
   inputs622[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs622, sizeof(INPUT));
   
   INPUT inputs623[2] = {};   
   ZeroMemory(inputs623, sizeof(inputs623));
   
   inputs623[0].type = INPUT_KEYBOARD;   
   inputs623[0].ki.wVk = 73;
   
   inputs623[1].type = INPUT_KEYBOARD;   
   inputs623[1].ki.wVk = 73;   
   inputs623[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs623, sizeof(INPUT));
   
   INPUT inputs624[2] = {};   
   ZeroMemory(inputs624, sizeof(inputs624));
   
   inputs624[0].type = INPUT_KEYBOARD;   
   inputs624[0].ki.wVk = 67;
   
   inputs624[1].type = INPUT_KEYBOARD;   
   inputs624[1].ki.wVk = 67;   
   inputs624[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs624, sizeof(INPUT));
   
   INPUT inputs625[2] = {};   
   ZeroMemory(inputs625, sizeof(inputs625));
   
   inputs625[0].type = INPUT_KEYBOARD;   
   inputs625[0].ki.wVk = 89;
   
   inputs625[1].type = INPUT_KEYBOARD;   
   inputs625[1].ki.wVk = 89;   
   inputs625[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs625, sizeof(INPUT));
   
   INPUT inputs626[2] = {};   
   ZeroMemory(inputs626, sizeof(inputs626));
   
   inputs626[0].type = INPUT_KEYBOARD;   
   inputs626[0].ki.wVk = 32;
   
   inputs626[1].type = INPUT_KEYBOARD;   
   inputs626[1].ki.wVk = 32;   
   inputs626[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs626, sizeof(INPUT));
   
   INPUT inputs627[2] = {};   
   ZeroMemory(inputs627, sizeof(inputs627));
   
   inputs627[0].type = INPUT_KEYBOARD;   
   inputs627[0].ki.wVk = 66;
   
   inputs627[1].type = INPUT_KEYBOARD;   
   inputs627[1].ki.wVk = 66;   
   inputs627[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs627, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs628[2] = {};   
   ZeroMemory(inputs628, sizeof(inputs628));
   
   inputs628[0].type = INPUT_KEYBOARD;   
   inputs628[0].ki.wVk = 89;
   
   inputs628[1].type = INPUT_KEYBOARD;   
   inputs628[1].ki.wVk = 89;   
   inputs628[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs628, sizeof(INPUT));
   
   INPUT inputs629[2] = {};   
   ZeroMemory(inputs629, sizeof(inputs629));
   
   inputs629[0].type = INPUT_KEYBOARD;   
   inputs629[0].ki.wVk = 80;
   
   inputs629[1].type = INPUT_KEYBOARD;   
   inputs629[1].ki.wVk = 80;   
   inputs629[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs629, sizeof(INPUT));
   
   INPUT inputs630[2] = {};   
   ZeroMemory(inputs630, sizeof(inputs630));
   
   inputs630[0].type = INPUT_KEYBOARD;   
   inputs630[0].ki.wVk = 65;
   
   inputs630[1].type = INPUT_KEYBOARD;   
   inputs630[1].ki.wVk = 65;   
   inputs630[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs630, sizeof(INPUT));
   
   INPUT inputs631[2] = {};   
   ZeroMemory(inputs631, sizeof(inputs631));
   
   inputs631[0].type = INPUT_KEYBOARD;   
   inputs631[0].ki.wVk = 83;
   
   inputs631[1].type = INPUT_KEYBOARD;   
   inputs631[1].ki.wVk = 83;   
   inputs631[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs631, sizeof(INPUT));
   
   INPUT inputs632[2] = {};   
   ZeroMemory(inputs632, sizeof(inputs632));
   
   inputs632[0].type = INPUT_KEYBOARD;   
   inputs632[0].ki.wVk = 83;
   
   inputs632[1].type = INPUT_KEYBOARD;   
   inputs632[1].ki.wVk = 83;   
   inputs632[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs632, sizeof(INPUT));
   
   INPUT inputs633[2] = {};   
   ZeroMemory(inputs633, sizeof(inputs633));
   
   inputs633[0].type = INPUT_KEYBOARD;   
   inputs633[0].ki.wVk = 32;
   
   inputs633[1].type = INPUT_KEYBOARD;   
   inputs633[1].ki.wVk = 32;   
   inputs633[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs633, sizeof(INPUT));
   
   INPUT inputs634[2] = {};   
   ZeroMemory(inputs634, sizeof(inputs634));
   
   inputs634[0].type = INPUT_KEYBOARD;   
   inputs634[0].ki.wVk = 189;
   
   inputs634[1].type = INPUT_KEYBOARD;   
   inputs634[1].ki.wVk = 189;   
   inputs634[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs634, sizeof(INPUT));
   
   INPUT inputs635[2] = {};   
   ZeroMemory(inputs635, sizeof(inputs635));
   
   inputs635[0].type = INPUT_KEYBOARD;   
   inputs635[0].ki.wVk = 70;
   
   inputs635[1].type = INPUT_KEYBOARD;   
   inputs635[1].ki.wVk = 70;   
   inputs635[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs635, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs636[2] = {};   
   ZeroMemory(inputs636, sizeof(inputs636));
   
   inputs636[0].type = INPUT_KEYBOARD;   
   inputs636[0].ki.wVk = 73;
   
   inputs636[1].type = INPUT_KEYBOARD;   
   inputs636[1].ki.wVk = 73;   
   inputs636[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs636, sizeof(INPUT));
   
   INPUT inputs637[2] = {};   
   ZeroMemory(inputs637, sizeof(inputs637));
   
   inputs637[0].type = INPUT_KEYBOARD;   
   inputs637[0].ki.wVk = 76;
   
   inputs637[1].type = INPUT_KEYBOARD;   
   inputs637[1].ki.wVk = 76;   
   inputs637[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs637, sizeof(INPUT));
   
   INPUT inputs638[2] = {};   
   ZeroMemory(inputs638, sizeof(inputs638));
   
   inputs638[0].type = INPUT_KEYBOARD;   
   inputs638[0].ki.wVk = 69;
   
   inputs638[1].type = INPUT_KEYBOARD;   
   inputs638[1].ki.wVk = 69;   
   inputs638[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs638, sizeof(INPUT));
   
   INPUT inputs639[2] = {};   
   ZeroMemory(inputs639, sizeof(inputs639));
   
   inputs639[0].type = INPUT_KEYBOARD;   
   inputs639[0].ki.wVk = 32;
   
   inputs639[1].type = INPUT_KEYBOARD;   
   inputs639[1].ki.wVk = 32;   
   inputs639[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs639, sizeof(INPUT));
   
   INPUT inputs640[2] = {};   
   ZeroMemory(inputs640, sizeof(inputs640));
   
   inputs640[0].type = INPUT_KEYBOARD;   
   inputs640[0].ki.wVk = 86;
   
   inputs640[1].type = INPUT_KEYBOARD;   
   inputs640[1].ki.wVk = 86;   
   inputs640[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs640, sizeof(INPUT));
   
   INPUT inputs641[2] = {};   
   ZeroMemory(inputs641, sizeof(inputs641));
   
   inputs641[0].type = INPUT_KEYBOARD;   
   inputs641[0].ki.wVk = 79;
   
   inputs641[1].type = INPUT_KEYBOARD;   
   inputs641[1].ki.wVk = 79;   
   inputs641[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs641, sizeof(INPUT));
   
   INPUT inputs642[2] = {};   
   ZeroMemory(inputs642, sizeof(inputs642));
   
   inputs642[0].type = INPUT_KEYBOARD;   
   inputs642[0].ki.wVk = 76;
   
   inputs642[1].type = INPUT_KEYBOARD;   
   inputs642[1].ki.wVk = 76;   
   inputs642[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs642, sizeof(INPUT));
   
   INPUT inputs643[2] = {};   
   ZeroMemory(inputs643, sizeof(inputs643));
   
   inputs643[0].type = INPUT_KEYBOARD;   
   inputs643[0].ki.wVk = 85;
   
   inputs643[1].type = INPUT_KEYBOARD;   
   inputs643[1].ki.wVk = 85;   
   inputs643[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs643, sizeof(INPUT));
   
   INPUT inputs644[2] = {};   
   ZeroMemory(inputs644, sizeof(inputs644));
   
   inputs644[0].type = INPUT_KEYBOARD;   
   inputs644[0].ki.wVk = 80;
   
   inputs644[1].type = INPUT_KEYBOARD;   
   inputs644[1].ki.wVk = 80;   
   inputs644[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs644, sizeof(INPUT));
   
   INPUT inputs645[2] = {};   
   ZeroMemory(inputs645, sizeof(inputs645));
   
   inputs645[0].type = INPUT_KEYBOARD;   
   inputs645[0].ki.wVk = 190;
   
   inputs645[1].type = INPUT_KEYBOARD;   
   inputs645[1].ki.wVk = 190;   
   inputs645[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs645, sizeof(INPUT));
   
   INPUT inputs646[2] = {};   
   ZeroMemory(inputs646, sizeof(inputs646));
   
   inputs646[0].type = INPUT_KEYBOARD;   
   inputs646[0].ki.wVk = 80;
   
   inputs646[1].type = INPUT_KEYBOARD;   
   inputs646[1].ki.wVk = 80;   
   inputs646[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs646, sizeof(INPUT));
   
   INPUT inputs647[2] = {};   
   ZeroMemory(inputs647, sizeof(inputs647));
   
   inputs647[0].type = INPUT_KEYBOARD;   
   inputs647[0].ki.wVk = 83;
   
   inputs647[1].type = INPUT_KEYBOARD;   
   inputs647[1].ki.wVk = 83;   
   inputs647[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs647, sizeof(INPUT));
   
   INPUT inputs648[2] = {};   
   ZeroMemory(inputs648, sizeof(inputs648));
   
   inputs648[0].type = INPUT_KEYBOARD;   
   inputs648[0].ki.wVk = 49;
   
   inputs648[1].type = INPUT_KEYBOARD;   
   inputs648[1].ki.wVk = 49;   
   inputs648[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs648, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs649[1] = {};   
   ZeroMemory(inputs649, sizeof(inputs649));
   
   inputs649[0].type = INPUT_KEYBOARD;   
   inputs649[0].ki.wVk = VK_RETURN;
   
   SendInput(ARRAYSIZE(inputs649), inputs649, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs650[1] = {};   
   ZeroMemory(inputs650, sizeof(inputs650));
   
   inputs650[0].type = INPUT_KEYBOARD;   
   inputs650[0].ki.wVk = VK_RETURN;   
   inputs650[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(ARRAYSIZE(inputs650), inputs650, sizeof(INPUT));

   
   Sleep(100);   
   INPUT inputs653[2] = {};   
   ZeroMemory(inputs653, sizeof(inputs653));
   
   inputs653[0].type = INPUT_KEYBOARD;   
   inputs653[0].ki.wVk = 67;
   
   inputs653[1].type = INPUT_KEYBOARD;   
   inputs653[1].ki.wVk = 67;   
   inputs653[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs653, sizeof(INPUT));
   
   INPUT inputs654[2] = {};   
   ZeroMemory(inputs654, sizeof(inputs654));
   
   inputs654[0].type = INPUT_KEYBOARD;   
   inputs654[0].ki.wVk = 85;
   
   inputs654[1].type = INPUT_KEYBOARD;   
   inputs654[1].ki.wVk = 85;   
   inputs654[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs654, sizeof(INPUT));
   
   INPUT inputs655[2] = {};   
   ZeroMemory(inputs655, sizeof(inputs655));
   
   inputs655[0].type = INPUT_KEYBOARD;   
   inputs655[0].ki.wVk = 82;
   
   inputs655[1].type = INPUT_KEYBOARD;   
   inputs655[1].ki.wVk = 82;   
   inputs655[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs655, sizeof(INPUT));
   
   INPUT inputs656[2] = {};   
   ZeroMemory(inputs656, sizeof(inputs656));
   
   inputs656[0].type = INPUT_KEYBOARD;   
   inputs656[0].ki.wVk = 76;
   
   inputs656[1].type = INPUT_KEYBOARD;   
   inputs656[1].ki.wVk = 76;   
   inputs656[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs656, sizeof(INPUT));
   
   INPUT inputs657[2] = {};   
   ZeroMemory(inputs657, sizeof(inputs657));
   
   inputs657[0].type = INPUT_KEYBOARD;   
   inputs657[0].ki.wVk = 32;
   
   inputs657[1].type = INPUT_KEYBOARD;   
   inputs657[1].ki.wVk = 32;   
   inputs657[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs657, sizeof(INPUT));
   
   INPUT inputs658[2] = {};   
   ZeroMemory(inputs658, sizeof(inputs658));
   
   inputs658[0].type = INPUT_KEYBOARD;   
   inputs658[0].ki.wVk = 189;
   
   inputs658[1].type = INPUT_KEYBOARD;   
   inputs658[1].ki.wVk = 189;   
   inputs658[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs658, sizeof(INPUT));
   
   INPUT inputs659[2] = {};   
   ZeroMemory(inputs659, sizeof(inputs659));
   
   inputs659[0].type = INPUT_KEYBOARD;   
   inputs659[0].ki.wVk = 76;
   
   inputs659[1].type = INPUT_KEYBOARD;   
   inputs659[1].ki.wVk = 76;   
   inputs659[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs659, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs660[2] = {};   
   ZeroMemory(inputs660, sizeof(inputs660));
   
   inputs660[0].type = INPUT_KEYBOARD;   
   inputs660[0].ki.wVk = 32;
   
   inputs660[1].type = INPUT_KEYBOARD;   
   inputs660[1].ki.wVk = 32;   
   inputs660[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs660, sizeof(INPUT));
   
   INPUT inputs661[2] = {};   
   ZeroMemory(inputs661, sizeof(inputs661));
   
   inputs661[0].type = INPUT_KEYBOARD;   
   inputs661[0].ki.wVk = 50;
   
   inputs661[1].type = INPUT_KEYBOARD;   
   inputs661[1].ki.wVk = 50;   
   inputs661[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs661, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs662[2] = {};   
   ZeroMemory(inputs662, sizeof(inputs662));
   
   inputs662[0].type = INPUT_KEYBOARD;   
   inputs662[0].ki.wVk = 72;
   
   inputs662[1].type = INPUT_KEYBOARD;   
   inputs662[1].ki.wVk = 72;   
   inputs662[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs662, sizeof(INPUT));
   
   INPUT inputs663[2] = {};   
   ZeroMemory(inputs663, sizeof(inputs663));
   
   inputs663[0].type = INPUT_KEYBOARD;   
   inputs663[0].ki.wVk = 84;
   
   inputs663[1].type = INPUT_KEYBOARD;   
   inputs663[1].ki.wVk = 84;   
   inputs663[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs663, sizeof(INPUT));
   
   INPUT inputs664[2] = {};   
   ZeroMemory(inputs664, sizeof(inputs664));
   
   inputs664[0].type = INPUT_KEYBOARD;   
   inputs664[0].ki.wVk = 84;
   
   inputs664[1].type = INPUT_KEYBOARD;   
   inputs664[1].ki.wVk = 84;   
   inputs664[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs664, sizeof(INPUT));
   
   INPUT inputs665[2] = {};   
   ZeroMemory(inputs665, sizeof(inputs665));
   
   inputs665[0].type = INPUT_KEYBOARD;   
   inputs665[0].ki.wVk = 80;
   
   inputs665[1].type = INPUT_KEYBOARD;   
   inputs665[1].ki.wVk = 80;   
   inputs665[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs665, sizeof(INPUT));
   
   INPUT inputs666[2] = {};   
   ZeroMemory(inputs666, sizeof(inputs666));
   
   inputs666[0].type = INPUT_KEYBOARD;   
   inputs666[0].ki.wVk = 83;
   
   inputs666[1].type = INPUT_KEYBOARD;   
   inputs666[1].ki.wVk = 83;   
   inputs666[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs666, sizeof(INPUT));
   
   INPUT inputs667[2] = {};   
   ZeroMemory(inputs667, sizeof(inputs667));
   
   inputs667[0].type = INPUT_KEYBOARD;   
   inputs667[0].ki.wVk = 190;
   
   inputs667[1].type = INPUT_KEYBOARD;   
   inputs667[1].ki.wVk = 190;   
   inputs667[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs667, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs668[2] = {};   
   ZeroMemory(inputs668, sizeof(inputs668));
   
   inputs668[0].type = INPUT_KEYBOARD;   
   inputs668[0].ki.wVk = 55;
   
   inputs668[1].type = INPUT_KEYBOARD;   
   inputs668[1].ki.wVk = 55;   
   inputs668[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs668, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs669[2] = {};   
   ZeroMemory(inputs669, sizeof(inputs669));
   
   inputs669[0].type = INPUT_KEYBOARD;   
   inputs669[0].ki.wVk = 55;
   
   inputs669[1].type = INPUT_KEYBOARD;   
   inputs669[1].ki.wVk = 55;   
   inputs669[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs669, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs670[2] = {};   
   ZeroMemory(inputs670, sizeof(inputs670));
   
   inputs670[0].type = INPUT_KEYBOARD;   
   inputs670[0].ki.wVk = 68;
   
   inputs670[1].type = INPUT_KEYBOARD;   
   inputs670[1].ki.wVk = 68;   
   inputs670[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs670, sizeof(INPUT));
   
   INPUT inputs671[2] = {};   
   ZeroMemory(inputs671, sizeof(inputs671));
   
   inputs671[0].type = INPUT_KEYBOARD;   
   inputs671[0].ki.wVk = 82;
   
   inputs671[1].type = INPUT_KEYBOARD;   
   inputs671[1].ki.wVk = 82;   
   inputs671[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs671, sizeof(INPUT));
   
   INPUT inputs672[2] = {};   
   ZeroMemory(inputs672, sizeof(inputs672));
   
   inputs672[0].type = INPUT_KEYBOARD;   
   inputs672[0].ki.wVk = 73;
   
   inputs672[1].type = INPUT_KEYBOARD;   
   inputs672[1].ki.wVk = 73;   
   inputs672[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs672, sizeof(INPUT));
   
   INPUT inputs673[2] = {};   
   ZeroMemory(inputs673, sizeof(inputs673));
   
   inputs673[0].type = INPUT_KEYBOARD;   
   inputs673[0].ki.wVk = 86;
   
   inputs673[1].type = INPUT_KEYBOARD;   
   inputs673[1].ki.wVk = 86;   
   inputs673[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs673, sizeof(INPUT));
   
   INPUT inputs674[2] = {};   
   ZeroMemory(inputs674, sizeof(inputs674));
   
   inputs674[0].type = INPUT_KEYBOARD;   
   inputs674[0].ki.wVk = 69;
   
   inputs674[1].type = INPUT_KEYBOARD;   
   inputs674[1].ki.wVk = 69;   
   inputs674[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs674, sizeof(INPUT));
   
   INPUT inputs675[2] = {};   
   ZeroMemory(inputs675, sizeof(inputs675));
   
   inputs675[0].type = INPUT_KEYBOARD;   
   inputs675[0].ki.wVk = 190;
   
   inputs675[1].type = INPUT_KEYBOARD;   
   inputs675[1].ki.wVk = 190;   
   inputs675[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs675, sizeof(INPUT));
   
   INPUT inputs676[2] = {};   
   ZeroMemory(inputs676, sizeof(inputs676));
   
   inputs676[0].type = INPUT_KEYBOARD;   
   inputs676[0].ki.wVk = 71;
   
   inputs676[1].type = INPUT_KEYBOARD;   
   inputs676[1].ki.wVk = 71;   
   inputs676[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs676, sizeof(INPUT));
   
   INPUT inputs677[2] = {};   
   ZeroMemory(inputs677, sizeof(inputs677));
   
   inputs677[0].type = INPUT_KEYBOARD;   
   inputs677[0].ki.wVk = 79;
   
   inputs677[1].type = INPUT_KEYBOARD;   
   inputs677[1].ki.wVk = 79;   
   inputs677[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs677, sizeof(INPUT));
   
   INPUT inputs678[2] = {};   
   ZeroMemory(inputs678, sizeof(inputs678));
   
   inputs678[0].type = INPUT_KEYBOARD;   
   inputs678[0].ki.wVk = 79;
   
   inputs678[1].type = INPUT_KEYBOARD;   
   inputs678[1].ki.wVk = 79;   
   inputs678[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs678, sizeof(INPUT));
   
   INPUT inputs679[2] = {};   
   ZeroMemory(inputs679, sizeof(inputs679));
   
   inputs679[0].type = INPUT_KEYBOARD;   
   inputs679[0].ki.wVk = 71;
   
   inputs679[1].type = INPUT_KEYBOARD;   
   inputs679[1].ki.wVk = 71;   
   inputs679[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs679, sizeof(INPUT));
   
   INPUT inputs680[2] = {};   
   ZeroMemory(inputs680, sizeof(inputs680));
   
   inputs680[0].type = INPUT_KEYBOARD;   
   inputs680[0].ki.wVk = 76;
   
   inputs680[1].type = INPUT_KEYBOARD;   
   inputs680[1].ki.wVk = 76;   
   inputs680[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs680, sizeof(INPUT));
   
   INPUT inputs681[2] = {};   
   ZeroMemory(inputs681, sizeof(inputs681));
   
   inputs681[0].type = INPUT_KEYBOARD;   
   inputs681[0].ki.wVk = 69;
   
   inputs681[1].type = INPUT_KEYBOARD;   
   inputs681[1].ki.wVk = 69;   
   inputs681[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs681, sizeof(INPUT));
   
   INPUT inputs682[2] = {};   
   ZeroMemory(inputs682, sizeof(inputs682));
   
   inputs682[0].type = INPUT_KEYBOARD;   
   inputs682[0].ki.wVk = 190;
   
   inputs682[1].type = INPUT_KEYBOARD;   
   inputs682[1].ki.wVk = 190;   
   inputs682[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs682, sizeof(INPUT));
   
   INPUT inputs683[2] = {};   
   ZeroMemory(inputs683, sizeof(inputs683));
   
   inputs683[0].type = INPUT_KEYBOARD;   
   inputs683[0].ki.wVk = 67;
   
   inputs683[1].type = INPUT_KEYBOARD;   
   inputs683[1].ki.wVk = 67;   
   inputs683[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs683, sizeof(INPUT));
   
   INPUT inputs684[2] = {};   
   ZeroMemory(inputs684, sizeof(inputs684));
   
   inputs684[0].type = INPUT_KEYBOARD;   
   inputs684[0].ki.wVk = 79;
   
   inputs684[1].type = INPUT_KEYBOARD;   
   inputs684[1].ki.wVk = 79;   
   inputs684[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs684, sizeof(INPUT));
   
   INPUT inputs685[2] = {};   
   ZeroMemory(inputs685, sizeof(inputs685));
   
   inputs685[0].type = INPUT_KEYBOARD;   
   inputs685[0].ki.wVk = 77;
   
   inputs685[1].type = INPUT_KEYBOARD;   
   inputs685[1].ki.wVk = 77;   
   inputs685[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs685, sizeof(INPUT));
   
   INPUT inputs686[2] = {};   
   ZeroMemory(inputs686, sizeof(inputs686));
   
   inputs686[0].type = INPUT_KEYBOARD;   
   inputs686[0].ki.wVk = 55;
   
   inputs686[1].type = INPUT_KEYBOARD;   
   inputs686[1].ki.wVk = 55;   
   inputs686[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs686, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs687[2] = {};   
   ZeroMemory(inputs687, sizeof(inputs687));
   
   inputs687[0].type = INPUT_KEYBOARD;   
   inputs687[0].ki.wVk = 85;
   
   inputs687[1].type = INPUT_KEYBOARD;   
   inputs687[1].ki.wVk = 85;   
   inputs687[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs687, sizeof(INPUT));
   
   INPUT inputs688[2] = {};   
   ZeroMemory(inputs688, sizeof(inputs688));
   
   inputs688[0].type = INPUT_KEYBOARD;   
   inputs688[0].ki.wVk = 67;
   
   inputs688[1].type = INPUT_KEYBOARD;   
   inputs688[1].ki.wVk = 67;   
   inputs688[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs688, sizeof(INPUT));
   
   INPUT inputs689[2] = {};   
   ZeroMemory(inputs689, sizeof(inputs689));
   
   inputs689[0].type = INPUT_KEYBOARD;   
   inputs689[0].ki.wVk = 191;
   
   inputs689[1].type = INPUT_KEYBOARD;   
   inputs689[1].ki.wVk = 191;   
   inputs689[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs689, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs690[2] = {};   
   ZeroMemory(inputs690, sizeof(inputs690));
   
   inputs690[0].type = INPUT_KEYBOARD;   
   inputs690[0].ki.wVk = 69;
   
   inputs690[1].type = INPUT_KEYBOARD;   
   inputs690[1].ki.wVk = 69;   
   inputs690[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs690, sizeof(INPUT));
   
   INPUT inputs691[2] = {};   
   ZeroMemory(inputs691, sizeof(inputs691));
   
   inputs691[0].type = INPUT_KEYBOARD;   
   inputs691[0].ki.wVk = 88;
   
   inputs691[1].type = INPUT_KEYBOARD;   
   inputs691[1].ki.wVk = 88;   
   inputs691[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs691, sizeof(INPUT));
   
   INPUT inputs692[2] = {};   
   ZeroMemory(inputs692, sizeof(inputs692));
   
   inputs692[0].type = INPUT_KEYBOARD;   
   inputs692[0].ki.wVk = 80;
   
   inputs692[1].type = INPUT_KEYBOARD;   
   inputs692[1].ki.wVk = 80;   
   inputs692[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs692, sizeof(INPUT));
   
   INPUT inputs693[2] = {};   
   ZeroMemory(inputs693, sizeof(inputs693));
   
   inputs693[0].type = INPUT_KEYBOARD;   
   inputs693[0].ki.wVk = 79;
   
   inputs693[1].type = INPUT_KEYBOARD;   
   inputs693[1].ki.wVk = 79;   
   inputs693[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs693, sizeof(INPUT));
   
   INPUT inputs694[2] = {};   
   ZeroMemory(inputs694, sizeof(inputs694));
   
   inputs694[0].type = INPUT_KEYBOARD;   
   inputs694[0].ki.wVk = 82;
   
   inputs694[1].type = INPUT_KEYBOARD;   
   inputs694[1].ki.wVk = 82;   
   inputs694[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs694, sizeof(INPUT));
   
   INPUT inputs695[2] = {};   
   ZeroMemory(inputs695, sizeof(inputs695));
   
   inputs695[0].type = INPUT_KEYBOARD;   
   inputs695[0].ki.wVk = 84;
   
   inputs695[1].type = INPUT_KEYBOARD;   
   inputs695[1].ki.wVk = 84;   
   inputs695[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs695, sizeof(INPUT));
   
   INPUT inputs696[2] = {};   
   ZeroMemory(inputs696, sizeof(inputs696));
   
   inputs696[0].type = INPUT_KEYBOARD;   
   inputs696[0].ki.wVk = 48;
   
   inputs696[1].type = INPUT_KEYBOARD;   
   inputs696[1].ki.wVk = 48;   
   inputs696[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs696, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs697[2] = {};   
   ZeroMemory(inputs697, sizeof(inputs697));
   
   inputs697[0].type = INPUT_KEYBOARD;   
   inputs697[0].ki.wVk = 68;
   
   inputs697[1].type = INPUT_KEYBOARD;   
   inputs697[1].ki.wVk = 68;   
   inputs697[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs697, sizeof(INPUT));
   
   INPUT inputs698[2] = {};   
   ZeroMemory(inputs698, sizeof(inputs698));
   
   inputs698[0].type = INPUT_KEYBOARD;   
   inputs698[0].ki.wVk = 79;
   
   inputs698[1].type = INPUT_KEYBOARD;   
   inputs698[1].ki.wVk = 79;   
   inputs698[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs698, sizeof(INPUT));
   
   INPUT inputs699[2] = {};   
   ZeroMemory(inputs699, sizeof(inputs699));
   
   inputs699[0].type = INPUT_KEYBOARD;   
   inputs699[0].ki.wVk = 87;
   
   inputs699[1].type = INPUT_KEYBOARD;   
   inputs699[1].ki.wVk = 87;   
   inputs699[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs699, sizeof(INPUT));
   
   INPUT inputs700[2] = {};   
   ZeroMemory(inputs700, sizeof(inputs700));
   
   inputs700[0].type = INPUT_KEYBOARD;   
   inputs700[0].ki.wVk = 78;
   
   inputs700[1].type = INPUT_KEYBOARD;   
   inputs700[1].ki.wVk = 78;   
   inputs700[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs700, sizeof(INPUT));
   
   INPUT inputs701[2] = {};   
   ZeroMemory(inputs701, sizeof(inputs701));
   
   inputs701[0].type = INPUT_KEYBOARD;   
   inputs701[0].ki.wVk = 76;
   
   inputs701[1].type = INPUT_KEYBOARD;   
   inputs701[1].ki.wVk = 76;   
   inputs701[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs701, sizeof(INPUT));
   
   INPUT inputs702[2] = {};   
   ZeroMemory(inputs702, sizeof(inputs702));
   
   inputs702[0].type = INPUT_KEYBOARD;   
   inputs702[0].ki.wVk = 79;
   
   inputs702[1].type = INPUT_KEYBOARD;   
   inputs702[1].ki.wVk = 79;   
   inputs702[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs702, sizeof(INPUT));
   
   INPUT inputs703[2] = {};   
   ZeroMemory(inputs703, sizeof(inputs703));
   
   inputs703[0].type = INPUT_KEYBOARD;   
   inputs703[0].ki.wVk = 65;
   
   inputs703[1].type = INPUT_KEYBOARD;   
   inputs703[1].ki.wVk = 65;   
   inputs703[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs703, sizeof(INPUT));
   
   INPUT inputs704[2] = {};   
   ZeroMemory(inputs704, sizeof(inputs704));
   
   inputs704[0].type = INPUT_KEYBOARD;   
   inputs704[0].ki.wVk = 68;
   
   inputs704[1].type = INPUT_KEYBOARD;   
   inputs704[1].ki.wVk = 68;   
   inputs704[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs704, sizeof(INPUT));
   
   INPUT inputs705[2] = {};   
   ZeroMemory(inputs705, sizeof(inputs705));
   
   inputs705[0].type = INPUT_KEYBOARD;   
   inputs705[0].ki.wVk = 54;
   
   inputs705[1].type = INPUT_KEYBOARD;   
   inputs705[1].ki.wVk = 54;   
   inputs705[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs705, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs706[2] = {};   
   ZeroMemory(inputs706, sizeof(inputs706));
   
   inputs706[0].type = INPUT_KEYBOARD;   
   inputs706[0].ki.wVk = 73;
   
   inputs706[1].type = INPUT_KEYBOARD;   
   inputs706[1].ki.wVk = 73;   
   inputs706[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs706, sizeof(INPUT));
   
   INPUT inputs707[2] = {};   
   ZeroMemory(inputs707, sizeof(inputs707));
   
   inputs707[0].type = INPUT_KEYBOARD;   
   inputs707[0].ki.wVk = 68;
   
   inputs707[1].type = INPUT_KEYBOARD;   
   inputs707[1].ki.wVk = 68;   
   inputs707[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs707, sizeof(INPUT));
   
   INPUT inputs708[2] = {};   
   ZeroMemory(inputs708, sizeof(inputs708));
   
   inputs708[0].type = INPUT_KEYBOARD;   
   inputs708[0].ki.wVk = 48;
   
   inputs708[1].type = INPUT_KEYBOARD;   
   inputs708[1].ki.wVk = 48;   
   inputs708[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs708, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs709[2] = {};   
   ZeroMemory(inputs709, sizeof(inputs709));
   
   inputs709[0].type = INPUT_KEYBOARD;   
   inputs709[0].ki.wVk = 49;
   
   inputs709[1].type = INPUT_KEYBOARD;   
   inputs709[1].ki.wVk = 49;   
   inputs709[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs709, sizeof(INPUT));
   
   INPUT inputs710[2] = {};   
   ZeroMemory(inputs710, sizeof(inputs710));
   
   inputs710[0].type = INPUT_KEYBOARD;   
   inputs710[0].ki.wVk = 73;
   
   inputs710[1].type = INPUT_KEYBOARD;   
   inputs710[1].ki.wVk = 73;   
   inputs710[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs710, sizeof(INPUT));
   
   INPUT inputs711[2] = {};   
   ZeroMemory(inputs711, sizeof(inputs711));
   
   inputs711[0].type = INPUT_KEYBOARD;   
   inputs711[0].ki.wVk = 57;
   
   inputs711[1].type = INPUT_KEYBOARD;   
   inputs711[1].ki.wVk = 57;   
   inputs711[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs711, sizeof(INPUT));
   
   INPUT inputs712[2] = {};   
   ZeroMemory(inputs712, sizeof(inputs712));
   
   inputs712[0].type = INPUT_KEYBOARD;   
   inputs712[0].ki.wVk = 68;
   
   inputs712[1].type = INPUT_KEYBOARD;   
   inputs712[1].ki.wVk = 68;   
   inputs712[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs712, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs713[2] = {};   
   ZeroMemory(inputs713, sizeof(inputs713));
   
   inputs713[0].type = INPUT_KEYBOARD;   
   inputs713[0].ki.wVk = 51;
   
   inputs713[1].type = INPUT_KEYBOARD;   
   inputs713[1].ki.wVk = 51;   
   inputs713[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs713, sizeof(INPUT));
   
   INPUT inputs714[2] = {};   
   ZeroMemory(inputs714, sizeof(inputs714));
   
   inputs714[0].type = INPUT_KEYBOARD;   
   inputs714[0].ki.wVk = 65;
   
   inputs714[1].type = INPUT_KEYBOARD;   
   inputs714[1].ki.wVk = 65;   
   inputs714[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs714, sizeof(INPUT));
   
   INPUT inputs715[2] = {};   
   ZeroMemory(inputs715, sizeof(inputs715));
   
   inputs715[0].type = INPUT_KEYBOARD;   
   inputs715[0].ki.wVk = 72;
   
   inputs715[1].type = INPUT_KEYBOARD;   
   inputs715[1].ki.wVk = 72;   
   inputs715[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs715, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs716[2] = {};   
   ZeroMemory(inputs716, sizeof(inputs716));
   
   inputs716[0].type = INPUT_KEYBOARD;   
   inputs716[0].ki.wVk = 75;
   
   inputs716[1].type = INPUT_KEYBOARD;   
   inputs716[1].ki.wVk = 75;   
   inputs716[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs716, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs717[2] = {};   
   ZeroMemory(inputs717, sizeof(inputs717));
   
   inputs717[0].type = INPUT_KEYBOARD;   
   inputs717[0].ki.wVk = 84;
   
   inputs717[1].type = INPUT_KEYBOARD;   
   inputs717[1].ki.wVk = 84;   
   inputs717[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs717, sizeof(INPUT));
   
   INPUT inputs718[2] = {};   
   ZeroMemory(inputs718, sizeof(inputs718));
   
   inputs718[0].type = INPUT_KEYBOARD;   
   inputs718[0].ki.wVk = 85;
   
   inputs718[1].type = INPUT_KEYBOARD;   
   inputs718[1].ki.wVk = 85;   
   inputs718[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs718, sizeof(INPUT));
   
   INPUT inputs719[2] = {};   
   ZeroMemory(inputs719, sizeof(inputs719));
   
   inputs719[0].type = INPUT_KEYBOARD;   
   inputs719[0].ki.wVk = 78;
   
   inputs719[1].type = INPUT_KEYBOARD;   
   inputs719[1].ki.wVk = 78;   
   inputs719[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs719, sizeof(INPUT));
   
   INPUT inputs720[2] = {};   
   ZeroMemory(inputs720, sizeof(inputs720));
   
   inputs720[0].type = INPUT_KEYBOARD;   
   inputs720[0].ki.wVk = 72;
   
   inputs720[1].type = INPUT_KEYBOARD;   
   inputs720[1].ki.wVk = 72;   
   inputs720[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs720, sizeof(INPUT));
   
   INPUT inputs721[2] = {};   
   ZeroMemory(inputs721, sizeof(inputs721));
   
   inputs721[0].type = INPUT_KEYBOARD;   
   inputs721[0].ki.wVk = 189;
   
   inputs721[1].type = INPUT_KEYBOARD;   
   inputs721[1].ki.wVk = 189;   
   inputs721[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs721, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs722[2] = {};   
   ZeroMemory(inputs722, sizeof(inputs722));
   
   inputs722[0].type = INPUT_KEYBOARD;   
   inputs722[0].ki.wVk = 70;
   
   inputs722[1].type = INPUT_KEYBOARD;   
   inputs722[1].ki.wVk = 70;   
   inputs722[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs722, sizeof(INPUT));
   
   INPUT inputs723[2] = {};   
   ZeroMemory(inputs723, sizeof(inputs723));
   
   inputs723[0].type = INPUT_KEYBOARD;   
   inputs723[0].ki.wVk = 65;
   
   inputs723[1].type = INPUT_KEYBOARD;   
   inputs723[1].ki.wVk = 65;   
   inputs723[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs723, sizeof(INPUT));
   
   INPUT inputs724[2] = {};   
   ZeroMemory(inputs724, sizeof(inputs724));
   
   inputs724[0].type = INPUT_KEYBOARD;   
   inputs724[0].ki.wVk = 73;
   
   inputs724[1].type = INPUT_KEYBOARD;   
   inputs724[1].ki.wVk = 73;   
   inputs724[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs724, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs725[2] = {};   
   ZeroMemory(inputs725, sizeof(inputs725));
   
   inputs725[0].type = INPUT_KEYBOARD;   
   inputs725[0].ki.wVk = 72;
   
   inputs725[1].type = INPUT_KEYBOARD;   
   inputs725[1].ki.wVk = 72;   
   inputs725[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs725, sizeof(INPUT));
   
   INPUT inputs726[2] = {};   
   ZeroMemory(inputs726, sizeof(inputs726));
   
   inputs726[0].type = INPUT_KEYBOARD;   
   inputs726[0].ki.wVk = 79;
   
   inputs726[1].type = INPUT_KEYBOARD;   
   inputs726[1].ki.wVk = 79;   
   inputs726[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs726, sizeof(INPUT));
   
   INPUT inputs727[2] = {};   
   ZeroMemory(inputs727, sizeof(inputs727));
   
   inputs727[0].type = INPUT_KEYBOARD;   
   inputs727[0].ki.wVk = 88;
   
   inputs727[1].type = INPUT_KEYBOARD;   
   inputs727[1].ki.wVk = 88;   
   inputs727[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs727, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs728[2] = {};   
   ZeroMemory(inputs728, sizeof(inputs728));
   
   inputs728[0].type = INPUT_KEYBOARD;   
   inputs728[0].ki.wVk = 74;
   
   inputs728[1].type = INPUT_KEYBOARD;   
   inputs728[1].ki.wVk = 74;   
   inputs728[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs728, sizeof(INPUT));
   
   INPUT inputs729[2] = {};   
   ZeroMemory(inputs729, sizeof(inputs729));
   
   inputs729[0].type = INPUT_KEYBOARD;   
   inputs729[0].ki.wVk = 50;
   
   inputs729[1].type = INPUT_KEYBOARD;   
   inputs729[1].ki.wVk = 50;   
   inputs729[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs729, sizeof(INPUT));
   
   INPUT inputs730[2] = {};   
   ZeroMemory(inputs730, sizeof(inputs730));
   
   inputs730[0].type = INPUT_KEYBOARD;   
   inputs730[0].ki.wVk = 83;
   
   inputs730[1].type = INPUT_KEYBOARD;   
   inputs730[1].ki.wVk = 83;   
   inputs730[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs730, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs731[2] = {};   
   ZeroMemory(inputs731, sizeof(inputs731));
   
   inputs731[0].type = INPUT_KEYBOARD;   
   inputs731[0].ki.wVk = 72;
   
   inputs731[1].type = INPUT_KEYBOARD;   
   inputs731[1].ki.wVk = 72;   
   inputs731[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs731, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs732[2] = {};   
   ZeroMemory(inputs732, sizeof(inputs732));
   
   inputs732[0].type = INPUT_KEYBOARD;   
   inputs732[0].ki.wVk = 79;
   
   inputs732[1].type = INPUT_KEYBOARD;   
   inputs732[1].ki.wVk = 79;   
   inputs732[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs732, sizeof(INPUT));
   
   INPUT inputs733[2] = {};   
   ZeroMemory(inputs733, sizeof(inputs733));
   
   inputs733[0].type = INPUT_KEYBOARD;   
   inputs733[0].ki.wVk = 89;
   
   inputs733[1].type = INPUT_KEYBOARD;   
   inputs733[1].ki.wVk = 89;   
   inputs733[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs733, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs734[2] = {};   
   ZeroMemory(inputs734, sizeof(inputs734));
   
   inputs734[0].type = INPUT_KEYBOARD;   
   inputs734[0].ki.wVk = 89;
   
   inputs734[1].type = INPUT_KEYBOARD;   
   inputs734[1].ki.wVk = 89;   
   inputs734[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs734, sizeof(INPUT));
   
   INPUT inputs735[2] = {};   
   ZeroMemory(inputs735, sizeof(inputs735));
   
   inputs735[0].type = INPUT_KEYBOARD;   
   inputs735[0].ki.wVk = 55;
   
   inputs735[1].type = INPUT_KEYBOARD;   
   inputs735[1].ki.wVk = 55;   
   inputs735[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs735, sizeof(INPUT));
   
   INPUT inputs736[2] = {};   
   ZeroMemory(inputs736, sizeof(inputs736));
   
   inputs736[0].type = INPUT_KEYBOARD;   
   inputs736[0].ki.wVk = 67;
   
   inputs736[1].type = INPUT_KEYBOARD;   
   inputs736[1].ki.wVk = 67;   
   inputs736[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs736, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs737[2] = {};   
   ZeroMemory(inputs737, sizeof(inputs737));
   
   inputs737[0].type = INPUT_KEYBOARD;   
   inputs737[0].ki.wVk = 85;
   
   inputs737[1].type = INPUT_KEYBOARD;   
   inputs737[1].ki.wVk = 85;   
   inputs737[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs737, sizeof(INPUT));
   
   INPUT inputs738[2] = {};   
   ZeroMemory(inputs738, sizeof(inputs738));
   
   inputs738[0].type = INPUT_KEYBOARD;   
   inputs738[0].ki.wVk = 88;
   
   inputs738[1].type = INPUT_KEYBOARD;   
   inputs738[1].ki.wVk = 88;   
   inputs738[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs738, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs739[2] = {};   
   ZeroMemory(inputs739, sizeof(inputs739));
   
   inputs739[0].type = INPUT_KEYBOARD;   
   inputs739[0].ki.wVk = 80;
   
   inputs739[1].type = INPUT_KEYBOARD;   
   inputs739[1].ki.wVk = 80;   
   inputs739[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs739, sizeof(INPUT));
   
   INPUT inputs740[2] = {};   
   ZeroMemory(inputs740, sizeof(inputs740));
   
   inputs740[0].type = INPUT_KEYBOARD;   
   inputs740[0].ki.wVk = 49;
   
   inputs740[1].type = INPUT_KEYBOARD;   
   inputs740[1].ki.wVk = 49;   
   inputs740[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs740, sizeof(INPUT));
   
   INPUT inputs741[2] = {};   
   ZeroMemory(inputs741, sizeof(inputs741));
   
   inputs741[0].type = INPUT_KEYBOARD;   
   inputs741[0].ki.wVk = 69;
   
   inputs741[1].type = INPUT_KEYBOARD;   
   inputs741[1].ki.wVk = 69;   
   inputs741[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs741, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs742[2] = {};   
   ZeroMemory(inputs742, sizeof(inputs742));
   
   inputs742[0].type = INPUT_KEYBOARD;   
   inputs742[0].ki.wVk = 50;
   
   inputs742[1].type = INPUT_KEYBOARD;   
   inputs742[1].ki.wVk = 50;   
   inputs742[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs742, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs743[2] = {};   
   ZeroMemory(inputs743, sizeof(inputs743));
   
   inputs743[0].type = INPUT_KEYBOARD;   
   inputs743[0].ki.wVk = 32;
   
   inputs743[1].type = INPUT_KEYBOARD;   
   inputs743[1].ki.wVk = 32;   
   inputs743[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs743, sizeof(INPUT));
   
   INPUT inputs744[2] = {};   
   ZeroMemory(inputs744, sizeof(inputs744));
   
   inputs744[0].type = INPUT_KEYBOARD;   
   inputs744[0].ki.wVk = 189;
   
   inputs744[1].type = INPUT_KEYBOARD;   
   inputs744[1].ki.wVk = 189;   
   inputs744[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs744, sizeof(INPUT));
   
   INPUT inputs745[2] = {};   
   ZeroMemory(inputs745, sizeof(inputs745));
   
   inputs745[0].type = INPUT_KEYBOARD;   
   inputs745[0].ki.wVk = 189;
   
   inputs745[1].type = INPUT_KEYBOARD;   
   inputs745[1].ki.wVk = 189;   
   inputs745[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs745, sizeof(INPUT));
   
   INPUT inputs746[2] = {};   
   ZeroMemory(inputs746, sizeof(inputs746));
   
   inputs746[0].type = INPUT_KEYBOARD;   
   inputs746[0].ki.wVk = 79;
   
   inputs746[1].type = INPUT_KEYBOARD;   
   inputs746[1].ki.wVk = 79;   
   inputs746[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs746, sizeof(INPUT));
   
   INPUT inputs747[2] = {};   
   ZeroMemory(inputs747, sizeof(inputs747));
   
   inputs747[0].type = INPUT_KEYBOARD;   
   inputs747[0].ki.wVk = 85;
   
   inputs747[1].type = INPUT_KEYBOARD;   
   inputs747[1].ki.wVk = 85;   
   inputs747[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs747, sizeof(INPUT));
   
   INPUT inputs748[2] = {};   
   ZeroMemory(inputs748, sizeof(inputs748));
   
   inputs748[0].type = INPUT_KEYBOARD;   
   inputs748[0].ki.wVk = 84;
   
   inputs748[1].type = INPUT_KEYBOARD;   
   inputs748[1].ki.wVk = 84;   
   inputs748[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs748, sizeof(INPUT));
   
   INPUT inputs749[2] = {};   
   ZeroMemory(inputs749, sizeof(inputs749));
   
   inputs749[0].type = INPUT_KEYBOARD;   
   inputs749[0].ki.wVk = 80;
   
   inputs749[1].type = INPUT_KEYBOARD;   
   inputs749[1].ki.wVk = 80;   
   inputs749[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs749, sizeof(INPUT));
   
   INPUT inputs750[2] = {};   
   ZeroMemory(inputs750, sizeof(inputs750));
   
   inputs750[0].type = INPUT_KEYBOARD;   
   inputs750[0].ki.wVk = 85;
   
   inputs750[1].type = INPUT_KEYBOARD;   
   inputs750[1].ki.wVk = 85;   
   inputs750[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs750, sizeof(INPUT));
   
   INPUT inputs751[2] = {};   
   ZeroMemory(inputs751, sizeof(inputs751));
   
   inputs751[0].type = INPUT_KEYBOARD;   
   inputs751[0].ki.wVk = 84;
   
   inputs751[1].type = INPUT_KEYBOARD;   
   inputs751[1].ki.wVk = 84;   
   inputs751[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs751, sizeof(INPUT));
   
   INPUT inputs752[2] = {};   
   ZeroMemory(inputs752, sizeof(inputs752));
   
   inputs752[0].type = INPUT_KEYBOARD;   
   inputs752[0].ki.wVk = 32;
   
   inputs752[1].type = INPUT_KEYBOARD;   
   inputs752[1].ki.wVk = 32;   
   inputs752[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs752, sizeof(INPUT));
   
   INPUT inputs753[2] = {};   
   ZeroMemory(inputs753, sizeof(inputs753));
   
   inputs753[0].type = INPUT_KEYBOARD;   
   inputs753[0].ki.wVk = 67;
   
   inputs753[1].type = INPUT_KEYBOARD;   
   inputs753[1].ki.wVk = 67;   
   inputs753[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs753, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs754[2] = {};   
   ZeroMemory(inputs754, sizeof(inputs754));
   
   inputs754[0].type = INPUT_KEYBOARD;   
   inputs754[0].ki.wVk = 190;
   
   inputs754[1].type = INPUT_KEYBOARD;   
   inputs754[1].ki.wVk = 190;   
   inputs754[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs754, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs755[2] = {};   
   ZeroMemory(inputs755, sizeof(inputs755));
   
   inputs755[0].type = INPUT_KEYBOARD;   
   inputs755[0].ki.wVk = 55;
   
   inputs755[1].type = INPUT_KEYBOARD;   
   inputs755[1].ki.wVk = 55;   
   inputs755[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs755, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs756[2] = {};   
   ZeroMemory(inputs756, sizeof(inputs756));
   
   inputs756[0].type = INPUT_KEYBOARD;   
   inputs756[0].ki.wVk = 85;
   
   inputs756[1].type = INPUT_KEYBOARD;   
   inputs756[1].ki.wVk = 85;   
   inputs756[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs756, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs757[2] = {};   
   ZeroMemory(inputs757, sizeof(inputs757));
   
   inputs757[0].type = INPUT_KEYBOARD;   
   inputs757[0].ki.wVk = 83;
   
   inputs757[1].type = INPUT_KEYBOARD;   
   inputs757[1].ki.wVk = 83;   
   inputs757[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs757, sizeof(INPUT));
   
   INPUT inputs758[2] = {};   
   ZeroMemory(inputs758, sizeof(inputs758));
   
   inputs758[0].type = INPUT_KEYBOARD;   
   inputs758[0].ki.wVk = 69;
   
   inputs758[1].type = INPUT_KEYBOARD;   
   inputs758[1].ki.wVk = 69;   
   inputs758[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs758, sizeof(INPUT));
   
   INPUT inputs759[2] = {};   
   ZeroMemory(inputs759, sizeof(inputs759));
   
   inputs759[0].type = INPUT_KEYBOARD;   
   inputs759[0].ki.wVk = 82;
   
   inputs759[1].type = INPUT_KEYBOARD;   
   inputs759[1].ki.wVk = 82;   
   inputs759[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs759, sizeof(INPUT));
   
   INPUT inputs760[2] = {};   
   ZeroMemory(inputs760, sizeof(inputs760));
   
   inputs760[0].type = INPUT_KEYBOARD;   
   inputs760[0].ki.wVk = 83;
   
   inputs760[1].type = INPUT_KEYBOARD;   
   inputs760[1].ki.wVk = 83;   
   inputs760[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs760, sizeof(INPUT));
   
   INPUT inputs761[2] = {};   
   ZeroMemory(inputs761, sizeof(inputs761));
   
   inputs761[0].type = INPUT_KEYBOARD;   
   inputs761[0].ki.wVk = 55;
   
   inputs761[1].type = INPUT_KEYBOARD;   
   inputs761[1].ki.wVk = 55;   
   inputs761[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs761, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs762[2] = {};   
   ZeroMemory(inputs762, sizeof(inputs762));
   
   inputs762[0].type = INPUT_KEYBOARD;   
   inputs762[0].ki.wVk = 53;
   
   inputs762[1].type = INPUT_KEYBOARD;   
   inputs762[1].ki.wVk = 53;   
   inputs762[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs762, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs763[2] = {};   
   ZeroMemory(inputs763, sizeof(inputs763));
   
   inputs763[0].type = INPUT_KEYBOARD;   
   inputs763[0].ki.wVk = 85;
   
   inputs763[1].type = INPUT_KEYBOARD;   
   inputs763[1].ki.wVk = 85;   
   inputs763[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs763, sizeof(INPUT));
   
   INPUT inputs764[2] = {};   
   ZeroMemory(inputs764, sizeof(inputs764));
   
   inputs764[0].type = INPUT_KEYBOARD;   
   inputs764[0].ki.wVk = 83;
   
   inputs764[1].type = INPUT_KEYBOARD;   
   inputs764[1].ki.wVk = 83;   
   inputs764[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs764, sizeof(INPUT));
   
   INPUT inputs765[2] = {};   
   ZeroMemory(inputs765, sizeof(inputs765));
   
   inputs765[0].type = INPUT_KEYBOARD;   
   inputs765[0].ki.wVk = 69;
   
   inputs765[1].type = INPUT_KEYBOARD;   
   inputs765[1].ki.wVk = 69;   
   inputs765[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs765, sizeof(INPUT));
   
   INPUT inputs766[2] = {};   
   ZeroMemory(inputs766, sizeof(inputs766));
   
   inputs766[0].type = INPUT_KEYBOARD;   
   inputs766[0].ki.wVk = 82;
   
   inputs766[1].type = INPUT_KEYBOARD;   
   inputs766[1].ki.wVk = 82;   
   inputs766[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs766, sizeof(INPUT));
   
   INPUT inputs767[2] = {};   
   ZeroMemory(inputs767, sizeof(inputs767));
   
   inputs767[0].type = INPUT_KEYBOARD;   
   inputs767[0].ki.wVk = 78;
   
   inputs767[1].type = INPUT_KEYBOARD;   
   inputs767[1].ki.wVk = 78;   
   inputs767[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs767, sizeof(INPUT));
   
   INPUT inputs768[2] = {};   
   ZeroMemory(inputs768, sizeof(inputs768));
   
   inputs768[0].type = INPUT_KEYBOARD;   
   inputs768[0].ki.wVk = 65;
   
   inputs768[1].type = INPUT_KEYBOARD;   
   inputs768[1].ki.wVk = 65;   
   inputs768[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs768, sizeof(INPUT));
   
   INPUT inputs769[2] = {};   
   ZeroMemory(inputs769, sizeof(inputs769));
   
   inputs769[0].type = INPUT_KEYBOARD;   
   inputs769[0].ki.wVk = 77;
   
   inputs769[1].type = INPUT_KEYBOARD;   
   inputs769[1].ki.wVk = 77;   
   inputs769[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs769, sizeof(INPUT));
   
   INPUT inputs770[2] = {};   
   ZeroMemory(inputs770, sizeof(inputs770));
   
   inputs770[0].type = INPUT_KEYBOARD;   
   inputs770[0].ki.wVk = 69;
   
   inputs770[1].type = INPUT_KEYBOARD;   
   inputs770[1].ki.wVk = 69;   
   inputs770[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs770, sizeof(INPUT));
   
   INPUT inputs771[2] = {};   
   ZeroMemory(inputs771, sizeof(inputs771));
   
   inputs771[0].type = INPUT_KEYBOARD;   
   inputs771[0].ki.wVk = 53;
   
   inputs771[1].type = INPUT_KEYBOARD;   
   inputs771[1].ki.wVk = 53;   
   inputs771[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs771, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs772[2] = {};   
   ZeroMemory(inputs772, sizeof(inputs772));
   
   inputs772[0].type = INPUT_KEYBOARD;   
   inputs772[0].ki.wVk = 55;
   
   inputs772[1].type = INPUT_KEYBOARD;   
   inputs772[1].ki.wVk = 55;   
   inputs772[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs772, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs773[2] = {};   
   ZeroMemory(inputs773, sizeof(inputs773));
   
   inputs773[0].type = INPUT_KEYBOARD;   
   inputs773[0].ki.wVk = 68;
   
   inputs773[1].type = INPUT_KEYBOARD;   
   inputs773[1].ki.wVk = 68;   
   inputs773[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs773, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs774[2] = {};   
   ZeroMemory(inputs774, sizeof(inputs774));
   
   inputs774[0].type = INPUT_KEYBOARD;   
   inputs774[0].ki.wVk = 79;
   
   inputs774[1].type = INPUT_KEYBOARD;   
   inputs774[1].ki.wVk = 79;   
   inputs774[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs774, sizeof(INPUT));
   
   INPUT inputs775[2] = {};   
   ZeroMemory(inputs775, sizeof(inputs775));
   
   inputs775[0].type = INPUT_KEYBOARD;   
   inputs775[0].ki.wVk = 87;
   
   inputs775[1].type = INPUT_KEYBOARD;   
   inputs775[1].ki.wVk = 87;   
   inputs775[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs775, sizeof(INPUT));
   
   INPUT inputs776[2] = {};   
   ZeroMemory(inputs776, sizeof(inputs776));
   
   inputs776[0].type = INPUT_KEYBOARD;   
   inputs776[0].ki.wVk = 78;
   
   inputs776[1].type = INPUT_KEYBOARD;   
   inputs776[1].ki.wVk = 78;   
   inputs776[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs776, sizeof(INPUT));
   
   INPUT inputs777[2] = {};   
   ZeroMemory(inputs777, sizeof(inputs777));
   
   inputs777[0].type = INPUT_KEYBOARD;   
   inputs777[0].ki.wVk = 76;
   
   inputs777[1].type = INPUT_KEYBOARD;   
   inputs777[1].ki.wVk = 76;   
   inputs777[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs777, sizeof(INPUT));
   
   INPUT inputs778[2] = {};   
   ZeroMemory(inputs778, sizeof(inputs778));
   
   inputs778[0].type = INPUT_KEYBOARD;   
   inputs778[0].ki.wVk = 79;
   
   inputs778[1].type = INPUT_KEYBOARD;   
   inputs778[1].ki.wVk = 79;   
   inputs778[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs778, sizeof(INPUT));
   
   INPUT inputs779[2] = {};   
   ZeroMemory(inputs779, sizeof(inputs779));
   
   inputs779[0].type = INPUT_KEYBOARD;   
   inputs779[0].ki.wVk = 65;
   
   inputs779[1].type = INPUT_KEYBOARD;   
   inputs779[1].ki.wVk = 65;   
   inputs779[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs779, sizeof(INPUT));
   
   INPUT inputs780[2] = {};   
   ZeroMemory(inputs780, sizeof(inputs780));
   
   inputs780[0].type = INPUT_KEYBOARD;   
   inputs780[0].ki.wVk = 68;
   
   inputs780[1].type = INPUT_KEYBOARD;   
   inputs780[1].ki.wVk = 68;   
   inputs780[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs780, sizeof(INPUT));
   
   INPUT inputs781[2] = {};   
   ZeroMemory(inputs781, sizeof(inputs781));
   
   inputs781[0].type = INPUT_KEYBOARD;   
   inputs781[0].ki.wVk = 83;
   
   inputs781[1].type = INPUT_KEYBOARD;   
   inputs781[1].ki.wVk = 83;   
   inputs781[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs781, sizeof(INPUT));
   
   INPUT inputs782[2] = {};   
   ZeroMemory(inputs782, sizeof(inputs782));
   
   inputs782[0].type = INPUT_KEYBOARD;   
   inputs782[0].ki.wVk = 55;
   
   inputs782[1].type = INPUT_KEYBOARD;   
   inputs782[1].ki.wVk = 55;   
   inputs782[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs782, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs783[2] = {};   
   ZeroMemory(inputs783, sizeof(inputs783));
   
   inputs783[0].type = INPUT_KEYBOARD;   
   inputs783[0].ki.wVk = 78;
   
   inputs783[1].type = INPUT_KEYBOARD;   
   inputs783[1].ki.wVk = 78;   
   inputs783[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs783, sizeof(INPUT));
   
   INPUT inputs784[2] = {};   
   ZeroMemory(inputs784, sizeof(inputs784));
   
   inputs784[0].type = INPUT_KEYBOARD;   
   inputs784[0].ki.wVk = 69;
   
   inputs784[1].type = INPUT_KEYBOARD;   
   inputs784[1].ki.wVk = 69;   
   inputs784[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs784, sizeof(INPUT));
   
   INPUT inputs785[2] = {};   
   ZeroMemory(inputs785, sizeof(inputs785));
   
   inputs785[0].type = INPUT_KEYBOARD;   
   inputs785[0].ki.wVk = 86;
   
   inputs785[1].type = INPUT_KEYBOARD;   
   inputs785[1].ki.wVk = 86;   
   inputs785[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs785, sizeof(INPUT));
   
   INPUT inputs786[2] = {};   
   ZeroMemory(inputs786, sizeof(inputs786));
   
   inputs786[0].type = INPUT_KEYBOARD;   
   inputs786[0].ki.wVk = 69;
   
   inputs786[1].type = INPUT_KEYBOARD;   
   inputs786[1].ki.wVk = 69;   
   inputs786[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs786, sizeof(INPUT));
   
   INPUT inputs787[2] = {};   
   ZeroMemory(inputs787, sizeof(inputs787));
   
   inputs787[0].type = INPUT_KEYBOARD;   
   inputs787[0].ki.wVk = 82;
   
   inputs787[1].type = INPUT_KEYBOARD;   
   inputs787[1].ki.wVk = 82;   
   inputs787[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs787, sizeof(INPUT));
   
   INPUT inputs788[2] = {};   
   ZeroMemory(inputs788, sizeof(inputs788));
   
   inputs788[0].type = INPUT_KEYBOARD;   
   inputs788[0].ki.wVk = 189;
   
   inputs788[1].type = INPUT_KEYBOARD;   
   inputs788[1].ki.wVk = 189;   
   inputs788[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs788, sizeof(INPUT));
   
   INPUT inputs789[2] = {};   
   ZeroMemory(inputs789, sizeof(inputs789));
   
   inputs789[0].type = INPUT_KEYBOARD;   
   inputs789[0].ki.wVk = 71;
   
   inputs789[1].type = INPUT_KEYBOARD;   
   inputs789[1].ki.wVk = 71;   
   inputs789[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs789, sizeof(INPUT));
   
   INPUT inputs790[2] = {};   
   ZeroMemory(inputs790, sizeof(inputs790));
   
   inputs790[0].type = INPUT_KEYBOARD;   
   inputs790[0].ki.wVk = 79;
   
   inputs790[1].type = INPUT_KEYBOARD;   
   inputs790[1].ki.wVk = 79;   
   inputs790[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs790, sizeof(INPUT));
   
   INPUT inputs791[2] = {};   
   ZeroMemory(inputs791, sizeof(inputs791));
   
   inputs791[0].type = INPUT_KEYBOARD;   
   inputs791[0].ki.wVk = 78;
   
   inputs791[1].type = INPUT_KEYBOARD;   
   inputs791[1].ki.wVk = 78;   
   inputs791[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs791, sizeof(INPUT));
   
   INPUT inputs792[2] = {};   
   ZeroMemory(inputs792, sizeof(inputs792));
   
   inputs792[0].type = INPUT_KEYBOARD;   
   inputs792[0].ki.wVk = 78;
   
   inputs792[1].type = INPUT_KEYBOARD;   
   inputs792[1].ki.wVk = 78;   
   inputs792[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs792, sizeof(INPUT));
   
   INPUT inputs793[2] = {};   
   ZeroMemory(inputs793, sizeof(inputs793));
   
   inputs793[0].type = INPUT_KEYBOARD;   
   inputs793[0].ki.wVk = 65;
   
   inputs793[1].type = INPUT_KEYBOARD;   
   inputs793[1].ki.wVk = 65;   
   inputs793[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs793, sizeof(INPUT));
   
   INPUT inputs794[2] = {};   
   ZeroMemory(inputs794, sizeof(inputs794));
   
   inputs794[0].type = INPUT_KEYBOARD;   
   inputs794[0].ki.wVk = 189;
   
   inputs794[1].type = INPUT_KEYBOARD;   
   inputs794[1].ki.wVk = 189;   
   inputs794[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs794, sizeof(INPUT));
   
   INPUT inputs795[2] = {};   
   ZeroMemory(inputs795, sizeof(inputs795));
   
   inputs795[0].type = INPUT_KEYBOARD;   
   inputs795[0].ki.wVk = 71;
   
   inputs795[1].type = INPUT_KEYBOARD;   
   inputs795[1].ki.wVk = 71;   
   inputs795[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs795, sizeof(INPUT));
   
   INPUT inputs796[2] = {};   
   ZeroMemory(inputs796, sizeof(inputs796));
   
   inputs796[0].type = INPUT_KEYBOARD;   
   inputs796[0].ki.wVk = 73;
   
   inputs796[1].type = INPUT_KEYBOARD;   
   inputs796[1].ki.wVk = 73;   
   inputs796[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs796, sizeof(INPUT));
   
   INPUT inputs797[2] = {};   
   ZeroMemory(inputs797, sizeof(inputs797));
   
   inputs797[0].type = INPUT_KEYBOARD;   
   inputs797[0].ki.wVk = 86;
   
   inputs797[1].type = INPUT_KEYBOARD;   
   inputs797[1].ki.wVk = 86;   
   inputs797[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs797, sizeof(INPUT));
   
   INPUT inputs798[2] = {};   
   ZeroMemory(inputs798, sizeof(inputs798));
   
   inputs798[0].type = INPUT_KEYBOARD;   
   inputs798[0].ki.wVk = 69;
   
   inputs798[1].type = INPUT_KEYBOARD;   
   inputs798[1].ki.wVk = 69;   
   inputs798[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs798, sizeof(INPUT));
   
   INPUT inputs799[2] = {};   
   ZeroMemory(inputs799, sizeof(inputs799));
   
   inputs799[0].type = INPUT_KEYBOARD;   
   inputs799[0].ki.wVk = 189;
   
   inputs799[1].type = INPUT_KEYBOARD;   
   inputs799[1].ki.wVk = 189;   
   inputs799[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs799, sizeof(INPUT));
   
   INPUT inputs800[2] = {};   
   ZeroMemory(inputs800, sizeof(inputs800));
   
   inputs800[0].type = INPUT_KEYBOARD;   
   inputs800[0].ki.wVk = 89;
   
   inputs800[1].type = INPUT_KEYBOARD;   
   inputs800[1].ki.wVk = 89;   
   inputs800[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs800, sizeof(INPUT));
   
   INPUT inputs801[2] = {};   
   ZeroMemory(inputs801, sizeof(inputs801));
   
   inputs801[0].type = INPUT_KEYBOARD;   
   inputs801[0].ki.wVk = 79;
   
   inputs801[1].type = INPUT_KEYBOARD;   
   inputs801[1].ki.wVk = 79;   
   inputs801[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs801, sizeof(INPUT));
   
   INPUT inputs802[2] = {};   
   ZeroMemory(inputs802, sizeof(inputs802));
   
   inputs802[0].type = INPUT_KEYBOARD;   
   inputs802[0].ki.wVk = 85;
   
   inputs802[1].type = INPUT_KEYBOARD;   
   inputs802[1].ki.wVk = 85;   
   inputs802[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs802, sizeof(INPUT));
   
   INPUT inputs803[2] = {};   
   ZeroMemory(inputs803, sizeof(inputs803));
   
   inputs803[0].type = INPUT_KEYBOARD;   
   inputs803[0].ki.wVk = 189;
   
   inputs803[1].type = INPUT_KEYBOARD;   
   inputs803[1].ki.wVk = 189;   
   inputs803[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs803, sizeof(INPUT));
   
   INPUT inputs804[2] = {};   
   ZeroMemory(inputs804, sizeof(inputs804));
   
   inputs804[0].type = INPUT_KEYBOARD;   
   inputs804[0].ki.wVk = 85;
   
   inputs804[1].type = INPUT_KEYBOARD;   
   inputs804[1].ki.wVk = 85;   
   inputs804[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs804, sizeof(INPUT));
   
   INPUT inputs805[2] = {};   
   ZeroMemory(inputs805, sizeof(inputs805));
   
   inputs805[0].type = INPUT_KEYBOARD;   
   inputs805[0].ki.wVk = 80;
   
   inputs805[1].type = INPUT_KEYBOARD;   
   inputs805[1].ki.wVk = 80;   
   inputs805[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs805, sizeof(INPUT));
   
   INPUT inputs806[2] = {};   
   ZeroMemory(inputs806, sizeof(inputs806));
   
   inputs806[0].type = INPUT_KEYBOARD;   
   inputs806[0].ki.wVk = 190;
   
   inputs806[1].type = INPUT_KEYBOARD;   
   inputs806[1].ki.wVk = 190;   
   inputs806[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs806, sizeof(INPUT));
   
   INPUT inputs807[2] = {};   
   ZeroMemory(inputs807, sizeof(inputs807));
   
   inputs807[0].type = INPUT_KEYBOARD;   
   inputs807[0].ki.wVk = 77;
   
   inputs807[1].type = INPUT_KEYBOARD;   
   inputs807[1].ki.wVk = 77;   
   inputs807[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs807, sizeof(INPUT));
   
   INPUT inputs808[2] = {};   
   ZeroMemory(inputs808, sizeof(inputs808));
   
   inputs808[0].type = INPUT_KEYBOARD;   
   inputs808[0].ki.wVk = 52;
   
   inputs808[1].type = INPUT_KEYBOARD;   
   inputs808[1].ki.wVk = 52;   
   inputs808[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs808, sizeof(INPUT));
   
   INPUT inputs809[2] = {};   
   ZeroMemory(inputs809, sizeof(inputs809));
   
   inputs809[0].type = INPUT_KEYBOARD;   
   inputs809[0].ki.wVk = 65;
   
   inputs809[1].type = INPUT_KEYBOARD;   
   inputs809[1].ki.wVk = 65;   
   inputs809[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs809, sizeof(INPUT));
   
   INPUT inputs810[2] = {};   
   ZeroMemory(inputs810, sizeof(inputs810));
   
   inputs810[0].type = INPUT_KEYBOARD;   
   inputs810[0].ki.wVk = 32;
   
   inputs810[1].type = INPUT_KEYBOARD;   
   inputs810[1].ki.wVk = 32;   
   inputs810[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs810, sizeof(INPUT));
   
   INPUT inputs811[2] = {};   
   ZeroMemory(inputs811, sizeof(inputs811));
   
   inputs811[0].type = INPUT_KEYBOARD;   
   inputs811[0].ki.wVk = 54;
   
   inputs811[1].type = INPUT_KEYBOARD;   
   inputs811[1].ki.wVk = 54;   
   inputs811[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs811, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs812[2] = {};   
   ZeroMemory(inputs812, sizeof(inputs812));
   
   inputs812[0].type = INPUT_KEYBOARD;   
   inputs812[0].ki.wVk = 32;
   
   inputs812[1].type = INPUT_KEYBOARD;   
   inputs812[1].ki.wVk = 32;   
   inputs812[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs812, sizeof(INPUT));
   
   INPUT inputs813[2] = {};   
   ZeroMemory(inputs813, sizeof(inputs813));
   
   inputs813[0].type = INPUT_KEYBOARD;   
   inputs813[0].ki.wVk = 69;
   
   inputs813[1].type = INPUT_KEYBOARD;   
   inputs813[1].ki.wVk = 69;   
   inputs813[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs813, sizeof(INPUT));
   
   INPUT inputs814[2] = {};   
   ZeroMemory(inputs814, sizeof(inputs814));
   
   inputs814[0].type = INPUT_KEYBOARD;   
   inputs814[0].ki.wVk = 67;
   
   inputs814[1].type = INPUT_KEYBOARD;   
   inputs814[1].ki.wVk = 67;   
   inputs814[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs814, sizeof(INPUT));
   
   INPUT inputs815[2] = {};   
   ZeroMemory(inputs815, sizeof(inputs815));
   
   inputs815[0].type = INPUT_KEYBOARD;   
   inputs815[0].ki.wVk = 72;
   
   inputs815[1].type = INPUT_KEYBOARD;   
   inputs815[1].ki.wVk = 72;   
   inputs815[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs815, sizeof(INPUT));
   
   INPUT inputs816[2] = {};   
   ZeroMemory(inputs816, sizeof(inputs816));
   
   inputs816[0].type = INPUT_KEYBOARD;   
   inputs816[0].ki.wVk = 79;
   
   inputs816[1].type = INPUT_KEYBOARD;   
   inputs816[1].ki.wVk = 79;   
   inputs816[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs816, sizeof(INPUT));
   
   INPUT inputs817[2] = {};   
   ZeroMemory(inputs817, sizeof(inputs817));
   
   inputs817[0].type = INPUT_KEYBOARD;   
   inputs817[0].ki.wVk = 32;
   
   inputs817[1].type = INPUT_KEYBOARD;   
   inputs817[1].ki.wVk = 32;   
   inputs817[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs817, sizeof(INPUT));
   
   INPUT inputs818[2] = {};   
   ZeroMemory(inputs818, sizeof(inputs818));
   
   inputs818[0].type = INPUT_KEYBOARD;   
   inputs818[0].ki.wVk = 68;
   
   inputs818[1].type = INPUT_KEYBOARD;   
   inputs818[1].ki.wVk = 68;   
   inputs818[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs818, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs819[2] = {};   
   ZeroMemory(inputs819, sizeof(inputs819));
   
   inputs819[0].type = INPUT_KEYBOARD;   
   inputs819[0].ki.wVk = 73;
   
   inputs819[1].type = INPUT_KEYBOARD;   
   inputs819[1].ki.wVk = 73;   
   inputs819[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs819, sizeof(INPUT));
   
   INPUT inputs820[2] = {};   
   ZeroMemory(inputs820, sizeof(inputs820));
   
   inputs820[0].type = INPUT_KEYBOARD;   
   inputs820[0].ki.wVk = 77;
   
   inputs820[1].type = INPUT_KEYBOARD;   
   inputs820[1].ki.wVk = 77;   
   inputs820[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs820, sizeof(INPUT));
   
   INPUT inputs821[2] = {};   
   ZeroMemory(inputs821, sizeof(inputs821));
   
   inputs821[0].type = INPUT_KEYBOARD;   
   inputs821[0].ki.wVk = 32;
   
   inputs821[1].type = INPUT_KEYBOARD;   
   inputs821[1].ki.wVk = 32;   
   inputs821[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs821, sizeof(INPUT));
   
   INPUT inputs822[2] = {};   
   ZeroMemory(inputs822, sizeof(inputs822));
   
   inputs822[0].type = INPUT_KEYBOARD;   
   inputs822[0].ki.wVk = 79;
   
   inputs822[1].type = INPUT_KEYBOARD;   
   inputs822[1].ki.wVk = 79;   
   inputs822[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs822, sizeof(INPUT));
   
   INPUT inputs823[2] = {};   
   ZeroMemory(inputs823, sizeof(inputs823));
   
   inputs823[0].type = INPUT_KEYBOARD;   
   inputs823[0].ki.wVk = 80;
   
   inputs823[1].type = INPUT_KEYBOARD;   
   inputs823[1].ki.wVk = 80;   
   inputs823[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs823, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs824[2] = {};   
   ZeroMemory(inputs824, sizeof(inputs824));
   
   inputs824[0].type = INPUT_KEYBOARD;   
   inputs824[0].ki.wVk = 76;
   
   inputs824[1].type = INPUT_KEYBOARD;   
   inputs824[1].ki.wVk = 76;   
   inputs824[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs824, sizeof(INPUT));
   
   INPUT inputs825[2] = {};   
   ZeroMemory(inputs825, sizeof(inputs825));
   
   inputs825[0].type = INPUT_KEYBOARD;   
   inputs825[0].ki.wVk = 65;
   
   inputs825[1].type = INPUT_KEYBOARD;   
   inputs825[1].ki.wVk = 65;   
   inputs825[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs825, sizeof(INPUT));
   
   INPUT inputs826[2] = {};   
   ZeroMemory(inputs826, sizeof(inputs826));
   
   inputs826[0].type = INPUT_KEYBOARD;   
   inputs826[0].ki.wVk = 89;
   
   inputs826[1].type = INPUT_KEYBOARD;   
   inputs826[1].ki.wVk = 89;   
   inputs826[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs826, sizeof(INPUT));
   
   INPUT inputs827[2] = {};   
   ZeroMemory(inputs827, sizeof(inputs827));
   
   inputs827[0].type = INPUT_KEYBOARD;   
   inputs827[0].ki.wVk = 69;
   
   inputs827[1].type = INPUT_KEYBOARD;   
   inputs827[1].ki.wVk = 69;   
   inputs827[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs827, sizeof(INPUT));
   
   INPUT inputs828[2] = {};   
   ZeroMemory(inputs828, sizeof(inputs828));
   
   inputs828[0].type = INPUT_KEYBOARD;   
   inputs828[0].ki.wVk = 82;
   
   inputs828[1].type = INPUT_KEYBOARD;   
   inputs828[1].ki.wVk = 82;   
   inputs828[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs828, sizeof(INPUT));
   
   INPUT inputs829[2] = {};   
   ZeroMemory(inputs829, sizeof(inputs829));
   
   inputs829[0].type = INPUT_KEYBOARD;   
   inputs829[0].ki.wVk = 32;
   
   inputs829[1].type = INPUT_KEYBOARD;   
   inputs829[1].ki.wVk = 32;   
   inputs829[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs829, sizeof(INPUT));
   
   INPUT inputs830[2] = {};   
   ZeroMemory(inputs830, sizeof(inputs830));
   
   inputs830[0].type = INPUT_KEYBOARD;   
   inputs830[0].ki.wVk = 190;
   
   inputs830[1].type = INPUT_KEYBOARD;   
   inputs830[1].ki.wVk = 190;   
   inputs830[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs830, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs831[2] = {};   
   ZeroMemory(inputs831, sizeof(inputs831));
   
   inputs831[0].type = INPUT_KEYBOARD;   
   inputs831[0].ki.wVk = 32;
   
   inputs831[1].type = INPUT_KEYBOARD;   
   inputs831[1].ki.wVk = 32;   
   inputs831[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs831, sizeof(INPUT));
   
   INPUT inputs832[2] = {};   
   ZeroMemory(inputs832, sizeof(inputs832));
   
   inputs832[0].type = INPUT_KEYBOARD;   
   inputs832[0].ki.wVk = 82;
   
   inputs832[1].type = INPUT_KEYBOARD;   
   inputs832[1].ki.wVk = 82;   
   inputs832[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs832, sizeof(INPUT));
   
   INPUT inputs833[2] = {};   
   ZeroMemory(inputs833, sizeof(inputs833));
   
   inputs833[0].type = INPUT_KEYBOARD;   
   inputs833[0].ki.wVk = 73;
   
   inputs833[1].type = INPUT_KEYBOARD;   
   inputs833[1].ki.wVk = 73;   
   inputs833[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs833, sizeof(INPUT));
   
   INPUT inputs834[2] = {};   
   ZeroMemory(inputs834, sizeof(inputs834));
   
   inputs834[0].type = INPUT_KEYBOARD;   
   inputs834[0].ki.wVk = 67;
   
   inputs834[1].type = INPUT_KEYBOARD;   
   inputs834[1].ki.wVk = 67;   
   inputs834[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs834, sizeof(INPUT));
   
   INPUT inputs835[2] = {};   
   ZeroMemory(inputs835, sizeof(inputs835));
   
   inputs835[0].type = INPUT_KEYBOARD;   
   inputs835[0].ki.wVk = 75;
   
   inputs835[1].type = INPUT_KEYBOARD;   
   inputs835[1].ki.wVk = 75;   
   inputs835[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs835, sizeof(INPUT));
   
   INPUT inputs836[2] = {};   
   ZeroMemory(inputs836, sizeof(inputs836));
   
   inputs836[0].type = INPUT_KEYBOARD;   
   inputs836[0].ki.wVk = 82;
   
   inputs836[1].type = INPUT_KEYBOARD;   
   inputs836[1].ki.wVk = 82;   
   inputs836[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs836, sizeof(INPUT));
   
   INPUT inputs837[2] = {};   
   ZeroMemory(inputs837, sizeof(inputs837));
   
   inputs837[0].type = INPUT_KEYBOARD;   
   inputs837[0].ki.wVk = 79;
   
   inputs837[1].type = INPUT_KEYBOARD;   
   inputs837[1].ki.wVk = 79;   
   inputs837[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs837, sizeof(INPUT));
   
   INPUT inputs838[2] = {};   
   ZeroMemory(inputs838, sizeof(inputs838));
   
   inputs838[0].type = INPUT_KEYBOARD;   
   inputs838[0].ki.wVk = 76;
   
   inputs838[1].type = INPUT_KEYBOARD;   
   inputs838[1].ki.wVk = 76;   
   inputs838[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs838, sizeof(INPUT));
   
   INPUT inputs839[2] = {};   
   ZeroMemory(inputs839, sizeof(inputs839));
   
   inputs839[0].type = INPUT_KEYBOARD;   
   inputs839[0].ki.wVk = 76;
   
   inputs839[1].type = INPUT_KEYBOARD;   
   inputs839[1].ki.wVk = 76;   
   inputs839[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs839, sizeof(INPUT));
   
   INPUT inputs840[2] = {};   
   ZeroMemory(inputs840, sizeof(inputs840));
   
   inputs840[0].type = INPUT_KEYBOARD;   
   inputs840[0].ki.wVk = 190;
   
   inputs840[1].type = INPUT_KEYBOARD;   
   inputs840[1].ki.wVk = 190;   
   inputs840[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs840, sizeof(INPUT));
   
   INPUT inputs841[2] = {};   
   ZeroMemory(inputs841, sizeof(inputs841));
   
   inputs841[0].type = INPUT_KEYBOARD;   
   inputs841[0].ki.wVk = 86;
   
   inputs841[1].type = INPUT_KEYBOARD;   
   inputs841[1].ki.wVk = 86;   
   inputs841[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs841, sizeof(INPUT));
   
   INPUT inputs842[2] = {};   
   ZeroMemory(inputs842, sizeof(inputs842));
   
   inputs842[0].type = INPUT_KEYBOARD;   
   inputs842[0].ki.wVk = 66;
   
   inputs842[1].type = INPUT_KEYBOARD;   
   inputs842[1].ki.wVk = 66;   
   inputs842[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs842, sizeof(INPUT));
   
   INPUT inputs843[2] = {};   
   ZeroMemory(inputs843, sizeof(inputs843));
   
   inputs843[0].type = INPUT_KEYBOARD;   
   inputs843[0].ki.wVk = 83;
   
   inputs843[1].type = INPUT_KEYBOARD;   
   inputs843[1].ki.wVk = 83;   
   inputs843[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs843, sizeof(INPUT));
   
   INPUT inputs844[2] = {};   
   ZeroMemory(inputs844, sizeof(inputs844));
   
   inputs844[0].type = INPUT_KEYBOARD;   
   inputs844[0].ki.wVk = 32;
   
   inputs844[1].type = INPUT_KEYBOARD;   
   inputs844[1].ki.wVk = 32;   
   inputs844[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs844, sizeof(INPUT));
   
   INPUT inputs845[2] = {};   
   ZeroMemory(inputs845, sizeof(inputs845));
   
   inputs845[0].type = INPUT_KEYBOARD;   
   inputs845[0].ki.wVk = 54;
   
   inputs845[1].type = INPUT_KEYBOARD;   
   inputs845[1].ki.wVk = 54;   
   inputs845[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs845, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs846[2] = {};   
   ZeroMemory(inputs846, sizeof(inputs846));
   
   inputs846[0].type = INPUT_KEYBOARD;   
   inputs846[0].ki.wVk = 32;
   
   inputs846[1].type = INPUT_KEYBOARD;   
   inputs846[1].ki.wVk = 32;   
   inputs846[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs846, sizeof(INPUT));
   
   INPUT inputs847[2] = {};   
   ZeroMemory(inputs847, sizeof(inputs847));
   
   inputs847[0].type = INPUT_KEYBOARD;   
   inputs847[0].ki.wVk = 69;
   
   inputs847[1].type = INPUT_KEYBOARD;   
   inputs847[1].ki.wVk = 69;   
   inputs847[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs847, sizeof(INPUT));
   
   INPUT inputs848[2] = {};   
   ZeroMemory(inputs848, sizeof(inputs848));
   
   inputs848[0].type = INPUT_KEYBOARD;   
   inputs848[0].ki.wVk = 67;
   
   inputs848[1].type = INPUT_KEYBOARD;   
   inputs848[1].ki.wVk = 67;   
   inputs848[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs848, sizeof(INPUT));
   
   INPUT inputs849[2] = {};   
   ZeroMemory(inputs849, sizeof(inputs849));
   
   inputs849[0].type = INPUT_KEYBOARD;   
   inputs849[0].ki.wVk = 72;
   
   inputs849[1].type = INPUT_KEYBOARD;   
   inputs849[1].ki.wVk = 72;   
   inputs849[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs849, sizeof(INPUT));
   
   INPUT inputs850[2] = {};   
   ZeroMemory(inputs850, sizeof(inputs850));
   
   inputs850[0].type = INPUT_KEYBOARD;   
   inputs850[0].ki.wVk = 79;
   
   inputs850[1].type = INPUT_KEYBOARD;   
   inputs850[1].ki.wVk = 79;   
   inputs850[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs850, sizeof(INPUT));
   
   INPUT inputs851[2] = {};   
   ZeroMemory(inputs851, sizeof(inputs851));
   
   inputs851[0].type = INPUT_KEYBOARD;   
   inputs851[0].ki.wVk = 32;
   
   inputs851[1].type = INPUT_KEYBOARD;   
   inputs851[1].ki.wVk = 32;   
   inputs851[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs851, sizeof(INPUT));
   
   INPUT inputs852[2] = {};   
   ZeroMemory(inputs852, sizeof(inputs852));
   
   inputs852[0].type = INPUT_KEYBOARD;   
   inputs852[0].ki.wVk = 83;
   
   inputs852[1].type = INPUT_KEYBOARD;   
   inputs852[1].ki.wVk = 83;   
   inputs852[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs852, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs853[2] = {};   
   ZeroMemory(inputs853, sizeof(inputs853));
   
   inputs853[0].type = INPUT_KEYBOARD;   
   inputs853[0].ki.wVk = 69;
   
   inputs853[1].type = INPUT_KEYBOARD;   
   inputs853[1].ki.wVk = 69;   
   inputs853[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs853, sizeof(INPUT));
   
   INPUT inputs854[2] = {};   
   ZeroMemory(inputs854, sizeof(inputs854));
   
   inputs854[0].type = INPUT_KEYBOARD;   
   inputs854[0].ki.wVk = 84;
   
   inputs854[1].type = INPUT_KEYBOARD;   
   inputs854[1].ki.wVk = 84;   
   inputs854[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs854, sizeof(INPUT));
   
   INPUT inputs855[2] = {};   
   ZeroMemory(inputs855, sizeof(inputs855));
   
   inputs855[0].type = INPUT_KEYBOARD;   
   inputs855[0].ki.wVk = 32;
   
   inputs855[1].type = INPUT_KEYBOARD;   
   inputs855[1].ki.wVk = 32;   
   inputs855[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs855, sizeof(INPUT));
   
   INPUT inputs856[2] = {};   
   ZeroMemory(inputs856, sizeof(inputs856));
   
   inputs856[0].type = INPUT_KEYBOARD;   
   inputs856[0].ki.wVk = 79;
   
   inputs856[1].type = INPUT_KEYBOARD;   
   inputs856[1].ki.wVk = 79;   
   inputs856[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs856, sizeof(INPUT));
   
   INPUT inputs857[2] = {};   
   ZeroMemory(inputs857, sizeof(inputs857));
   
   inputs857[0].type = INPUT_KEYBOARD;   
   inputs857[0].ki.wVk = 80;
   
   inputs857[1].type = INPUT_KEYBOARD;   
   inputs857[1].ki.wVk = 80;   
   inputs857[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs857, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs858[2] = {};   
   ZeroMemory(inputs858, sizeof(inputs858));
   
   inputs858[0].type = INPUT_KEYBOARD;   
   inputs858[0].ki.wVk = 76;
   
   inputs858[1].type = INPUT_KEYBOARD;   
   inputs858[1].ki.wVk = 76;   
   inputs858[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs858, sizeof(INPUT));
   
   INPUT inputs859[2] = {};   
   ZeroMemory(inputs859, sizeof(inputs859));
   
   inputs859[0].type = INPUT_KEYBOARD;   
   inputs859[0].ki.wVk = 65;
   
   inputs859[1].type = INPUT_KEYBOARD;   
   inputs859[1].ki.wVk = 65;   
   inputs859[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs859, sizeof(INPUT));
   
   INPUT inputs860[2] = {};   
   ZeroMemory(inputs860, sizeof(inputs860));
   
   inputs860[0].type = INPUT_KEYBOARD;   
   inputs860[0].ki.wVk = 89;
   
   inputs860[1].type = INPUT_KEYBOARD;   
   inputs860[1].ki.wVk = 89;   
   inputs860[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs860, sizeof(INPUT));
   
   INPUT inputs861[2] = {};   
   ZeroMemory(inputs861, sizeof(inputs861));
   
   inputs861[0].type = INPUT_KEYBOARD;   
   inputs861[0].ki.wVk = 69;
   
   inputs861[1].type = INPUT_KEYBOARD;   
   inputs861[1].ki.wVk = 69;   
   inputs861[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs861, sizeof(INPUT));
   
   INPUT inputs862[2] = {};   
   ZeroMemory(inputs862, sizeof(inputs862));
   
   inputs862[0].type = INPUT_KEYBOARD;   
   inputs862[0].ki.wVk = 82;
   
   inputs862[1].type = INPUT_KEYBOARD;   
   inputs862[1].ki.wVk = 82;   
   inputs862[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs862, sizeof(INPUT));
   
   INPUT inputs863[2] = {};   
   ZeroMemory(inputs863, sizeof(inputs863));
   
   inputs863[0].type = INPUT_KEYBOARD;   
   inputs863[0].ki.wVk = 32;
   
   inputs863[1].type = INPUT_KEYBOARD;   
   inputs863[1].ki.wVk = 32;   
   inputs863[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs863, sizeof(INPUT));
   
   INPUT inputs864[2] = {};   
   ZeroMemory(inputs864, sizeof(inputs864));
   
   inputs864[0].type = INPUT_KEYBOARD;   
   inputs864[0].ki.wVk = 48;
   
   inputs864[1].type = INPUT_KEYBOARD;   
   inputs864[1].ki.wVk = 48;   
   inputs864[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs864, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs865[2] = {};   
   ZeroMemory(inputs865, sizeof(inputs865));
   
   inputs865[0].type = INPUT_KEYBOARD;   
   inputs865[0].ki.wVk = 32;
   
   inputs865[1].type = INPUT_KEYBOARD;   
   inputs865[1].ki.wVk = 32;   
   inputs865[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs865, sizeof(INPUT));
   
   INPUT inputs866[2] = {};   
   ZeroMemory(inputs866, sizeof(inputs866));
   
   inputs866[0].type = INPUT_KEYBOARD;   
   inputs866[0].ki.wVk = 67;
   
   inputs866[1].type = INPUT_KEYBOARD;   
   inputs866[1].ki.wVk = 67;   
   inputs866[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs866, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs867[2] = {};   
   ZeroMemory(inputs867, sizeof(inputs867));
   
   inputs867[0].type = INPUT_KEYBOARD;   
   inputs867[0].ki.wVk = 82;
   
   inputs867[1].type = INPUT_KEYBOARD;   
   inputs867[1].ki.wVk = 82;   
   inputs867[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs867, sizeof(INPUT));
   
   INPUT inputs868[2] = {};   
   ZeroMemory(inputs868, sizeof(inputs868));
   
   inputs868[0].type = INPUT_KEYBOARD;   
   inputs868[0].ki.wVk = 69;
   
   inputs868[1].type = INPUT_KEYBOARD;   
   inputs868[1].ki.wVk = 69;   
   inputs868[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs868, sizeof(INPUT));
   
   INPUT inputs869[2] = {};   
   ZeroMemory(inputs869, sizeof(inputs869));
   
   inputs869[0].type = INPUT_KEYBOARD;   
   inputs869[0].ki.wVk = 65;
   
   inputs869[1].type = INPUT_KEYBOARD;   
   inputs869[1].ki.wVk = 65;   
   inputs869[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs869, sizeof(INPUT));
   
   INPUT inputs870[2] = {};   
   ZeroMemory(inputs870, sizeof(inputs870));
   
   inputs870[0].type = INPUT_KEYBOARD;   
   inputs870[0].ki.wVk = 84;
   
   inputs870[1].type = INPUT_KEYBOARD;   
   inputs870[1].ki.wVk = 84;   
   inputs870[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs870, sizeof(INPUT));
   
   INPUT inputs871[2] = {};   
   ZeroMemory(inputs871, sizeof(inputs871));
   
   inputs871[0].type = INPUT_KEYBOARD;   
   inputs871[0].ki.wVk = 69;
   
   inputs871[1].type = INPUT_KEYBOARD;   
   inputs871[1].ki.wVk = 69;   
   inputs871[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs871, sizeof(INPUT));
   
   INPUT inputs872[2] = {};   
   ZeroMemory(inputs872, sizeof(inputs872));
   
   inputs872[0].type = INPUT_KEYBOARD;   
   inputs872[0].ki.wVk = 79;
   
   inputs872[1].type = INPUT_KEYBOARD;   
   inputs872[1].ki.wVk = 79;   
   inputs872[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs872, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs873[2] = {};   
   ZeroMemory(inputs873, sizeof(inputs873));
   
   inputs873[0].type = INPUT_KEYBOARD;   
   inputs873[0].ki.wVk = 66;
   
   inputs873[1].type = INPUT_KEYBOARD;   
   inputs873[1].ki.wVk = 66;   
   inputs873[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs873, sizeof(INPUT));
   
   INPUT inputs874[2] = {};   
   ZeroMemory(inputs874, sizeof(inputs874));
   
   inputs874[0].type = INPUT_KEYBOARD;   
   inputs874[0].ki.wVk = 74;
   
   inputs874[1].type = INPUT_KEYBOARD;   
   inputs874[1].ki.wVk = 74;   
   inputs874[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs874, sizeof(INPUT));
   
   INPUT inputs875[2] = {};   
   ZeroMemory(inputs875, sizeof(inputs875));
   
   inputs875[0].type = INPUT_KEYBOARD;   
   inputs875[0].ki.wVk = 69;
   
   inputs875[1].type = INPUT_KEYBOARD;   
   inputs875[1].ki.wVk = 69;   
   inputs875[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs875, sizeof(INPUT));
   
   INPUT inputs876[2] = {};   
   ZeroMemory(inputs876, sizeof(inputs876));
   
   inputs876[0].type = INPUT_KEYBOARD;   
   inputs876[0].ki.wVk = 67;
   
   inputs876[1].type = INPUT_KEYBOARD;   
   inputs876[1].ki.wVk = 67;   
   inputs876[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs876, sizeof(INPUT));
   
   INPUT inputs877[2] = {};   
   ZeroMemory(inputs877, sizeof(inputs877));
   
   inputs877[0].type = INPUT_KEYBOARD;   
   inputs877[0].ki.wVk = 84;
   
   inputs877[1].type = INPUT_KEYBOARD;   
   inputs877[1].ki.wVk = 84;   
   inputs877[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs877, sizeof(INPUT));
   
   INPUT inputs878[2] = {};   
   ZeroMemory(inputs878, sizeof(inputs878));
   
   inputs878[0].type = INPUT_KEYBOARD;   
   inputs878[0].ki.wVk = 56;
   
   inputs878[1].type = INPUT_KEYBOARD;   
   inputs878[1].ki.wVk = 56;   
   inputs878[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs878, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs879[2] = {};   
   ZeroMemory(inputs879, sizeof(inputs879));
   
   inputs879[0].type = INPUT_KEYBOARD;   
   inputs879[0].ki.wVk = 50;
   
   inputs879[1].type = INPUT_KEYBOARD;   
   inputs879[1].ki.wVk = 50;   
   inputs879[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs879, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs880[2] = {};   
   ZeroMemory(inputs880, sizeof(inputs880));
   
   inputs880[0].type = INPUT_KEYBOARD;   
   inputs880[0].ki.wVk = 87;
   
   inputs880[1].type = INPUT_KEYBOARD;   
   inputs880[1].ki.wVk = 87;   
   inputs880[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs880, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs881[2] = {};   
   ZeroMemory(inputs881, sizeof(inputs881));
   
   inputs881[0].type = INPUT_KEYBOARD;   
   inputs881[0].ki.wVk = 77;
   
   inputs881[1].type = INPUT_KEYBOARD;   
   inputs881[1].ki.wVk = 77;   
   inputs881[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs881, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs882[2] = {};   
   ZeroMemory(inputs882, sizeof(inputs882));
   
   inputs882[0].type = INPUT_KEYBOARD;   
   inputs882[0].ki.wVk = 80;
   
   inputs882[1].type = INPUT_KEYBOARD;   
   inputs882[1].ki.wVk = 80;   
   inputs882[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs882, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs883[2] = {};   
   ZeroMemory(inputs883, sizeof(inputs883));
   
   inputs883[0].type = INPUT_KEYBOARD;   
   inputs883[0].ki.wVk = 76;
   
   inputs883[1].type = INPUT_KEYBOARD;   
   inputs883[1].ki.wVk = 76;   
   inputs883[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs883, sizeof(INPUT));
   
   INPUT inputs884[2] = {};   
   ZeroMemory(inputs884, sizeof(inputs884));
   
   inputs884[0].type = INPUT_KEYBOARD;   
   inputs884[0].ki.wVk = 65;
   
   inputs884[1].type = INPUT_KEYBOARD;   
   inputs884[1].ki.wVk = 65;   
   inputs884[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs884, sizeof(INPUT));
   
   INPUT inputs885[2] = {};   
   ZeroMemory(inputs885, sizeof(inputs885));
   
   inputs885[0].type = INPUT_KEYBOARD;   
   inputs885[0].ki.wVk = 89;
   
   inputs885[1].type = INPUT_KEYBOARD;   
   inputs885[1].ki.wVk = 89;   
   inputs885[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs885, sizeof(INPUT));
   
   INPUT inputs886[2] = {};   
   ZeroMemory(inputs886, sizeof(inputs886));
   
   inputs886[0].type = INPUT_KEYBOARD;   
   inputs886[0].ki.wVk = 69;
   
   inputs886[1].type = INPUT_KEYBOARD;   
   inputs886[1].ki.wVk = 69;   
   inputs886[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs886, sizeof(INPUT));
   
   INPUT inputs887[2] = {};   
   ZeroMemory(inputs887, sizeof(inputs887));
   
   inputs887[0].type = INPUT_KEYBOARD;   
   inputs887[0].ki.wVk = 82;
   
   inputs887[1].type = INPUT_KEYBOARD;   
   inputs887[1].ki.wVk = 82;   
   inputs887[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs887, sizeof(INPUT));
   
   INPUT inputs888[2] = {};   
   ZeroMemory(inputs888, sizeof(inputs888));
   
   inputs888[0].type = INPUT_KEYBOARD;   
   inputs888[0].ki.wVk = 190;
   
   inputs888[1].type = INPUT_KEYBOARD;   
   inputs888[1].ki.wVk = 190;   
   inputs888[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs888, sizeof(INPUT));
   
   INPUT inputs889[2] = {};   
   ZeroMemory(inputs889, sizeof(inputs889));
   
   inputs889[0].type = INPUT_KEYBOARD;   
   inputs889[0].ki.wVk = 79;
   
   inputs889[1].type = INPUT_KEYBOARD;   
   inputs889[1].ki.wVk = 79;   
   inputs889[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs889, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs890[2] = {};   
   ZeroMemory(inputs890, sizeof(inputs890));
   
   inputs890[0].type = INPUT_KEYBOARD;   
   inputs890[0].ki.wVk = 67;
   
   inputs890[1].type = INPUT_KEYBOARD;   
   inputs890[1].ki.wVk = 67;   
   inputs890[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs890, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs891[2] = {};   
   ZeroMemory(inputs891, sizeof(inputs891));
   
   inputs891[0].type = INPUT_KEYBOARD;   
   inputs891[0].ki.wVk = 88;
   
   inputs891[1].type = INPUT_KEYBOARD;   
   inputs891[1].ki.wVk = 88;   
   inputs891[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs891, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs892[2] = {};   
   ZeroMemory(inputs892, sizeof(inputs892));
   
   inputs892[0].type = INPUT_KEYBOARD;   
   inputs892[0].ki.wVk = 50;
   
   inputs892[1].type = INPUT_KEYBOARD;   
   inputs892[1].ki.wVk = 50;   
   inputs892[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs892, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs893[2] = {};   
   ZeroMemory(inputs893, sizeof(inputs893));
   
   inputs893[0].type = INPUT_KEYBOARD;   
   inputs893[0].ki.wVk = 57;
   
   inputs893[1].type = INPUT_KEYBOARD;   
   inputs893[1].ki.wVk = 57;   
   inputs893[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs893, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs894[2] = {};   
   ZeroMemory(inputs894, sizeof(inputs894));
   
   inputs894[0].type = INPUT_KEYBOARD;   
   inputs894[0].ki.wVk = 32;
   
   inputs894[1].type = INPUT_KEYBOARD;   
   inputs894[1].ki.wVk = 32;   
   inputs894[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs894, sizeof(INPUT));
   
   INPUT inputs895[2] = {};   
   ZeroMemory(inputs895, sizeof(inputs895));
   
   inputs895[0].type = INPUT_KEYBOARD;   
   inputs895[0].ki.wVk = 190;
   
   inputs895[1].type = INPUT_KEYBOARD;   
   inputs895[1].ki.wVk = 190;   
   inputs895[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs895, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs896[2] = {};   
   ZeroMemory(inputs896, sizeof(inputs896));
   
   inputs896[0].type = INPUT_KEYBOARD;   
   inputs896[0].ki.wVk = 190;
   
   inputs896[1].type = INPUT_KEYBOARD;   
   inputs896[1].ki.wVk = 190;   
   inputs896[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs896, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs897[2] = {};   
   ZeroMemory(inputs897, sizeof(inputs897));
   
   inputs897[0].type = INPUT_KEYBOARD;   
   inputs897[0].ki.wVk = 32;
   
   inputs897[1].type = INPUT_KEYBOARD;   
   inputs897[1].ki.wVk = 32;   
   inputs897[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs897, sizeof(INPUT));
   
   INPUT inputs898[2] = {};   
   ZeroMemory(inputs898, sizeof(inputs898));
   
   inputs898[0].type = INPUT_KEYBOARD;   
   inputs898[0].ki.wVk = 82;
   
   inputs898[1].type = INPUT_KEYBOARD;   
   inputs898[1].ki.wVk = 82;   
   inputs898[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs898, sizeof(INPUT));
   
   INPUT inputs899[2] = {};   
   ZeroMemory(inputs899, sizeof(inputs899));
   
   inputs899[0].type = INPUT_KEYBOARD;   
   inputs899[0].ki.wVk = 73;
   
   inputs899[1].type = INPUT_KEYBOARD;   
   inputs899[1].ki.wVk = 73;   
   inputs899[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs899, sizeof(INPUT));
   
   INPUT inputs900[2] = {};   
   ZeroMemory(inputs900, sizeof(inputs900));
   
   inputs900[0].type = INPUT_KEYBOARD;   
   inputs900[0].ki.wVk = 67;
   
   inputs900[1].type = INPUT_KEYBOARD;   
   inputs900[1].ki.wVk = 67;   
   inputs900[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs900, sizeof(INPUT));
   
   INPUT inputs901[2] = {};   
   ZeroMemory(inputs901, sizeof(inputs901));
   
   inputs901[0].type = INPUT_KEYBOARD;   
   inputs901[0].ki.wVk = 75;
   
   inputs901[1].type = INPUT_KEYBOARD;   
   inputs901[1].ki.wVk = 75;   
   inputs901[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs901, sizeof(INPUT));
   
   INPUT inputs902[2] = {};   
   ZeroMemory(inputs902, sizeof(inputs902));
   
   inputs902[0].type = INPUT_KEYBOARD;   
   inputs902[0].ki.wVk = 82;
   
   inputs902[1].type = INPUT_KEYBOARD;   
   inputs902[1].ki.wVk = 82;   
   inputs902[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs902, sizeof(INPUT));
   
   INPUT inputs903[2] = {};   
   ZeroMemory(inputs903, sizeof(inputs903));
   
   inputs903[0].type = INPUT_KEYBOARD;   
   inputs903[0].ki.wVk = 79;
   
   inputs903[1].type = INPUT_KEYBOARD;   
   inputs903[1].ki.wVk = 79;   
   inputs903[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs903, sizeof(INPUT));
   
   INPUT inputs904[2] = {};   
   ZeroMemory(inputs904, sizeof(inputs904));
   
   inputs904[0].type = INPUT_KEYBOARD;   
   inputs904[0].ki.wVk = 76;
   
   inputs904[1].type = INPUT_KEYBOARD;   
   inputs904[1].ki.wVk = 76;   
   inputs904[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs904, sizeof(INPUT));
   
   INPUT inputs905[2] = {};   
   ZeroMemory(inputs905, sizeof(inputs905));
   
   inputs905[0].type = INPUT_KEYBOARD;   
   inputs905[0].ki.wVk = 76;
   
   inputs905[1].type = INPUT_KEYBOARD;   
   inputs905[1].ki.wVk = 76;   
   inputs905[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs905, sizeof(INPUT));
   
   INPUT inputs906[2] = {};   
   ZeroMemory(inputs906, sizeof(inputs906));
   
   inputs906[0].type = INPUT_KEYBOARD;   
   inputs906[0].ki.wVk = 190;
   
   inputs906[1].type = INPUT_KEYBOARD;   
   inputs906[1].ki.wVk = 190;   
   inputs906[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs906, sizeof(INPUT));
   
   INPUT inputs907[2] = {};   
   ZeroMemory(inputs907, sizeof(inputs907));
   
   inputs907[0].type = INPUT_KEYBOARD;   
   inputs907[0].ki.wVk = 86;
   
   inputs907[1].type = INPUT_KEYBOARD;   
   inputs907[1].ki.wVk = 86;   
   inputs907[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs907, sizeof(INPUT));
   
   INPUT inputs908[2] = {};   
   ZeroMemory(inputs908, sizeof(inputs908));
   
   inputs908[0].type = INPUT_KEYBOARD;   
   inputs908[0].ki.wVk = 66;
   
   inputs908[1].type = INPUT_KEYBOARD;   
   inputs908[1].ki.wVk = 66;   
   inputs908[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs908, sizeof(INPUT));
   
   INPUT inputs909[2] = {};   
   ZeroMemory(inputs909, sizeof(inputs909));
   
   inputs909[0].type = INPUT_KEYBOARD;   
   inputs909[0].ki.wVk = 83;
   
   inputs909[1].type = INPUT_KEYBOARD;   
   inputs909[1].ki.wVk = 83;   
   inputs909[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs909, sizeof(INPUT));
   
   INPUT inputs910[2] = {};   
   ZeroMemory(inputs910, sizeof(inputs910));
   
   inputs910[0].type = INPUT_KEYBOARD;   
   inputs910[0].ki.wVk = 32;
   
   inputs910[1].type = INPUT_KEYBOARD;   
   inputs910[1].ki.wVk = 32;   
   inputs910[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs910, sizeof(INPUT));
   
   INPUT inputs911[2] = {};   
   ZeroMemory(inputs911, sizeof(inputs911));
   
   inputs911[0].type = INPUT_KEYBOARD;   
   inputs911[0].ki.wVk = 54;
   
   inputs911[1].type = INPUT_KEYBOARD;   
   inputs911[1].ki.wVk = 54;   
   inputs911[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs911, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs912[2] = {};   
   ZeroMemory(inputs912, sizeof(inputs912));
   
   inputs912[0].type = INPUT_KEYBOARD;   
   inputs912[0].ki.wVk = 32;
   
   inputs912[1].type = INPUT_KEYBOARD;   
   inputs912[1].ki.wVk = 32;   
   inputs912[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs912, sizeof(INPUT));
   
   INPUT inputs913[2] = {};   
   ZeroMemory(inputs913, sizeof(inputs913));
   
   inputs913[0].type = INPUT_KEYBOARD;   
   inputs913[0].ki.wVk = 69;
   
   inputs913[1].type = INPUT_KEYBOARD;   
   inputs913[1].ki.wVk = 69;   
   inputs913[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs913, sizeof(INPUT));
   
   INPUT inputs914[2] = {};   
   ZeroMemory(inputs914, sizeof(inputs914));
   
   inputs914[0].type = INPUT_KEYBOARD;   
   inputs914[0].ki.wVk = 67;
   
   inputs914[1].type = INPUT_KEYBOARD;   
   inputs914[1].ki.wVk = 67;   
   inputs914[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs914, sizeof(INPUT));
   
   INPUT inputs915[2] = {};   
   ZeroMemory(inputs915, sizeof(inputs915));
   
   inputs915[0].type = INPUT_KEYBOARD;   
   inputs915[0].ki.wVk = 72;
   
   inputs915[1].type = INPUT_KEYBOARD;   
   inputs915[1].ki.wVk = 72;   
   inputs915[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs915, sizeof(INPUT));
   
   INPUT inputs916[2] = {};   
   ZeroMemory(inputs916, sizeof(inputs916));
   
   inputs916[0].type = INPUT_KEYBOARD;   
   inputs916[0].ki.wVk = 79;
   
   inputs916[1].type = INPUT_KEYBOARD;   
   inputs916[1].ki.wVk = 79;   
   inputs916[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs916, sizeof(INPUT));
   
   INPUT inputs917[2] = {};   
   ZeroMemory(inputs917, sizeof(inputs917));
   
   inputs917[0].type = INPUT_KEYBOARD;   
   inputs917[0].ki.wVk = 32;
   
   inputs917[1].type = INPUT_KEYBOARD;   
   inputs917[1].ki.wVk = 32;   
   inputs917[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs917, sizeof(INPUT));
   
   INPUT inputs918[2] = {};   
   ZeroMemory(inputs918, sizeof(inputs918));
   
   inputs918[0].type = INPUT_KEYBOARD;   
   inputs918[0].ki.wVk = 83;
   
   inputs918[1].type = INPUT_KEYBOARD;   
   inputs918[1].ki.wVk = 83;   
   inputs918[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs918, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs919[2] = {};   
   ZeroMemory(inputs919, sizeof(inputs919));
   
   inputs919[0].type = INPUT_KEYBOARD;   
   inputs919[0].ki.wVk = 69;
   
   inputs919[1].type = INPUT_KEYBOARD;   
   inputs919[1].ki.wVk = 69;   
   inputs919[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs919, sizeof(INPUT));
   
   INPUT inputs920[2] = {};   
   ZeroMemory(inputs920, sizeof(inputs920));
   
   inputs920[0].type = INPUT_KEYBOARD;   
   inputs920[0].ki.wVk = 84;
   
   inputs920[1].type = INPUT_KEYBOARD;   
   inputs920[1].ki.wVk = 84;   
   inputs920[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs920, sizeof(INPUT));
   
   INPUT inputs921[2] = {};   
   ZeroMemory(inputs921, sizeof(inputs921));
   
   inputs921[0].type = INPUT_KEYBOARD;   
   inputs921[0].ki.wVk = 32;
   
   inputs921[1].type = INPUT_KEYBOARD;   
   inputs921[1].ki.wVk = 32;   
   inputs921[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs921, sizeof(INPUT));
   
   INPUT inputs922[2] = {};   
   ZeroMemory(inputs922, sizeof(inputs922));
   
   inputs922[0].type = INPUT_KEYBOARD;   
   inputs922[0].ki.wVk = 79;
   
   inputs922[1].type = INPUT_KEYBOARD;   
   inputs922[1].ki.wVk = 79;   
   inputs922[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs922, sizeof(INPUT));
   
   INPUT inputs923[2] = {};   
   ZeroMemory(inputs923, sizeof(inputs923));
   
   inputs923[0].type = INPUT_KEYBOARD;   
   inputs923[0].ki.wVk = 83;
   
   inputs923[1].type = INPUT_KEYBOARD;   
   inputs923[1].ki.wVk = 83;   
   inputs923[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs923, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs924[2] = {};   
   ZeroMemory(inputs924, sizeof(inputs924));
   
   inputs924[0].type = INPUT_KEYBOARD;   
   inputs924[0].ki.wVk = 72;
   
   inputs924[1].type = INPUT_KEYBOARD;   
   inputs924[1].ki.wVk = 72;   
   inputs924[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs924, sizeof(INPUT));
   
   INPUT inputs925[2] = {};   
   ZeroMemory(inputs925, sizeof(inputs925));
   
   inputs925[0].type = INPUT_KEYBOARD;   
   inputs925[0].ki.wVk = 69;
   
   inputs925[1].type = INPUT_KEYBOARD;   
   inputs925[1].ki.wVk = 69;   
   inputs925[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs925, sizeof(INPUT));
   
   INPUT inputs926[2] = {};   
   ZeroMemory(inputs926, sizeof(inputs926));
   
   inputs926[0].type = INPUT_KEYBOARD;   
   inputs926[0].ki.wVk = 76;
   
   inputs926[1].type = INPUT_KEYBOARD;   
   inputs926[1].ki.wVk = 76;   
   inputs926[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs926, sizeof(INPUT));
   
   INPUT inputs927[2] = {};   
   ZeroMemory(inputs927, sizeof(inputs927));
   
   inputs927[0].type = INPUT_KEYBOARD;   
   inputs927[0].ki.wVk = 76;
   
   inputs927[1].type = INPUT_KEYBOARD;   
   inputs927[1].ki.wVk = 76;   
   inputs927[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs927, sizeof(INPUT));
   
   INPUT inputs928[2] = {};   
   ZeroMemory(inputs928, sizeof(inputs928));
   
   inputs928[0].type = INPUT_KEYBOARD;   
   inputs928[0].ki.wVk = 32;
   
   inputs928[1].type = INPUT_KEYBOARD;   
   inputs928[1].ki.wVk = 32;   
   inputs928[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs928, sizeof(INPUT));
   
   INPUT inputs929[2] = {};   
   ZeroMemory(inputs929, sizeof(inputs929));
   
   inputs929[0].type = INPUT_KEYBOARD;   
   inputs929[0].ki.wVk = 48;
   
   inputs929[1].type = INPUT_KEYBOARD;   
   inputs929[1].ki.wVk = 48;   
   inputs929[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs929, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs930[2] = {};   
   ZeroMemory(inputs930, sizeof(inputs930));
   
   inputs930[0].type = INPUT_KEYBOARD;   
   inputs930[0].ki.wVk = 32;
   
   inputs930[1].type = INPUT_KEYBOARD;   
   inputs930[1].ki.wVk = 32;   
   inputs930[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs930, sizeof(INPUT));
   
   INPUT inputs931[2] = {};   
   ZeroMemory(inputs931, sizeof(inputs931));
   
   inputs931[0].type = INPUT_KEYBOARD;   
   inputs931[0].ki.wVk = 67;
   
   inputs931[1].type = INPUT_KEYBOARD;   
   inputs931[1].ki.wVk = 67;   
   inputs931[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs931, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs932[2] = {};   
   ZeroMemory(inputs932, sizeof(inputs932));
   
   inputs932[0].type = INPUT_KEYBOARD;   
   inputs932[0].ki.wVk = 82;
   
   inputs932[1].type = INPUT_KEYBOARD;   
   inputs932[1].ki.wVk = 82;   
   inputs932[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs932, sizeof(INPUT));
   
   INPUT inputs933[2] = {};   
   ZeroMemory(inputs933, sizeof(inputs933));
   
   inputs933[0].type = INPUT_KEYBOARD;   
   inputs933[0].ki.wVk = 69;
   
   inputs933[1].type = INPUT_KEYBOARD;   
   inputs933[1].ki.wVk = 69;   
   inputs933[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs933, sizeof(INPUT));
   
   INPUT inputs934[2] = {};   
   ZeroMemory(inputs934, sizeof(inputs934));
   
   inputs934[0].type = INPUT_KEYBOARD;   
   inputs934[0].ki.wVk = 65;
   
   inputs934[1].type = INPUT_KEYBOARD;   
   inputs934[1].ki.wVk = 65;   
   inputs934[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs934, sizeof(INPUT));
   
   INPUT inputs935[2] = {};   
   ZeroMemory(inputs935, sizeof(inputs935));
   
   inputs935[0].type = INPUT_KEYBOARD;   
   inputs935[0].ki.wVk = 84;
   
   inputs935[1].type = INPUT_KEYBOARD;   
   inputs935[1].ki.wVk = 84;   
   inputs935[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs935, sizeof(INPUT));
   
   INPUT inputs936[2] = {};   
   ZeroMemory(inputs936, sizeof(inputs936));
   
   inputs936[0].type = INPUT_KEYBOARD;   
   inputs936[0].ki.wVk = 69;
   
   inputs936[1].type = INPUT_KEYBOARD;   
   inputs936[1].ki.wVk = 69;   
   inputs936[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs936, sizeof(INPUT));
   
   INPUT inputs937[2] = {};   
   ZeroMemory(inputs937, sizeof(inputs937));
   
   inputs937[0].type = INPUT_KEYBOARD;   
   inputs937[0].ki.wVk = 79;
   
   inputs937[1].type = INPUT_KEYBOARD;   
   inputs937[1].ki.wVk = 79;   
   inputs937[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs937, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs938[2] = {};   
   ZeroMemory(inputs938, sizeof(inputs938));
   
   inputs938[0].type = INPUT_KEYBOARD;   
   inputs938[0].ki.wVk = 66;
   
   inputs938[1].type = INPUT_KEYBOARD;   
   inputs938[1].ki.wVk = 66;   
   inputs938[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs938, sizeof(INPUT));
   
   INPUT inputs939[2] = {};   
   ZeroMemory(inputs939, sizeof(inputs939));
   
   inputs939[0].type = INPUT_KEYBOARD;   
   inputs939[0].ki.wVk = 74;
   
   inputs939[1].type = INPUT_KEYBOARD;   
   inputs939[1].ki.wVk = 74;   
   inputs939[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs939, sizeof(INPUT));
   
   INPUT inputs940[2] = {};   
   ZeroMemory(inputs940, sizeof(inputs940));
   
   inputs940[0].type = INPUT_KEYBOARD;   
   inputs940[0].ki.wVk = 69;
   
   inputs940[1].type = INPUT_KEYBOARD;   
   inputs940[1].ki.wVk = 69;   
   inputs940[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs940, sizeof(INPUT));
   
   INPUT inputs941[2] = {};   
   ZeroMemory(inputs941, sizeof(inputs941));
   
   inputs941[0].type = INPUT_KEYBOARD;   
   inputs941[0].ki.wVk = 67;
   
   inputs941[1].type = INPUT_KEYBOARD;   
   inputs941[1].ki.wVk = 67;   
   inputs941[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs941, sizeof(INPUT));
   
   INPUT inputs942[2] = {};   
   ZeroMemory(inputs942, sizeof(inputs942));
   
   inputs942[0].type = INPUT_KEYBOARD;   
   inputs942[0].ki.wVk = 84;
   
   inputs942[1].type = INPUT_KEYBOARD;   
   inputs942[1].ki.wVk = 84;   
   inputs942[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs942, sizeof(INPUT));
   
   INPUT inputs943[2] = {};   
   ZeroMemory(inputs943, sizeof(inputs943));
   
   inputs943[0].type = INPUT_KEYBOARD;   
   inputs943[0].ki.wVk = 56;
   
   inputs943[1].type = INPUT_KEYBOARD;   
   inputs943[1].ki.wVk = 56;   
   inputs943[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs943, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs944[2] = {};   
   ZeroMemory(inputs944, sizeof(inputs944));
   
   inputs944[0].type = INPUT_KEYBOARD;   
   inputs944[0].ki.wVk = 32;
   
   inputs944[1].type = INPUT_KEYBOARD;   
   inputs944[1].ki.wVk = 32;   
   inputs944[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs944, sizeof(INPUT));
   
   INPUT inputs945[2] = {};   
   ZeroMemory(inputs945, sizeof(inputs945));
   
   inputs945[0].type = INPUT_KEYBOARD;   
   inputs945[0].ki.wVk = 50;
   
   inputs945[1].type = INPUT_KEYBOARD;   
   inputs945[1].ki.wVk = 50;   
   inputs945[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs945, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs946[2] = {};   
   ZeroMemory(inputs946, sizeof(inputs946));
   
   inputs946[0].type = INPUT_KEYBOARD;   
   inputs946[0].ki.wVk = 87;
   
   inputs946[1].type = INPUT_KEYBOARD;   
   inputs946[1].ki.wVk = 87;   
   inputs946[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs946, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs947[2] = {};   
   ZeroMemory(inputs947, sizeof(inputs947));
   
   inputs947[0].type = INPUT_KEYBOARD;   
   inputs947[0].ki.wVk = 83;
   
   inputs947[1].type = INPUT_KEYBOARD;   
   inputs947[1].ki.wVk = 83;   
   inputs947[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs947, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs948[2] = {};   
   ZeroMemory(inputs948, sizeof(inputs948));
   
   inputs948[0].type = INPUT_KEYBOARD;   
   inputs948[0].ki.wVk = 67;
   
   inputs948[1].type = INPUT_KEYBOARD;   
   inputs948[1].ki.wVk = 67;   
   inputs948[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs948, sizeof(INPUT));
   
   INPUT inputs949[2] = {};   
   ZeroMemory(inputs949, sizeof(inputs949));
   
   inputs949[0].type = INPUT_KEYBOARD;   
   inputs949[0].ki.wVk = 82;
   
   inputs949[1].type = INPUT_KEYBOARD;   
   inputs949[1].ki.wVk = 82;   
   inputs949[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs949, sizeof(INPUT));
   
   INPUT inputs950[2] = {};   
   ZeroMemory(inputs950, sizeof(inputs950));
   
   inputs950[0].type = INPUT_KEYBOARD;   
   inputs950[0].ki.wVk = 73;
   
   inputs950[1].type = INPUT_KEYBOARD;   
   inputs950[1].ki.wVk = 73;   
   inputs950[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs950, sizeof(INPUT));
   
   INPUT inputs951[2] = {};   
   ZeroMemory(inputs951, sizeof(inputs951));
   
   inputs951[0].type = INPUT_KEYBOARD;   
   inputs951[0].ki.wVk = 80;
   
   inputs951[1].type = INPUT_KEYBOARD;   
   inputs951[1].ki.wVk = 80;   
   inputs951[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs951, sizeof(INPUT));
   
   INPUT inputs952[2] = {};   
   ZeroMemory(inputs952, sizeof(inputs952));
   
   inputs952[0].type = INPUT_KEYBOARD;   
   inputs952[0].ki.wVk = 84;
   
   inputs952[1].type = INPUT_KEYBOARD;   
   inputs952[1].ki.wVk = 84;   
   inputs952[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs952, sizeof(INPUT));
   
   INPUT inputs953[2] = {};   
   ZeroMemory(inputs953, sizeof(inputs953));
   
   inputs953[0].type = INPUT_KEYBOARD;   
   inputs953[0].ki.wVk = 190;
   
   inputs953[1].type = INPUT_KEYBOARD;   
   inputs953[1].ki.wVk = 190;   
   inputs953[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs953, sizeof(INPUT));
   
   INPUT inputs954[2] = {};   
   ZeroMemory(inputs954, sizeof(inputs954));
   
   inputs954[0].type = INPUT_KEYBOARD;   
   inputs954[0].ki.wVk = 83;
   
   inputs954[1].type = INPUT_KEYBOARD;   
   inputs954[1].ki.wVk = 83;   
   inputs954[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs954, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs955[2] = {};   
   ZeroMemory(inputs955, sizeof(inputs955));
   
   inputs955[0].type = INPUT_KEYBOARD;   
   inputs955[0].ki.wVk = 72;
   
   inputs955[1].type = INPUT_KEYBOARD;   
   inputs955[1].ki.wVk = 72;   
   inputs955[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs955, sizeof(INPUT));
   
   INPUT inputs956[2] = {};   
   ZeroMemory(inputs956, sizeof(inputs956));
   
   inputs956[0].type = INPUT_KEYBOARD;   
   inputs956[0].ki.wVk = 69;
   
   inputs956[1].type = INPUT_KEYBOARD;   
   inputs956[1].ki.wVk = 69;   
   inputs956[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs956, sizeof(INPUT));
   
   INPUT inputs957[2] = {};   
   ZeroMemory(inputs957, sizeof(inputs957));
   
   inputs957[0].type = INPUT_KEYBOARD;   
   inputs957[0].ki.wVk = 76;
   
   inputs957[1].type = INPUT_KEYBOARD;   
   inputs957[1].ki.wVk = 76;   
   inputs957[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs957, sizeof(INPUT));
   
   INPUT inputs958[2] = {};   
   ZeroMemory(inputs958, sizeof(inputs958));
   
   inputs958[0].type = INPUT_KEYBOARD;   
   inputs958[0].ki.wVk = 76;
   
   inputs958[1].type = INPUT_KEYBOARD;   
   inputs958[1].ki.wVk = 76;   
   inputs958[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs958, sizeof(INPUT));
   
   INPUT inputs959[2] = {};   
   ZeroMemory(inputs959, sizeof(inputs959));
   
   inputs959[0].type = INPUT_KEYBOARD;   
   inputs959[0].ki.wVk = 50;
   
   inputs959[1].type = INPUT_KEYBOARD;   
   inputs959[1].ki.wVk = 50;   
   inputs959[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs959, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs960[2] = {};   
   ZeroMemory(inputs960, sizeof(inputs960));
   
   inputs960[0].type = INPUT_KEYBOARD;   
   inputs960[0].ki.wVk = 32;
   
   inputs960[1].type = INPUT_KEYBOARD;   
   inputs960[1].ki.wVk = 32;   
   inputs960[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs960, sizeof(INPUT));
   
   INPUT inputs961[2] = {};   
   ZeroMemory(inputs961, sizeof(inputs961));
   
   inputs961[0].type = INPUT_KEYBOARD;   
   inputs961[0].ki.wVk = 57;
   
   inputs961[1].type = INPUT_KEYBOARD;   
   inputs961[1].ki.wVk = 57;   
   inputs961[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs961, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs962[2] = {};   
   ZeroMemory(inputs962, sizeof(inputs962));
   
   inputs962[0].type = INPUT_KEYBOARD;   
   inputs962[0].ki.wVk = 32;
   
   inputs962[1].type = INPUT_KEYBOARD;   
   inputs962[1].ki.wVk = 32;   
   inputs962[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs962, sizeof(INPUT));
   
   INPUT inputs963[2] = {};   
   ZeroMemory(inputs963, sizeof(inputs963));
   
   inputs963[0].type = INPUT_KEYBOARD;   
   inputs963[0].ki.wVk = 190;
   
   inputs963[1].type = INPUT_KEYBOARD;   
   inputs963[1].ki.wVk = 190;   
   inputs963[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs963, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs964[2] = {};   
   ZeroMemory(inputs964, sizeof(inputs964));
   
   inputs964[0].type = INPUT_KEYBOARD;   
   inputs964[0].ki.wVk = 190;
   
   inputs964[1].type = INPUT_KEYBOARD;   
   inputs964[1].ki.wVk = 190;   
   inputs964[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs964, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs965[2] = {};   
   ZeroMemory(inputs965, sizeof(inputs965));
   
   inputs965[0].type = INPUT_KEYBOARD;   
   inputs965[0].ki.wVk = 32;
   
   inputs965[1].type = INPUT_KEYBOARD;   
   inputs965[1].ki.wVk = 32;   
   inputs965[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs965, sizeof(INPUT));
   
   INPUT inputs966[2] = {};   
   ZeroMemory(inputs966, sizeof(inputs966));
   
   inputs966[0].type = INPUT_KEYBOARD;   
   inputs966[0].ki.wVk = 82;
   
   inputs966[1].type = INPUT_KEYBOARD;   
   inputs966[1].ki.wVk = 82;   
   inputs966[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs966, sizeof(INPUT));
   
   INPUT inputs967[2] = {};   
   ZeroMemory(inputs967, sizeof(inputs967));
   
   inputs967[0].type = INPUT_KEYBOARD;   
   inputs967[0].ki.wVk = 73;
   
   inputs967[1].type = INPUT_KEYBOARD;   
   inputs967[1].ki.wVk = 73;   
   inputs967[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs967, sizeof(INPUT));
   
   INPUT inputs968[2] = {};   
   ZeroMemory(inputs968, sizeof(inputs968));
   
   inputs968[0].type = INPUT_KEYBOARD;   
   inputs968[0].ki.wVk = 67;
   
   inputs968[1].type = INPUT_KEYBOARD;   
   inputs968[1].ki.wVk = 67;   
   inputs968[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs968, sizeof(INPUT));
   
   INPUT inputs969[2] = {};   
   ZeroMemory(inputs969, sizeof(inputs969));
   
   inputs969[0].type = INPUT_KEYBOARD;   
   inputs969[0].ki.wVk = 75;
   
   inputs969[1].type = INPUT_KEYBOARD;   
   inputs969[1].ki.wVk = 75;   
   inputs969[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs969, sizeof(INPUT));
   
   INPUT inputs970[2] = {};   
   ZeroMemory(inputs970, sizeof(inputs970));
   
   inputs970[0].type = INPUT_KEYBOARD;   
   inputs970[0].ki.wVk = 82;
   
   inputs970[1].type = INPUT_KEYBOARD;   
   inputs970[1].ki.wVk = 82;   
   inputs970[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs970, sizeof(INPUT));
   
   INPUT inputs971[2] = {};   
   ZeroMemory(inputs971, sizeof(inputs971));
   
   inputs971[0].type = INPUT_KEYBOARD;   
   inputs971[0].ki.wVk = 79;
   
   inputs971[1].type = INPUT_KEYBOARD;   
   inputs971[1].ki.wVk = 79;   
   inputs971[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs971, sizeof(INPUT));
   
   INPUT inputs972[2] = {};   
   ZeroMemory(inputs972, sizeof(inputs972));
   
   inputs972[0].type = INPUT_KEYBOARD;   
   inputs972[0].ki.wVk = 76;
   
   inputs972[1].type = INPUT_KEYBOARD;   
   inputs972[1].ki.wVk = 76;   
   inputs972[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs972, sizeof(INPUT));
   
   INPUT inputs973[2] = {};   
   ZeroMemory(inputs973, sizeof(inputs973));
   
   inputs973[0].type = INPUT_KEYBOARD;   
   inputs973[0].ki.wVk = 76;
   
   inputs973[1].type = INPUT_KEYBOARD;   
   inputs973[1].ki.wVk = 76;   
   inputs973[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs973, sizeof(INPUT));
   
   INPUT inputs974[2] = {};   
   ZeroMemory(inputs974, sizeof(inputs974));
   
   inputs974[0].type = INPUT_KEYBOARD;   
   inputs974[0].ki.wVk = 190;
   
   inputs974[1].type = INPUT_KEYBOARD;   
   inputs974[1].ki.wVk = 190;   
   inputs974[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs974, sizeof(INPUT));
   
   INPUT inputs975[2] = {};   
   ZeroMemory(inputs975, sizeof(inputs975));
   
   inputs975[0].type = INPUT_KEYBOARD;   
   inputs975[0].ki.wVk = 86;
   
   inputs975[1].type = INPUT_KEYBOARD;   
   inputs975[1].ki.wVk = 86;   
   inputs975[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs975, sizeof(INPUT));
   
   INPUT inputs976[2] = {};   
   ZeroMemory(inputs976, sizeof(inputs976));
   
   inputs976[0].type = INPUT_KEYBOARD;   
   inputs976[0].ki.wVk = 66;
   
   inputs976[1].type = INPUT_KEYBOARD;   
   inputs976[1].ki.wVk = 66;   
   inputs976[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs976, sizeof(INPUT));
   
   INPUT inputs977[2] = {};   
   ZeroMemory(inputs977, sizeof(inputs977));
   
   inputs977[0].type = INPUT_KEYBOARD;   
   inputs977[0].ki.wVk = 83;
   
   inputs977[1].type = INPUT_KEYBOARD;   
   inputs977[1].ki.wVk = 83;   
   inputs977[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs977, sizeof(INPUT));
   
   INPUT inputs978[2] = {};   
   ZeroMemory(inputs978, sizeof(inputs978));
   
   inputs978[0].type = INPUT_KEYBOARD;   
   inputs978[0].ki.wVk = 32;
   
   inputs978[1].type = INPUT_KEYBOARD;   
   inputs978[1].ki.wVk = 32;   
   inputs978[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs978, sizeof(INPUT));
   
   INPUT inputs979[2] = {};   
   ZeroMemory(inputs979, sizeof(inputs979));
   
   inputs979[0].type = INPUT_KEYBOARD;   
   inputs979[0].ki.wVk = 54;
   
   inputs979[1].type = INPUT_KEYBOARD;   
   inputs979[1].ki.wVk = 54;   
   inputs979[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs979, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs980[2] = {};   
   ZeroMemory(inputs980, sizeof(inputs980));
   
   inputs980[0].type = INPUT_KEYBOARD;   
   inputs980[0].ki.wVk = 32;
   
   inputs980[1].type = INPUT_KEYBOARD;   
   inputs980[1].ki.wVk = 32;   
   inputs980[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs980, sizeof(INPUT));
   
   INPUT inputs981[2] = {};   
   ZeroMemory(inputs981, sizeof(inputs981));
   
   inputs981[0].type = INPUT_KEYBOARD;   
   inputs981[0].ki.wVk = 69;
   
   inputs981[1].type = INPUT_KEYBOARD;   
   inputs981[1].ki.wVk = 69;   
   inputs981[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs981, sizeof(INPUT));
   
   INPUT inputs982[2] = {};   
   ZeroMemory(inputs982, sizeof(inputs982));
   
   inputs982[0].type = INPUT_KEYBOARD;   
   inputs982[0].ki.wVk = 67;
   
   inputs982[1].type = INPUT_KEYBOARD;   
   inputs982[1].ki.wVk = 67;   
   inputs982[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs982, sizeof(INPUT));
   
   INPUT inputs983[2] = {};   
   ZeroMemory(inputs983, sizeof(inputs983));
   
   inputs983[0].type = INPUT_KEYBOARD;   
   inputs983[0].ki.wVk = 72;
   
   inputs983[1].type = INPUT_KEYBOARD;   
   inputs983[1].ki.wVk = 72;   
   inputs983[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs983, sizeof(INPUT));
   
   INPUT inputs984[2] = {};   
   ZeroMemory(inputs984, sizeof(inputs984));
   
   inputs984[0].type = INPUT_KEYBOARD;   
   inputs984[0].ki.wVk = 79;
   
   inputs984[1].type = INPUT_KEYBOARD;   
   inputs984[1].ki.wVk = 79;   
   inputs984[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs984, sizeof(INPUT));
   
   INPUT inputs985[2] = {};   
   ZeroMemory(inputs985, sizeof(inputs985));
   
   inputs985[0].type = INPUT_KEYBOARD;   
   inputs985[0].ki.wVk = 32;
   
   inputs985[1].type = INPUT_KEYBOARD;   
   inputs985[1].ki.wVk = 32;   
   inputs985[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs985, sizeof(INPUT));
   
   INPUT inputs986[2] = {};   
   ZeroMemory(inputs986, sizeof(inputs986));
   
   inputs986[0].type = INPUT_KEYBOARD;   
   inputs986[0].ki.wVk = 85;
   
   inputs986[1].type = INPUT_KEYBOARD;   
   inputs986[1].ki.wVk = 85;   
   inputs986[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs986, sizeof(INPUT));
   
   INPUT inputs987[2] = {};   
   ZeroMemory(inputs987, sizeof(inputs987));
   
   inputs987[0].type = INPUT_KEYBOARD;   
   inputs987[0].ki.wVk = 83;
   
   inputs987[1].type = INPUT_KEYBOARD;   
   inputs987[1].ki.wVk = 83;   
   inputs987[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs987, sizeof(INPUT));
   
   INPUT inputs988[2] = {};   
   ZeroMemory(inputs988, sizeof(inputs988));
   
   inputs988[0].type = INPUT_KEYBOARD;   
   inputs988[0].ki.wVk = 69;
   
   inputs988[1].type = INPUT_KEYBOARD;   
   inputs988[1].ki.wVk = 69;   
   inputs988[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs988, sizeof(INPUT));
   
   INPUT inputs989[2] = {};   
   ZeroMemory(inputs989, sizeof(inputs989));
   
   inputs989[0].type = INPUT_KEYBOARD;   
   inputs989[0].ki.wVk = 82;
   
   inputs989[1].type = INPUT_KEYBOARD;   
   inputs989[1].ki.wVk = 82;   
   inputs989[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs989, sizeof(INPUT));
   
   INPUT inputs990[2] = {};   
   ZeroMemory(inputs990, sizeof(inputs990));
   
   inputs990[0].type = INPUT_KEYBOARD;   
   inputs990[0].ki.wVk = 80;
   
   inputs990[1].type = INPUT_KEYBOARD;   
   inputs990[1].ki.wVk = 80;   
   inputs990[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs990, sizeof(INPUT));
   
   INPUT inputs991[2] = {};   
   ZeroMemory(inputs991, sizeof(inputs991));
   
   inputs991[0].type = INPUT_KEYBOARD;   
   inputs991[0].ki.wVk = 82;
   
   inputs991[1].type = INPUT_KEYBOARD;   
   inputs991[1].ki.wVk = 82;   
   inputs991[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs991, sizeof(INPUT));
   
   INPUT inputs992[2] = {};   
   ZeroMemory(inputs992, sizeof(inputs992));
   
   inputs992[0].type = INPUT_KEYBOARD;   
   inputs992[0].ki.wVk = 79;
   
   inputs992[1].type = INPUT_KEYBOARD;   
   inputs992[1].ki.wVk = 79;   
   inputs992[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs992, sizeof(INPUT));
   
   INPUT inputs993[2] = {};   
   ZeroMemory(inputs993, sizeof(inputs993));
   
   inputs993[0].type = INPUT_KEYBOARD;   
   inputs993[0].ki.wVk = 70;
   
   inputs993[1].type = INPUT_KEYBOARD;   
   inputs993[1].ki.wVk = 70;   
   inputs993[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs993, sizeof(INPUT));
   
   INPUT inputs994[2] = {};   
   ZeroMemory(inputs994, sizeof(inputs994));
   
   inputs994[0].type = INPUT_KEYBOARD;   
   inputs994[0].ki.wVk = 73;
   
   inputs994[1].type = INPUT_KEYBOARD;   
   inputs994[1].ki.wVk = 73;   
   inputs994[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs994, sizeof(INPUT));
   
   INPUT inputs995[2] = {};   
   ZeroMemory(inputs995, sizeof(inputs995));
   
   inputs995[0].type = INPUT_KEYBOARD;   
   inputs995[0].ki.wVk = 76;
   
   inputs995[1].type = INPUT_KEYBOARD;   
   inputs995[1].ki.wVk = 76;   
   inputs995[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs995, sizeof(INPUT));
   
   INPUT inputs996[2] = {};   
   ZeroMemory(inputs996, sizeof(inputs996));
   
   inputs996[0].type = INPUT_KEYBOARD;   
   inputs996[0].ki.wVk = 69;
   
   inputs996[1].type = INPUT_KEYBOARD;   
   inputs996[1].ki.wVk = 69;   
   inputs996[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs996, sizeof(INPUT));
   
   INPUT inputs997[2] = {};   
   ZeroMemory(inputs997, sizeof(inputs997));
   
   inputs997[0].type = INPUT_KEYBOARD;   
   inputs997[0].ki.wVk = 32;
   
   inputs997[1].type = INPUT_KEYBOARD;   
   inputs997[1].ki.wVk = 32;   
   inputs997[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs997, sizeof(INPUT));
   
   INPUT inputs998[2] = {};   
   ZeroMemory(inputs998, sizeof(inputs998));
   
   inputs998[0].type = INPUT_KEYBOARD;   
   inputs998[0].ki.wVk = 48;
   
   inputs998[1].type = INPUT_KEYBOARD;   
   inputs998[1].ki.wVk = 48;   
   inputs998[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs998, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs999[2] = {};   
   ZeroMemory(inputs999, sizeof(inputs999));
   
   inputs999[0].type = INPUT_KEYBOARD;   
   inputs999[0].ki.wVk = 32;
   
   inputs999[1].type = INPUT_KEYBOARD;   
   inputs999[1].ki.wVk = 32;   
   inputs999[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs999, sizeof(INPUT));
   
   INPUT inputs1000[2] = {};   
   ZeroMemory(inputs1000, sizeof(inputs1000));
   
   inputs1000[0].type = INPUT_KEYBOARD;   
   inputs1000[0].ki.wVk = 79;
   
   inputs1000[1].type = INPUT_KEYBOARD;   
   inputs1000[1].ki.wVk = 79;   
   inputs1000[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1000, sizeof(INPUT));
   
   INPUT inputs1001[2] = {};   
   ZeroMemory(inputs1001, sizeof(inputs1001));
   
   inputs1001[0].type = INPUT_KEYBOARD;   
   inputs1001[0].ki.wVk = 83;
   
   inputs1001[1].type = INPUT_KEYBOARD;   
   inputs1001[1].ki.wVk = 83;   
   inputs1001[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1001, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1002[2] = {};   
   ZeroMemory(inputs1002, sizeof(inputs1002));
   
   inputs1002[0].type = INPUT_KEYBOARD;   
   inputs1002[0].ki.wVk = 72;
   
   inputs1002[1].type = INPUT_KEYBOARD;   
   inputs1002[1].ki.wVk = 72;   
   inputs1002[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1002, sizeof(INPUT));
   
   INPUT inputs1003[2] = {};   
   ZeroMemory(inputs1003, sizeof(inputs1003));
   
   inputs1003[0].type = INPUT_KEYBOARD;   
   inputs1003[0].ki.wVk = 69;
   
   inputs1003[1].type = INPUT_KEYBOARD;   
   inputs1003[1].ki.wVk = 69;   
   inputs1003[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1003, sizeof(INPUT));
   
   INPUT inputs1004[2] = {};   
   ZeroMemory(inputs1004, sizeof(inputs1004));
   
   inputs1004[0].type = INPUT_KEYBOARD;   
   inputs1004[0].ki.wVk = 76;
   
   inputs1004[1].type = INPUT_KEYBOARD;   
   inputs1004[1].ki.wVk = 76;   
   inputs1004[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1004, sizeof(INPUT));
   
   INPUT inputs1005[2] = {};   
   ZeroMemory(inputs1005, sizeof(inputs1005));
   
   inputs1005[0].type = INPUT_KEYBOARD;   
   inputs1005[0].ki.wVk = 76;
   
   inputs1005[1].type = INPUT_KEYBOARD;   
   inputs1005[1].ki.wVk = 76;   
   inputs1005[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1005, sizeof(INPUT));
   
   INPUT inputs1006[2] = {};   
   ZeroMemory(inputs1006, sizeof(inputs1006));
   
   inputs1006[0].type = INPUT_KEYBOARD;   
   inputs1006[0].ki.wVk = 190;
   
   inputs1006[1].type = INPUT_KEYBOARD;   
   inputs1006[1].ki.wVk = 190;   
   inputs1006[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1006, sizeof(INPUT));
   
   INPUT inputs1007[2] = {};   
   ZeroMemory(inputs1007, sizeof(inputs1007));
   
   inputs1007[0].type = INPUT_KEYBOARD;   
   inputs1007[0].ki.wVk = 69;
   
   inputs1007[1].type = INPUT_KEYBOARD;   
   inputs1007[1].ki.wVk = 69;   
   inputs1007[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1007, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1008[2] = {};   
   ZeroMemory(inputs1008, sizeof(inputs1008));
   
   inputs1008[0].type = INPUT_KEYBOARD;   
   inputs1008[0].ki.wVk = 88;
   
   inputs1008[1].type = INPUT_KEYBOARD;   
   inputs1008[1].ki.wVk = 88;   
   inputs1008[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1008, sizeof(INPUT));
   
   INPUT inputs1009[2] = {};   
   ZeroMemory(inputs1009, sizeof(inputs1009));
   
   inputs1009[0].type = INPUT_KEYBOARD;   
   inputs1009[0].ki.wVk = 80;
   
   inputs1009[1].type = INPUT_KEYBOARD;   
   inputs1009[1].ki.wVk = 80;   
   inputs1009[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1009, sizeof(INPUT));
   
   INPUT inputs1010[2] = {};   
   ZeroMemory(inputs1010, sizeof(inputs1010));
   
   inputs1010[0].type = INPUT_KEYBOARD;   
   inputs1010[0].ki.wVk = 65;
   
   inputs1010[1].type = INPUT_KEYBOARD;   
   inputs1010[1].ki.wVk = 65;   
   inputs1010[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1010, sizeof(INPUT));
   
   INPUT inputs1011[2] = {};   
   ZeroMemory(inputs1011, sizeof(inputs1011));
   
   inputs1011[0].type = INPUT_KEYBOARD;   
   inputs1011[0].ki.wVk = 78;
   
   inputs1011[1].type = INPUT_KEYBOARD;   
   inputs1011[1].ki.wVk = 78;   
   inputs1011[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1011, sizeof(INPUT));
   
   INPUT inputs1012[2] = {};   
   ZeroMemory(inputs1012, sizeof(inputs1012));
   
   inputs1012[0].type = INPUT_KEYBOARD;   
   inputs1012[0].ki.wVk = 68;
   
   inputs1012[1].type = INPUT_KEYBOARD;   
   inputs1012[1].ki.wVk = 68;   
   inputs1012[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1012, sizeof(INPUT));
   
   INPUT inputs1013[2] = {};   
   ZeroMemory(inputs1013, sizeof(inputs1013));
   
   inputs1013[0].type = INPUT_KEYBOARD;   
   inputs1013[0].ki.wVk = 69;
   
   inputs1013[1].type = INPUT_KEYBOARD;   
   inputs1013[1].ki.wVk = 69;   
   inputs1013[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1013, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1014[2] = {};   
   ZeroMemory(inputs1014, sizeof(inputs1014));
   
   inputs1014[0].type = INPUT_KEYBOARD;   
   inputs1014[0].ki.wVk = 78;
   
   inputs1014[1].type = INPUT_KEYBOARD;   
   inputs1014[1].ki.wVk = 78;   
   inputs1014[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1014, sizeof(INPUT));
   
   INPUT inputs1015[2] = {};   
   ZeroMemory(inputs1015, sizeof(inputs1015));
   
   inputs1015[0].type = INPUT_KEYBOARD;   
   inputs1015[0].ki.wVk = 86;
   
   inputs1015[1].type = INPUT_KEYBOARD;   
   inputs1015[1].ki.wVk = 86;   
   inputs1015[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1015, sizeof(INPUT));
   
   INPUT inputs1016[2] = {};   
   ZeroMemory(inputs1016, sizeof(inputs1016));
   
   inputs1016[0].type = INPUT_KEYBOARD;   
   inputs1016[0].ki.wVk = 73;
   
   inputs1016[1].type = INPUT_KEYBOARD;   
   inputs1016[1].ki.wVk = 73;   
   inputs1016[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1016, sizeof(INPUT));
   
   INPUT inputs1017[2] = {};   
   ZeroMemory(inputs1017, sizeof(inputs1017));
   
   inputs1017[0].type = INPUT_KEYBOARD;   
   inputs1017[0].ki.wVk = 82;
   
   inputs1017[1].type = INPUT_KEYBOARD;   
   inputs1017[1].ki.wVk = 82;   
   inputs1017[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1017, sizeof(INPUT));
   
   INPUT inputs1018[2] = {};   
   ZeroMemory(inputs1018, sizeof(inputs1018));
   
   inputs1018[0].type = INPUT_KEYBOARD;   
   inputs1018[0].ki.wVk = 79;
   
   inputs1018[1].type = INPUT_KEYBOARD;   
   inputs1018[1].ki.wVk = 79;   
   inputs1018[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1018, sizeof(INPUT));
   
   INPUT inputs1019[2] = {};   
   ZeroMemory(inputs1019, sizeof(inputs1019));
   
   inputs1019[0].type = INPUT_KEYBOARD;   
   inputs1019[0].ki.wVk = 78;
   
   inputs1019[1].type = INPUT_KEYBOARD;   
   inputs1019[1].ki.wVk = 78;   
   inputs1019[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1019, sizeof(INPUT));
   
   INPUT inputs1020[2] = {};   
   ZeroMemory(inputs1020, sizeof(inputs1020));
   
   inputs1020[0].type = INPUT_KEYBOARD;   
   inputs1020[0].ki.wVk = 77;
   
   inputs1020[1].type = INPUT_KEYBOARD;   
   inputs1020[1].ki.wVk = 77;   
   inputs1020[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1020, sizeof(INPUT));
   
   INPUT inputs1021[2] = {};   
   ZeroMemory(inputs1021, sizeof(inputs1021));
   
   inputs1021[0].type = INPUT_KEYBOARD;   
   inputs1021[0].ki.wVk = 69;
   
   inputs1021[1].type = INPUT_KEYBOARD;   
   inputs1021[1].ki.wVk = 69;   
   inputs1021[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1021, sizeof(INPUT));
   
   INPUT inputs1022[2] = {};   
   ZeroMemory(inputs1022, sizeof(inputs1022));
   
   inputs1022[0].type = INPUT_KEYBOARD;   
   inputs1022[0].ki.wVk = 78;
   
   inputs1022[1].type = INPUT_KEYBOARD;   
   inputs1022[1].ki.wVk = 78;   
   inputs1022[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1022, sizeof(INPUT));
   
   INPUT inputs1023[2] = {};   
   ZeroMemory(inputs1023, sizeof(inputs1023));
   
   inputs1023[0].type = INPUT_KEYBOARD;   
   inputs1023[0].ki.wVk = 84;
   
   inputs1023[1].type = INPUT_KEYBOARD;   
   inputs1023[1].ki.wVk = 84;   
   inputs1023[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1023, sizeof(INPUT));
   
   INPUT inputs1024[2] = {};   
   ZeroMemory(inputs1024, sizeof(inputs1024));
   
   inputs1024[0].type = INPUT_KEYBOARD;   
   inputs1024[0].ki.wVk = 83;
   
   inputs1024[1].type = INPUT_KEYBOARD;   
   inputs1024[1].ki.wVk = 83;   
   inputs1024[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1024, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1025[2] = {};   
   ZeroMemory(inputs1025, sizeof(inputs1025));
   
   inputs1025[0].type = INPUT_KEYBOARD;   
   inputs1025[0].ki.wVk = 84;
   
   inputs1025[1].type = INPUT_KEYBOARD;   
   inputs1025[1].ki.wVk = 84;   
   inputs1025[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1025, sizeof(INPUT));
   
   INPUT inputs1026[2] = {};   
   ZeroMemory(inputs1026, sizeof(inputs1026));
   
   inputs1026[0].type = INPUT_KEYBOARD;   
   inputs1026[0].ki.wVk = 82;
   
   inputs1026[1].type = INPUT_KEYBOARD;   
   inputs1026[1].ki.wVk = 82;   
   inputs1026[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1026, sizeof(INPUT));
   
   INPUT inputs1027[2] = {};   
   ZeroMemory(inputs1027, sizeof(inputs1027));
   
   inputs1027[0].type = INPUT_KEYBOARD;   
   inputs1027[0].ki.wVk = 73;
   
   inputs1027[1].type = INPUT_KEYBOARD;   
   inputs1027[1].ki.wVk = 73;   
   inputs1027[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1027, sizeof(INPUT));
   
   INPUT inputs1028[2] = {};   
   ZeroMemory(inputs1028, sizeof(inputs1028));
   
   inputs1028[0].type = INPUT_KEYBOARD;   
   inputs1028[0].ki.wVk = 78;
   
   inputs1028[1].type = INPUT_KEYBOARD;   
   inputs1028[1].ki.wVk = 78;   
   inputs1028[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1028, sizeof(INPUT));
   
   INPUT inputs1029[2] = {};   
   ZeroMemory(inputs1029, sizeof(inputs1029));
   
   inputs1029[0].type = INPUT_KEYBOARD;   
   inputs1029[0].ki.wVk = 71;
   
   inputs1029[1].type = INPUT_KEYBOARD;   
   inputs1029[1].ki.wVk = 71;   
   inputs1029[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1029, sizeof(INPUT));
   
   INPUT inputs1030[2] = {};   
   ZeroMemory(inputs1030, sizeof(inputs1030));
   
   inputs1030[0].type = INPUT_KEYBOARD;   
   inputs1030[0].ki.wVk = 83;
   
   inputs1030[1].type = INPUT_KEYBOARD;   
   inputs1030[1].ki.wVk = 83;   
   inputs1030[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1030, sizeof(INPUT));
   
   INPUT inputs1031[2] = {};   
   ZeroMemory(inputs1031, sizeof(inputs1031));
   
   inputs1031[0].type = INPUT_KEYBOARD;   
   inputs1031[0].ki.wVk = 56;
   
   inputs1031[1].type = INPUT_KEYBOARD;   
   inputs1031[1].ki.wVk = 56;   
   inputs1031[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1031, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1032[2] = {};   
   ZeroMemory(inputs1032, sizeof(inputs1032));
   
   inputs1032[0].type = INPUT_KEYBOARD;   
   inputs1032[0].ki.wVk = 50;
   
   inputs1032[1].type = INPUT_KEYBOARD;   
   inputs1032[1].ki.wVk = 50;   
   inputs1032[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1032, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1033[2] = {};   
   ZeroMemory(inputs1033, sizeof(inputs1033));
   
   inputs1033[0].type = INPUT_KEYBOARD;   
   inputs1033[0].ki.wVk = 53;
   
   inputs1033[1].type = INPUT_KEYBOARD;   
   inputs1033[1].ki.wVk = 53;   
   inputs1033[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1033, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1034[2] = {};   
   ZeroMemory(inputs1034, sizeof(inputs1034));
   
   inputs1034[0].type = INPUT_KEYBOARD;   
   inputs1034[0].ki.wVk = 85;
   
   inputs1034[1].type = INPUT_KEYBOARD;   
   inputs1034[1].ki.wVk = 85;   
   inputs1034[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1034, sizeof(INPUT));
   
   INPUT inputs1035[2] = {};   
   ZeroMemory(inputs1035, sizeof(inputs1035));
   
   inputs1035[0].type = INPUT_KEYBOARD;   
   inputs1035[0].ki.wVk = 83;
   
   inputs1035[1].type = INPUT_KEYBOARD;   
   inputs1035[1].ki.wVk = 83;   
   inputs1035[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1035, sizeof(INPUT));
   
   INPUT inputs1036[2] = {};   
   ZeroMemory(inputs1036, sizeof(inputs1036));
   
   inputs1036[0].type = INPUT_KEYBOARD;   
   inputs1036[0].ki.wVk = 69;
   
   inputs1036[1].type = INPUT_KEYBOARD;   
   inputs1036[1].ki.wVk = 69;   
   inputs1036[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1036, sizeof(INPUT));
   
   INPUT inputs1037[2] = {};   
   ZeroMemory(inputs1037, sizeof(inputs1037));
   
   inputs1037[0].type = INPUT_KEYBOARD;   
   inputs1037[0].ki.wVk = 82;
   
   inputs1037[1].type = INPUT_KEYBOARD;   
   inputs1037[1].ki.wVk = 82;   
   inputs1037[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1037, sizeof(INPUT));
   
   INPUT inputs1038[2] = {};   
   ZeroMemory(inputs1038, sizeof(inputs1038));
   
   inputs1038[0].type = INPUT_KEYBOARD;   
   inputs1038[0].ki.wVk = 80;
   
   inputs1038[1].type = INPUT_KEYBOARD;   
   inputs1038[1].ki.wVk = 80;   
   inputs1038[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1038, sizeof(INPUT));
   
   INPUT inputs1039[2] = {};   
   ZeroMemory(inputs1039, sizeof(inputs1039));
   
   inputs1039[0].type = INPUT_KEYBOARD;   
   inputs1039[0].ki.wVk = 82;
   
   inputs1039[1].type = INPUT_KEYBOARD;   
   inputs1039[1].ki.wVk = 82;   
   inputs1039[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1039, sizeof(INPUT));
   
   INPUT inputs1040[2] = {};   
   ZeroMemory(inputs1040, sizeof(inputs1040));
   
   inputs1040[0].type = INPUT_KEYBOARD;   
   inputs1040[0].ki.wVk = 79;
   
   inputs1040[1].type = INPUT_KEYBOARD;   
   inputs1040[1].ki.wVk = 79;   
   inputs1040[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1040, sizeof(INPUT));
   
   INPUT inputs1041[2] = {};   
   ZeroMemory(inputs1041, sizeof(inputs1041));
   
   inputs1041[0].type = INPUT_KEYBOARD;   
   inputs1041[0].ki.wVk = 70;
   
   inputs1041[1].type = INPUT_KEYBOARD;   
   inputs1041[1].ki.wVk = 70;   
   inputs1041[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1041, sizeof(INPUT));
   
   INPUT inputs1042[2] = {};   
   ZeroMemory(inputs1042, sizeof(inputs1042));
   
   inputs1042[0].type = INPUT_KEYBOARD;   
   inputs1042[0].ki.wVk = 73;
   
   inputs1042[1].type = INPUT_KEYBOARD;   
   inputs1042[1].ki.wVk = 73;   
   inputs1042[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1042, sizeof(INPUT));
   
   INPUT inputs1043[2] = {};   
   ZeroMemory(inputs1043, sizeof(inputs1043));
   
   inputs1043[0].type = INPUT_KEYBOARD;   
   inputs1043[0].ki.wVk = 76;
   
   inputs1043[1].type = INPUT_KEYBOARD;   
   inputs1043[1].ki.wVk = 76;   
   inputs1043[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1043, sizeof(INPUT));
   
   INPUT inputs1044[2] = {};   
   ZeroMemory(inputs1044, sizeof(inputs1044));
   
   inputs1044[0].type = INPUT_KEYBOARD;   
   inputs1044[0].ki.wVk = 69;
   
   inputs1044[1].type = INPUT_KEYBOARD;   
   inputs1044[1].ki.wVk = 69;   
   inputs1044[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1044, sizeof(INPUT));
   
   INPUT inputs1045[2] = {};   
   ZeroMemory(inputs1045, sizeof(inputs1045));
   
   inputs1045[0].type = INPUT_KEYBOARD;   
   inputs1045[0].ki.wVk = 53;
   
   inputs1045[1].type = INPUT_KEYBOARD;   
   inputs1045[1].ki.wVk = 53;   
   inputs1045[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1045, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1046[2] = {};   
   ZeroMemory(inputs1046, sizeof(inputs1046));
   
   inputs1046[0].type = INPUT_KEYBOARD;   
   inputs1046[0].ki.wVk = 50;
   
   inputs1046[1].type = INPUT_KEYBOARD;   
   inputs1046[1].ki.wVk = 50;   
   inputs1046[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1046, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1047[2] = {};   
   ZeroMemory(inputs1047, sizeof(inputs1047));
   
   inputs1047[0].type = INPUT_KEYBOARD;   
   inputs1047[0].ki.wVk = 57;
   
   inputs1047[1].type = INPUT_KEYBOARD;   
   inputs1047[1].ki.wVk = 57;   
   inputs1047[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1047, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1048[2] = {};   
   ZeroMemory(inputs1048, sizeof(inputs1048));
   
   inputs1048[0].type = INPUT_KEYBOARD;   
   inputs1048[0].ki.wVk = 32;
   
   inputs1048[1].type = INPUT_KEYBOARD;   
   inputs1048[1].ki.wVk = 32;   
   inputs1048[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1048, sizeof(INPUT));
   
   INPUT inputs1049[2] = {};   
   ZeroMemory(inputs1049, sizeof(inputs1049));
   
   inputs1049[0].type = INPUT_KEYBOARD;   
   inputs1049[0].ki.wVk = 190;
   
   inputs1049[1].type = INPUT_KEYBOARD;   
   inputs1049[1].ki.wVk = 190;   
   inputs1049[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1049, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1050[2] = {};   
   ZeroMemory(inputs1050, sizeof(inputs1050));
   
   inputs1050[0].type = INPUT_KEYBOARD;   
   inputs1050[0].ki.wVk = 190;
   
   inputs1050[1].type = INPUT_KEYBOARD;   
   inputs1050[1].ki.wVk = 190;   
   inputs1050[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1050, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1051[2] = {};   
   ZeroMemory(inputs1051, sizeof(inputs1051));
   
   inputs1051[0].type = INPUT_KEYBOARD;   
   inputs1051[0].ki.wVk = 32;
   
   inputs1051[1].type = INPUT_KEYBOARD;   
   inputs1051[1].ki.wVk = 32;   
   inputs1051[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1051, sizeof(INPUT));
   
   INPUT inputs1052[2] = {};   
   ZeroMemory(inputs1052, sizeof(inputs1052));
   
   inputs1052[0].type = INPUT_KEYBOARD;   
   inputs1052[0].ki.wVk = 82;
   
   inputs1052[1].type = INPUT_KEYBOARD;   
   inputs1052[1].ki.wVk = 82;   
   inputs1052[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1052, sizeof(INPUT));
   
   INPUT inputs1053[2] = {};   
   ZeroMemory(inputs1053, sizeof(inputs1053));
   
   inputs1053[0].type = INPUT_KEYBOARD;   
   inputs1053[0].ki.wVk = 73;
   
   inputs1053[1].type = INPUT_KEYBOARD;   
   inputs1053[1].ki.wVk = 73;   
   inputs1053[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1053, sizeof(INPUT));
   
   INPUT inputs1054[2] = {};   
   ZeroMemory(inputs1054, sizeof(inputs1054));
   
   inputs1054[0].type = INPUT_KEYBOARD;   
   inputs1054[0].ki.wVk = 67;
   
   inputs1054[1].type = INPUT_KEYBOARD;   
   inputs1054[1].ki.wVk = 67;   
   inputs1054[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1054, sizeof(INPUT));
   
   INPUT inputs1055[2] = {};   
   ZeroMemory(inputs1055, sizeof(inputs1055));
   
   inputs1055[0].type = INPUT_KEYBOARD;   
   inputs1055[0].ki.wVk = 75;
   
   inputs1055[1].type = INPUT_KEYBOARD;   
   inputs1055[1].ki.wVk = 75;   
   inputs1055[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1055, sizeof(INPUT));
   
   INPUT inputs1056[2] = {};   
   ZeroMemory(inputs1056, sizeof(inputs1056));
   
   inputs1056[0].type = INPUT_KEYBOARD;   
   inputs1056[0].ki.wVk = 82;
   
   inputs1056[1].type = INPUT_KEYBOARD;   
   inputs1056[1].ki.wVk = 82;   
   inputs1056[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1056, sizeof(INPUT));
   
   INPUT inputs1057[2] = {};   
   ZeroMemory(inputs1057, sizeof(inputs1057));
   
   inputs1057[0].type = INPUT_KEYBOARD;   
   inputs1057[0].ki.wVk = 79;
   
   inputs1057[1].type = INPUT_KEYBOARD;   
   inputs1057[1].ki.wVk = 79;   
   inputs1057[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1057, sizeof(INPUT));
   
   INPUT inputs1058[2] = {};   
   ZeroMemory(inputs1058, sizeof(inputs1058));
   
   inputs1058[0].type = INPUT_KEYBOARD;   
   inputs1058[0].ki.wVk = 76;
   
   inputs1058[1].type = INPUT_KEYBOARD;   
   inputs1058[1].ki.wVk = 76;   
   inputs1058[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1058, sizeof(INPUT));
   
   INPUT inputs1059[2] = {};   
   ZeroMemory(inputs1059, sizeof(inputs1059));
   
   inputs1059[0].type = INPUT_KEYBOARD;   
   inputs1059[0].ki.wVk = 76;
   
   inputs1059[1].type = INPUT_KEYBOARD;   
   inputs1059[1].ki.wVk = 76;   
   inputs1059[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1059, sizeof(INPUT));
   
   INPUT inputs1060[2] = {};   
   ZeroMemory(inputs1060, sizeof(inputs1060));
   
   inputs1060[0].type = INPUT_KEYBOARD;   
   inputs1060[0].ki.wVk = 190;
   
   inputs1060[1].type = INPUT_KEYBOARD;   
   inputs1060[1].ki.wVk = 190;   
   inputs1060[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1060, sizeof(INPUT));
   
   INPUT inputs1061[2] = {};   
   ZeroMemory(inputs1061, sizeof(inputs1061));
   
   inputs1061[0].type = INPUT_KEYBOARD;   
   inputs1061[0].ki.wVk = 86;
   
   inputs1061[1].type = INPUT_KEYBOARD;   
   inputs1061[1].ki.wVk = 86;   
   inputs1061[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1061, sizeof(INPUT));
   
   INPUT inputs1062[2] = {};   
   ZeroMemory(inputs1062, sizeof(inputs1062));
   
   inputs1062[0].type = INPUT_KEYBOARD;   
   inputs1062[0].ki.wVk = 66;
   
   inputs1062[1].type = INPUT_KEYBOARD;   
   inputs1062[1].ki.wVk = 66;   
   inputs1062[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1062, sizeof(INPUT));
   
   INPUT inputs1063[2] = {};   
   ZeroMemory(inputs1063, sizeof(inputs1063));
   
   inputs1063[0].type = INPUT_KEYBOARD;   
   inputs1063[0].ki.wVk = 83;
   
   inputs1063[1].type = INPUT_KEYBOARD;   
   inputs1063[1].ki.wVk = 83;   
   inputs1063[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1063, sizeof(INPUT));
   
   INPUT inputs1064[2] = {};   
   ZeroMemory(inputs1064, sizeof(inputs1064));
   
   inputs1064[0].type = INPUT_KEYBOARD;   
   inputs1064[0].ki.wVk = 32;
   
   inputs1064[1].type = INPUT_KEYBOARD;   
   inputs1064[1].ki.wVk = 32;   
   inputs1064[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1064, sizeof(INPUT));
   
   INPUT inputs1065[2] = {};   
   ZeroMemory(inputs1065, sizeof(inputs1065));
   
   inputs1065[0].type = INPUT_KEYBOARD;   
   inputs1065[0].ki.wVk = 54;
   
   inputs1065[1].type = INPUT_KEYBOARD;   
   inputs1065[1].ki.wVk = 54;   
   inputs1065[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1065, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1066[2] = {};   
   ZeroMemory(inputs1066, sizeof(inputs1066));
   
   inputs1066[0].type = INPUT_KEYBOARD;   
   inputs1066[0].ki.wVk = 32;
   
   inputs1066[1].type = INPUT_KEYBOARD;   
   inputs1066[1].ki.wVk = 32;   
   inputs1066[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1066, sizeof(INPUT));
   
   INPUT inputs1067[2] = {};   
   ZeroMemory(inputs1067, sizeof(inputs1067));
   
   inputs1067[0].type = INPUT_KEYBOARD;   
   inputs1067[0].ki.wVk = 69;
   
   inputs1067[1].type = INPUT_KEYBOARD;   
   inputs1067[1].ki.wVk = 69;   
   inputs1067[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1067, sizeof(INPUT));
   
   INPUT inputs1068[2] = {};   
   ZeroMemory(inputs1068, sizeof(inputs1068));
   
   inputs1068[0].type = INPUT_KEYBOARD;   
   inputs1068[0].ki.wVk = 67;
   
   inputs1068[1].type = INPUT_KEYBOARD;   
   inputs1068[1].ki.wVk = 67;   
   inputs1068[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1068, sizeof(INPUT));
   
   INPUT inputs1069[2] = {};   
   ZeroMemory(inputs1069, sizeof(inputs1069));
   
   inputs1069[0].type = INPUT_KEYBOARD;   
   inputs1069[0].ki.wVk = 72;
   
   inputs1069[1].type = INPUT_KEYBOARD;   
   inputs1069[1].ki.wVk = 72;   
   inputs1069[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1069, sizeof(INPUT));
   
   INPUT inputs1070[2] = {};   
   ZeroMemory(inputs1070, sizeof(inputs1070));
   
   inputs1070[0].type = INPUT_KEYBOARD;   
   inputs1070[0].ki.wVk = 79;
   
   inputs1070[1].type = INPUT_KEYBOARD;   
   inputs1070[1].ki.wVk = 79;   
   inputs1070[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1070, sizeof(INPUT));
   
   INPUT inputs1071[2] = {};   
   ZeroMemory(inputs1071, sizeof(inputs1071));
   
   inputs1071[0].type = INPUT_KEYBOARD;   
   inputs1071[0].ki.wVk = 32;
   
   inputs1071[1].type = INPUT_KEYBOARD;   
   inputs1071[1].ki.wVk = 32;   
   inputs1071[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1071, sizeof(INPUT));
   
   INPUT inputs1072[2] = {};   
   ZeroMemory(inputs1072, sizeof(inputs1072));
   
   inputs1072[0].type = INPUT_KEYBOARD;   
   inputs1072[0].ki.wVk = 79;
   
   inputs1072[1].type = INPUT_KEYBOARD;   
   inputs1072[1].ki.wVk = 79;   
   inputs1072[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1072, sizeof(INPUT));
   
   INPUT inputs1073[2] = {};   
   ZeroMemory(inputs1073, sizeof(inputs1073));
   
   inputs1073[0].type = INPUT_KEYBOARD;   
   inputs1073[0].ki.wVk = 80;
   
   inputs1073[1].type = INPUT_KEYBOARD;   
   inputs1073[1].ki.wVk = 80;   
   inputs1073[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1073, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1074[2] = {};   
   ZeroMemory(inputs1074, sizeof(inputs1074));
   
   inputs1074[0].type = INPUT_KEYBOARD;   
   inputs1074[0].ki.wVk = 76;
   
   inputs1074[1].type = INPUT_KEYBOARD;   
   inputs1074[1].ki.wVk = 76;   
   inputs1074[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1074, sizeof(INPUT));
   
   INPUT inputs1075[2] = {};   
   ZeroMemory(inputs1075, sizeof(inputs1075));
   
   inputs1075[0].type = INPUT_KEYBOARD;   
   inputs1075[0].ki.wVk = 65;
   
   inputs1075[1].type = INPUT_KEYBOARD;   
   inputs1075[1].ki.wVk = 65;   
   inputs1075[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1075, sizeof(INPUT));
   
   INPUT inputs1076[2] = {};   
   ZeroMemory(inputs1076, sizeof(inputs1076));
   
   inputs1076[0].type = INPUT_KEYBOARD;   
   inputs1076[0].ki.wVk = 89;
   
   inputs1076[1].type = INPUT_KEYBOARD;   
   inputs1076[1].ki.wVk = 89;   
   inputs1076[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1076, sizeof(INPUT));
   
   INPUT inputs1077[2] = {};   
   ZeroMemory(inputs1077, sizeof(inputs1077));
   
   inputs1077[0].type = INPUT_KEYBOARD;   
   inputs1077[0].ki.wVk = 69;
   
   inputs1077[1].type = INPUT_KEYBOARD;   
   inputs1077[1].ki.wVk = 69;   
   inputs1077[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1077, sizeof(INPUT));
   
   INPUT inputs1078[2] = {};   
   ZeroMemory(inputs1078, sizeof(inputs1078));
   
   inputs1078[0].type = INPUT_KEYBOARD;   
   inputs1078[0].ki.wVk = 82;
   
   inputs1078[1].type = INPUT_KEYBOARD;   
   inputs1078[1].ki.wVk = 82;   
   inputs1078[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1078, sizeof(INPUT));
   
   INPUT inputs1079[2] = {};   
   ZeroMemory(inputs1079, sizeof(inputs1079));
   
   inputs1079[0].type = INPUT_KEYBOARD;   
   inputs1079[0].ki.wVk = 190;
   
   inputs1079[1].type = INPUT_KEYBOARD;   
   inputs1079[1].ki.wVk = 190;   
   inputs1079[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1079, sizeof(INPUT));
   
   INPUT inputs1080[2] = {};   
   ZeroMemory(inputs1080, sizeof(inputs1080));
   
   inputs1080[0].type = INPUT_KEYBOARD;   
   inputs1080[0].ki.wVk = 85;
   
   inputs1080[1].type = INPUT_KEYBOARD;   
   inputs1080[1].ki.wVk = 85;   
   inputs1080[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1080, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1081[2] = {};   
   ZeroMemory(inputs1081, sizeof(inputs1081));
   
   inputs1081[0].type = INPUT_KEYBOARD;   
   inputs1081[0].ki.wVk = 82;
   
   inputs1081[1].type = INPUT_KEYBOARD;   
   inputs1081[1].ki.wVk = 82;   
   inputs1081[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1081, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1082[2] = {};   
   ZeroMemory(inputs1082, sizeof(inputs1082));
   
   inputs1082[0].type = INPUT_KEYBOARD;   
   inputs1082[0].ki.wVk = 76;
   
   inputs1082[1].type = INPUT_KEYBOARD;   
   inputs1082[1].ki.wVk = 76;   
   inputs1082[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1082, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1083[2] = {};   
   ZeroMemory(inputs1083, sizeof(inputs1083));
   
   inputs1083[0].type = INPUT_KEYBOARD;   
   inputs1083[0].ki.wVk = 32;
   
   inputs1083[1].type = INPUT_KEYBOARD;   
   inputs1083[1].ki.wVk = 32;   
   inputs1083[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1083, sizeof(INPUT));
   
   INPUT inputs1084[2] = {};   
   ZeroMemory(inputs1084, sizeof(inputs1084));
   
   inputs1084[0].type = INPUT_KEYBOARD;   
   inputs1084[0].ki.wVk = 48;
   
   inputs1084[1].type = INPUT_KEYBOARD;   
   inputs1084[1].ki.wVk = 48;   
   inputs1084[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1084, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1085[2] = {};   
   ZeroMemory(inputs1085, sizeof(inputs1085));
   
   inputs1085[0].type = INPUT_KEYBOARD;   
   inputs1085[0].ki.wVk = 32;
   
   inputs1085[1].type = INPUT_KEYBOARD;   
   inputs1085[1].ki.wVk = 32;   
   inputs1085[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1085, sizeof(INPUT));
   
   INPUT inputs1086[2] = {};   
   ZeroMemory(inputs1086, sizeof(inputs1086));
   
   inputs1086[0].type = INPUT_KEYBOARD;   
   inputs1086[0].ki.wVk = 50;
   
   inputs1086[1].type = INPUT_KEYBOARD;   
   inputs1086[1].ki.wVk = 50;   
   inputs1086[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1086, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1087[2] = {};   
   ZeroMemory(inputs1087, sizeof(inputs1087));
   
   inputs1087[0].type = INPUT_KEYBOARD;   
   inputs1087[0].ki.wVk = 53;
   
   inputs1087[1].type = INPUT_KEYBOARD;   
   inputs1087[1].ki.wVk = 53;   
   inputs1087[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1087, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1088[2] = {};   
   ZeroMemory(inputs1088, sizeof(inputs1088));
   
   inputs1088[0].type = INPUT_KEYBOARD;   
   inputs1088[0].ki.wVk = 85;
   
   inputs1088[1].type = INPUT_KEYBOARD;   
   inputs1088[1].ki.wVk = 85;   
   inputs1088[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1088, sizeof(INPUT));
   
   INPUT inputs1089[2] = {};   
   ZeroMemory(inputs1089, sizeof(inputs1089));
   
   inputs1089[0].type = INPUT_KEYBOARD;   
   inputs1089[0].ki.wVk = 83;
   
   inputs1089[1].type = INPUT_KEYBOARD;   
   inputs1089[1].ki.wVk = 83;   
   inputs1089[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1089, sizeof(INPUT));
   
   INPUT inputs1090[2] = {};   
   ZeroMemory(inputs1090, sizeof(inputs1090));
   
   inputs1090[0].type = INPUT_KEYBOARD;   
   inputs1090[0].ki.wVk = 69;
   
   inputs1090[1].type = INPUT_KEYBOARD;   
   inputs1090[1].ki.wVk = 69;   
   inputs1090[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1090, sizeof(INPUT));
   
   INPUT inputs1091[2] = {};   
   ZeroMemory(inputs1091, sizeof(inputs1091));
   
   inputs1091[0].type = INPUT_KEYBOARD;   
   inputs1091[0].ki.wVk = 82;
   
   inputs1091[1].type = INPUT_KEYBOARD;   
   inputs1091[1].ki.wVk = 82;   
   inputs1091[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1091, sizeof(INPUT));
   
   INPUT inputs1092[2] = {};   
   ZeroMemory(inputs1092, sizeof(inputs1092));
   
   inputs1092[0].type = INPUT_KEYBOARD;   
   inputs1092[0].ki.wVk = 80;
   
   inputs1092[1].type = INPUT_KEYBOARD;   
   inputs1092[1].ki.wVk = 80;   
   inputs1092[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1092, sizeof(INPUT));
   
   INPUT inputs1093[2] = {};   
   ZeroMemory(inputs1093, sizeof(inputs1093));
   
   inputs1093[0].type = INPUT_KEYBOARD;   
   inputs1093[0].ki.wVk = 82;
   
   inputs1093[1].type = INPUT_KEYBOARD;   
   inputs1093[1].ki.wVk = 82;   
   inputs1093[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1093, sizeof(INPUT));
   
   INPUT inputs1094[2] = {};   
   ZeroMemory(inputs1094, sizeof(inputs1094));
   
   inputs1094[0].type = INPUT_KEYBOARD;   
   inputs1094[0].ki.wVk = 79;
   
   inputs1094[1].type = INPUT_KEYBOARD;   
   inputs1094[1].ki.wVk = 79;   
   inputs1094[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1094, sizeof(INPUT));
   
   INPUT inputs1095[2] = {};   
   ZeroMemory(inputs1095, sizeof(inputs1095));
   
   inputs1095[0].type = INPUT_KEYBOARD;   
   inputs1095[0].ki.wVk = 70;
   
   inputs1095[1].type = INPUT_KEYBOARD;   
   inputs1095[1].ki.wVk = 70;   
   inputs1095[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1095, sizeof(INPUT));
   
   INPUT inputs1096[2] = {};   
   ZeroMemory(inputs1096, sizeof(inputs1096));
   
   inputs1096[0].type = INPUT_KEYBOARD;   
   inputs1096[0].ki.wVk = 73;
   
   inputs1096[1].type = INPUT_KEYBOARD;   
   inputs1096[1].ki.wVk = 73;   
   inputs1096[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1096, sizeof(INPUT));
   
   INPUT inputs1097[2] = {};   
   ZeroMemory(inputs1097, sizeof(inputs1097));
   
   inputs1097[0].type = INPUT_KEYBOARD;   
   inputs1097[0].ki.wVk = 76;
   
   inputs1097[1].type = INPUT_KEYBOARD;   
   inputs1097[1].ki.wVk = 76;   
   inputs1097[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1097, sizeof(INPUT));
   
   INPUT inputs1098[2] = {};   
   ZeroMemory(inputs1098, sizeof(inputs1098));
   
   inputs1098[0].type = INPUT_KEYBOARD;   
   inputs1098[0].ki.wVk = 69;
   
   inputs1098[1].type = INPUT_KEYBOARD;   
   inputs1098[1].ki.wVk = 69;   
   inputs1098[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1098, sizeof(INPUT));
   
   INPUT inputs1099[2] = {};   
   ZeroMemory(inputs1099, sizeof(inputs1099));
   
   inputs1099[0].type = INPUT_KEYBOARD;   
   inputs1099[0].ki.wVk = 53;
   
   inputs1099[1].type = INPUT_KEYBOARD;   
   inputs1099[1].ki.wVk = 53;   
   inputs1099[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1099, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1100[2] = {};   
   ZeroMemory(inputs1100, sizeof(inputs1100));
   
   inputs1100[0].type = INPUT_KEYBOARD;   
   inputs1100[0].ki.wVk = 81;
   
   inputs1100[1].type = INPUT_KEYBOARD;   
   inputs1100[1].ki.wVk = 81;   
   inputs1100[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1100, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1101[2] = {};   
   ZeroMemory(inputs1101, sizeof(inputs1101));
   
   inputs1101[0].type = INPUT_KEYBOARD;   
   inputs1101[0].ki.wVk = 68;
   
   inputs1101[1].type = INPUT_KEYBOARD;   
   inputs1101[1].ki.wVk = 68;   
   inputs1101[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1101, sizeof(INPUT));
   
   INPUT inputs1102[2] = {};   
   ZeroMemory(inputs1102, sizeof(inputs1102));
   
   inputs1102[0].type = INPUT_KEYBOARD;   
   inputs1102[0].ki.wVk = 79;
   
   inputs1102[1].type = INPUT_KEYBOARD;   
   inputs1102[1].ki.wVk = 79;   
   inputs1102[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1102, sizeof(INPUT));
   
   INPUT inputs1103[2] = {};   
   ZeroMemory(inputs1103, sizeof(inputs1103));
   
   inputs1103[0].type = INPUT_KEYBOARD;   
   inputs1103[0].ki.wVk = 87;
   
   inputs1103[1].type = INPUT_KEYBOARD;   
   inputs1103[1].ki.wVk = 87;   
   inputs1103[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1103, sizeof(INPUT));
   
   INPUT inputs1104[2] = {};   
   ZeroMemory(inputs1104, sizeof(inputs1104));
   
   inputs1104[0].type = INPUT_KEYBOARD;   
   inputs1104[0].ki.wVk = 78;
   
   inputs1104[1].type = INPUT_KEYBOARD;   
   inputs1104[1].ki.wVk = 78;   
   inputs1104[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1104, sizeof(INPUT));
   
   INPUT inputs1105[2] = {};   
   ZeroMemory(inputs1105, sizeof(inputs1105));
   
   inputs1105[0].type = INPUT_KEYBOARD;   
   inputs1105[0].ki.wVk = 76;
   
   inputs1105[1].type = INPUT_KEYBOARD;   
   inputs1105[1].ki.wVk = 76;   
   inputs1105[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1105, sizeof(INPUT));
   
   INPUT inputs1106[2] = {};   
   ZeroMemory(inputs1106, sizeof(inputs1106));
   
   inputs1106[0].type = INPUT_KEYBOARD;   
   inputs1106[0].ki.wVk = 79;
   
   inputs1106[1].type = INPUT_KEYBOARD;   
   inputs1106[1].ki.wVk = 79;   
   inputs1106[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1106, sizeof(INPUT));
   
   INPUT inputs1107[2] = {};   
   ZeroMemory(inputs1107, sizeof(inputs1107));
   
   inputs1107[0].type = INPUT_KEYBOARD;   
   inputs1107[0].ki.wVk = 65;
   
   inputs1107[1].type = INPUT_KEYBOARD;   
   inputs1107[1].ki.wVk = 65;   
   inputs1107[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1107, sizeof(INPUT));
   
   INPUT inputs1108[2] = {};   
   ZeroMemory(inputs1108, sizeof(inputs1108));
   
   inputs1108[0].type = INPUT_KEYBOARD;   
   inputs1108[0].ki.wVk = 68;
   
   inputs1108[1].type = INPUT_KEYBOARD;   
   inputs1108[1].ki.wVk = 68;   
   inputs1108[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1108, sizeof(INPUT));
   
   INPUT inputs1109[2] = {};   
   ZeroMemory(inputs1109, sizeof(inputs1109));
   
   inputs1109[0].type = INPUT_KEYBOARD;   
   inputs1109[0].ki.wVk = 83;
   
   inputs1109[1].type = INPUT_KEYBOARD;   
   inputs1109[1].ki.wVk = 83;   
   inputs1109[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1109, sizeof(INPUT));
   
   INPUT inputs1110[2] = {};   
   ZeroMemory(inputs1110, sizeof(inputs1110));
   
   inputs1110[0].type = INPUT_KEYBOARD;   
   inputs1110[0].ki.wVk = 81;
   
   inputs1110[1].type = INPUT_KEYBOARD;   
   inputs1110[1].ki.wVk = 81;   
   inputs1110[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1110, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1111[2] = {};   
   ZeroMemory(inputs1111, sizeof(inputs1111));
   
   inputs1111[0].type = INPUT_KEYBOARD;   
   inputs1111[0].ki.wVk = 78;
   
   inputs1111[1].type = INPUT_KEYBOARD;   
   inputs1111[1].ki.wVk = 78;   
   inputs1111[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1111, sizeof(INPUT));
   
   INPUT inputs1112[2] = {};   
   ZeroMemory(inputs1112, sizeof(inputs1112));
   
   inputs1112[0].type = INPUT_KEYBOARD;   
   inputs1112[0].ki.wVk = 69;
   
   inputs1112[1].type = INPUT_KEYBOARD;   
   inputs1112[1].ki.wVk = 69;   
   inputs1112[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1112, sizeof(INPUT));
   
   INPUT inputs1113[2] = {};   
   ZeroMemory(inputs1113, sizeof(inputs1113));
   
   inputs1113[0].type = INPUT_KEYBOARD;   
   inputs1113[0].ki.wVk = 86;
   
   inputs1113[1].type = INPUT_KEYBOARD;   
   inputs1113[1].ki.wVk = 86;   
   inputs1113[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1113, sizeof(INPUT));
   
   INPUT inputs1114[2] = {};   
   ZeroMemory(inputs1114, sizeof(inputs1114));
   
   inputs1114[0].type = INPUT_KEYBOARD;   
   inputs1114[0].ki.wVk = 69;
   
   inputs1114[1].type = INPUT_KEYBOARD;   
   inputs1114[1].ki.wVk = 69;   
   inputs1114[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1114, sizeof(INPUT));
   
   INPUT inputs1115[2] = {};   
   ZeroMemory(inputs1115, sizeof(inputs1115));
   
   inputs1115[0].type = INPUT_KEYBOARD;   
   inputs1115[0].ki.wVk = 82;
   
   inputs1115[1].type = INPUT_KEYBOARD;   
   inputs1115[1].ki.wVk = 82;   
   inputs1115[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1115, sizeof(INPUT));
   
   INPUT inputs1116[2] = {};   
   ZeroMemory(inputs1116, sizeof(inputs1116));
   
   inputs1116[0].type = INPUT_KEYBOARD;   
   inputs1116[0].ki.wVk = 189;
   
   inputs1116[1].type = INPUT_KEYBOARD;   
   inputs1116[1].ki.wVk = 189;   
   inputs1116[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1116, sizeof(INPUT));
   
   INPUT inputs1117[2] = {};   
   ZeroMemory(inputs1117, sizeof(inputs1117));
   
   inputs1117[0].type = INPUT_KEYBOARD;   
   inputs1117[0].ki.wVk = 71;
   
   inputs1117[1].type = INPUT_KEYBOARD;   
   inputs1117[1].ki.wVk = 71;   
   inputs1117[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1117, sizeof(INPUT));
   
   INPUT inputs1118[2] = {};   
   ZeroMemory(inputs1118, sizeof(inputs1118));
   
   inputs1118[0].type = INPUT_KEYBOARD;   
   inputs1118[0].ki.wVk = 79;
   
   inputs1118[1].type = INPUT_KEYBOARD;   
   inputs1118[1].ki.wVk = 79;   
   inputs1118[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1118, sizeof(INPUT));
   
   INPUT inputs1119[2] = {};   
   ZeroMemory(inputs1119, sizeof(inputs1119));
   
   inputs1119[0].type = INPUT_KEYBOARD;   
   inputs1119[0].ki.wVk = 78;
   
   inputs1119[1].type = INPUT_KEYBOARD;   
   inputs1119[1].ki.wVk = 78;   
   inputs1119[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1119, sizeof(INPUT));
   
   INPUT inputs1120[2] = {};   
   ZeroMemory(inputs1120, sizeof(inputs1120));
   
   inputs1120[0].type = INPUT_KEYBOARD;   
   inputs1120[0].ki.wVk = 78;
   
   inputs1120[1].type = INPUT_KEYBOARD;   
   inputs1120[1].ki.wVk = 78;   
   inputs1120[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1120, sizeof(INPUT));
   
   INPUT inputs1121[2] = {};   
   ZeroMemory(inputs1121, sizeof(inputs1121));
   
   inputs1121[0].type = INPUT_KEYBOARD;   
   inputs1121[0].ki.wVk = 65;
   
   inputs1121[1].type = INPUT_KEYBOARD;   
   inputs1121[1].ki.wVk = 65;   
   inputs1121[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1121, sizeof(INPUT));
   
   INPUT inputs1122[2] = {};   
   ZeroMemory(inputs1122, sizeof(inputs1122));
   
   inputs1122[0].type = INPUT_KEYBOARD;   
   inputs1122[0].ki.wVk = 189;
   
   inputs1122[1].type = INPUT_KEYBOARD;   
   inputs1122[1].ki.wVk = 189;   
   inputs1122[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1122, sizeof(INPUT));
   
   INPUT inputs1123[2] = {};   
   ZeroMemory(inputs1123, sizeof(inputs1123));
   
   inputs1123[0].type = INPUT_KEYBOARD;   
   inputs1123[0].ki.wVk = 71;
   
   inputs1123[1].type = INPUT_KEYBOARD;   
   inputs1123[1].ki.wVk = 71;   
   inputs1123[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1123, sizeof(INPUT));
   
   INPUT inputs1124[2] = {};   
   ZeroMemory(inputs1124, sizeof(inputs1124));
   
   inputs1124[0].type = INPUT_KEYBOARD;   
   inputs1124[0].ki.wVk = 73;
   
   inputs1124[1].type = INPUT_KEYBOARD;   
   inputs1124[1].ki.wVk = 73;   
   inputs1124[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1124, sizeof(INPUT));
   
   INPUT inputs1125[2] = {};   
   ZeroMemory(inputs1125, sizeof(inputs1125));
   
   inputs1125[0].type = INPUT_KEYBOARD;   
   inputs1125[0].ki.wVk = 86;
   
   inputs1125[1].type = INPUT_KEYBOARD;   
   inputs1125[1].ki.wVk = 86;   
   inputs1125[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1125, sizeof(INPUT));
   
   INPUT inputs1126[2] = {};   
   ZeroMemory(inputs1126, sizeof(inputs1126));
   
   inputs1126[0].type = INPUT_KEYBOARD;   
   inputs1126[0].ki.wVk = 69;
   
   inputs1126[1].type = INPUT_KEYBOARD;   
   inputs1126[1].ki.wVk = 69;   
   inputs1126[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1126, sizeof(INPUT));
   
   INPUT inputs1127[2] = {};   
   ZeroMemory(inputs1127, sizeof(inputs1127));
   
   inputs1127[0].type = INPUT_KEYBOARD;   
   inputs1127[0].ki.wVk = 189;
   
   inputs1127[1].type = INPUT_KEYBOARD;   
   inputs1127[1].ki.wVk = 189;   
   inputs1127[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1127, sizeof(INPUT));
   
   INPUT inputs1128[2] = {};   
   ZeroMemory(inputs1128, sizeof(inputs1128));
   
   inputs1128[0].type = INPUT_KEYBOARD;   
   inputs1128[0].ki.wVk = 89;
   
   inputs1128[1].type = INPUT_KEYBOARD;   
   inputs1128[1].ki.wVk = 89;   
   inputs1128[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1128, sizeof(INPUT));
   
   INPUT inputs1129[2] = {};   
   ZeroMemory(inputs1129, sizeof(inputs1129));
   
   inputs1129[0].type = INPUT_KEYBOARD;   
   inputs1129[0].ki.wVk = 79;
   
   inputs1129[1].type = INPUT_KEYBOARD;   
   inputs1129[1].ki.wVk = 79;   
   inputs1129[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1129, sizeof(INPUT));
   
   INPUT inputs1130[2] = {};   
   ZeroMemory(inputs1130, sizeof(inputs1130));
   
   inputs1130[0].type = INPUT_KEYBOARD;   
   inputs1130[0].ki.wVk = 85;
   
   inputs1130[1].type = INPUT_KEYBOARD;   
   inputs1130[1].ki.wVk = 85;   
   inputs1130[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1130, sizeof(INPUT));
   
   INPUT inputs1131[2] = {};   
   ZeroMemory(inputs1131, sizeof(inputs1131));
   
   inputs1131[0].type = INPUT_KEYBOARD;   
   inputs1131[0].ki.wVk = 189;
   
   inputs1131[1].type = INPUT_KEYBOARD;   
   inputs1131[1].ki.wVk = 189;   
   inputs1131[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1131, sizeof(INPUT));
   
   INPUT inputs1132[2] = {};   
   ZeroMemory(inputs1132, sizeof(inputs1132));
   
   inputs1132[0].type = INPUT_KEYBOARD;   
   inputs1132[0].ki.wVk = 85;
   
   inputs1132[1].type = INPUT_KEYBOARD;   
   inputs1132[1].ki.wVk = 85;   
   inputs1132[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1132, sizeof(INPUT));
   
   INPUT inputs1133[2] = {};   
   ZeroMemory(inputs1133, sizeof(inputs1133));
   
   inputs1133[0].type = INPUT_KEYBOARD;   
   inputs1133[0].ki.wVk = 80;
   
   inputs1133[1].type = INPUT_KEYBOARD;   
   inputs1133[1].ki.wVk = 80;   
   inputs1133[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1133, sizeof(INPUT));
   
   INPUT inputs1134[2] = {};   
   ZeroMemory(inputs1134, sizeof(inputs1134));
   
   inputs1134[0].type = INPUT_KEYBOARD;   
   inputs1134[0].ki.wVk = 190;
   
   inputs1134[1].type = INPUT_KEYBOARD;   
   inputs1134[1].ki.wVk = 190;   
   inputs1134[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1134, sizeof(INPUT));
   
   INPUT inputs1135[2] = {};   
   ZeroMemory(inputs1135, sizeof(inputs1135));
   
   inputs1135[0].type = INPUT_KEYBOARD;   
   inputs1135[0].ki.wVk = 77;
   
   inputs1135[1].type = INPUT_KEYBOARD;   
   inputs1135[1].ki.wVk = 77;   
   inputs1135[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1135, sizeof(INPUT));
   
   INPUT inputs1136[2] = {};   
   ZeroMemory(inputs1136, sizeof(inputs1136));
   
   inputs1136[0].type = INPUT_KEYBOARD;   
   inputs1136[0].ki.wVk = 52;
   
   inputs1136[1].type = INPUT_KEYBOARD;   
   inputs1136[1].ki.wVk = 52;   
   inputs1136[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1136, sizeof(INPUT));
   
   INPUT inputs1137[2] = {};   
   ZeroMemory(inputs1137, sizeof(inputs1137));
   
   inputs1137[0].type = INPUT_KEYBOARD;   
   inputs1137[0].ki.wVk = 65;
   
   inputs1137[1].type = INPUT_KEYBOARD;   
   inputs1137[1].ki.wVk = 65;   
   inputs1137[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1137, sizeof(INPUT));
   
   INPUT inputs1138[2] = {};   
   ZeroMemory(inputs1138, sizeof(inputs1138));
   
   inputs1138[0].type = INPUT_KEYBOARD;   
   inputs1138[0].ki.wVk = 50;
   
   inputs1138[1].type = INPUT_KEYBOARD;   
   inputs1138[1].ki.wVk = 50;   
   inputs1138[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1138, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1139[2] = {};   
   ZeroMemory(inputs1139, sizeof(inputs1139));
   
   inputs1139[0].type = INPUT_KEYBOARD;   
   inputs1139[0].ki.wVk = 32;
   
   inputs1139[1].type = INPUT_KEYBOARD;   
   inputs1139[1].ki.wVk = 32;   
   inputs1139[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1139, sizeof(INPUT));
   
   INPUT inputs1140[2] = {};   
   ZeroMemory(inputs1140, sizeof(inputs1140));
   
   inputs1140[0].type = INPUT_KEYBOARD;   
   inputs1140[0].ki.wVk = 190;
   
   inputs1140[1].type = INPUT_KEYBOARD;   
   inputs1140[1].ki.wVk = 190;   
   inputs1140[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1140, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1141[2] = {};   
   ZeroMemory(inputs1141, sizeof(inputs1141));
   
   inputs1141[0].type = INPUT_KEYBOARD;   
   inputs1141[0].ki.wVk = 190;
   
   inputs1141[1].type = INPUT_KEYBOARD;   
   inputs1141[1].ki.wVk = 190;   
   inputs1141[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1141, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1142[2] = {};   
   ZeroMemory(inputs1142, sizeof(inputs1142));
   
   inputs1142[0].type = INPUT_KEYBOARD;   
   inputs1142[0].ki.wVk = 32;
   
   inputs1142[1].type = INPUT_KEYBOARD;   
   inputs1142[1].ki.wVk = 32;   
   inputs1142[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1142, sizeof(INPUT));
   
   INPUT inputs1143[2] = {};   
   ZeroMemory(inputs1143, sizeof(inputs1143));
   
   inputs1143[0].type = INPUT_KEYBOARD;   
   inputs1143[0].ki.wVk = 82;
   
   inputs1143[1].type = INPUT_KEYBOARD;   
   inputs1143[1].ki.wVk = 82;   
   inputs1143[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1143, sizeof(INPUT));
   
   INPUT inputs1144[2] = {};   
   ZeroMemory(inputs1144, sizeof(inputs1144));
   
   inputs1144[0].type = INPUT_KEYBOARD;   
   inputs1144[0].ki.wVk = 73;
   
   inputs1144[1].type = INPUT_KEYBOARD;   
   inputs1144[1].ki.wVk = 73;   
   inputs1144[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1144, sizeof(INPUT));
   
   INPUT inputs1145[2] = {};   
   ZeroMemory(inputs1145, sizeof(inputs1145));
   
   inputs1145[0].type = INPUT_KEYBOARD;   
   inputs1145[0].ki.wVk = 67;
   
   inputs1145[1].type = INPUT_KEYBOARD;   
   inputs1145[1].ki.wVk = 67;   
   inputs1145[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1145, sizeof(INPUT));
   
   INPUT inputs1146[2] = {};   
   ZeroMemory(inputs1146, sizeof(inputs1146));
   
   inputs1146[0].type = INPUT_KEYBOARD;   
   inputs1146[0].ki.wVk = 75;
   
   inputs1146[1].type = INPUT_KEYBOARD;   
   inputs1146[1].ki.wVk = 75;   
   inputs1146[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1146, sizeof(INPUT));
   
   INPUT inputs1147[2] = {};   
   ZeroMemory(inputs1147, sizeof(inputs1147));
   
   inputs1147[0].type = INPUT_KEYBOARD;   
   inputs1147[0].ki.wVk = 82;
   
   inputs1147[1].type = INPUT_KEYBOARD;   
   inputs1147[1].ki.wVk = 82;   
   inputs1147[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1147, sizeof(INPUT));
   
   INPUT inputs1148[2] = {};   
   ZeroMemory(inputs1148, sizeof(inputs1148));
   
   inputs1148[0].type = INPUT_KEYBOARD;   
   inputs1148[0].ki.wVk = 79;
   
   inputs1148[1].type = INPUT_KEYBOARD;   
   inputs1148[1].ki.wVk = 79;   
   inputs1148[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1148, sizeof(INPUT));
   
   INPUT inputs1149[2] = {};   
   ZeroMemory(inputs1149, sizeof(inputs1149));
   
   inputs1149[0].type = INPUT_KEYBOARD;   
   inputs1149[0].ki.wVk = 76;
   
   inputs1149[1].type = INPUT_KEYBOARD;   
   inputs1149[1].ki.wVk = 76;   
   inputs1149[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1149, sizeof(INPUT));
   
   INPUT inputs1150[2] = {};   
   ZeroMemory(inputs1150, sizeof(inputs1150));
   
   inputs1150[0].type = INPUT_KEYBOARD;   
   inputs1150[0].ki.wVk = 76;
   
   inputs1150[1].type = INPUT_KEYBOARD;   
   inputs1150[1].ki.wVk = 76;   
   inputs1150[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1150, sizeof(INPUT));
   
   INPUT inputs1151[2] = {};   
   ZeroMemory(inputs1151, sizeof(inputs1151));
   
   inputs1151[0].type = INPUT_KEYBOARD;   
   inputs1151[0].ki.wVk = 190;
   
   inputs1151[1].type = INPUT_KEYBOARD;   
   inputs1151[1].ki.wVk = 190;   
   inputs1151[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1151, sizeof(INPUT));
   
   INPUT inputs1152[2] = {};   
   ZeroMemory(inputs1152, sizeof(inputs1152));
   
   inputs1152[0].type = INPUT_KEYBOARD;   
   inputs1152[0].ki.wVk = 86;
   
   inputs1152[1].type = INPUT_KEYBOARD;   
   inputs1152[1].ki.wVk = 86;   
   inputs1152[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1152, sizeof(INPUT));
   
   INPUT inputs1153[2] = {};   
   ZeroMemory(inputs1153, sizeof(inputs1153));
   
   inputs1153[0].type = INPUT_KEYBOARD;   
   inputs1153[0].ki.wVk = 66;
   
   inputs1153[1].type = INPUT_KEYBOARD;   
   inputs1153[1].ki.wVk = 66;   
   inputs1153[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1153, sizeof(INPUT));
   
   INPUT inputs1154[2] = {};   
   ZeroMemory(inputs1154, sizeof(inputs1154));
   
   inputs1154[0].type = INPUT_KEYBOARD;   
   inputs1154[0].ki.wVk = 83;
   
   inputs1154[1].type = INPUT_KEYBOARD;   
   inputs1154[1].ki.wVk = 83;   
   inputs1154[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1154, sizeof(INPUT));
   
   INPUT inputs1155[2] = {};   
   ZeroMemory(inputs1155, sizeof(inputs1155));
   
   inputs1155[0].type = INPUT_KEYBOARD;   
   inputs1155[0].ki.wVk = 32;
   
   inputs1155[1].type = INPUT_KEYBOARD;   
   inputs1155[1].ki.wVk = 32;   
   inputs1155[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1155, sizeof(INPUT));
   
   INPUT inputs1156[2] = {};   
   ZeroMemory(inputs1156, sizeof(inputs1156));
   
   inputs1156[0].type = INPUT_KEYBOARD;   
   inputs1156[0].ki.wVk = 54;
   
   inputs1156[1].type = INPUT_KEYBOARD;   
   inputs1156[1].ki.wVk = 54;   
   inputs1156[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1156, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1157[2] = {};   
   ZeroMemory(inputs1157, sizeof(inputs1157));
   
   inputs1157[0].type = INPUT_KEYBOARD;   
   inputs1157[0].ki.wVk = 32;
   
   inputs1157[1].type = INPUT_KEYBOARD;   
   inputs1157[1].ki.wVk = 32;   
   inputs1157[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1157, sizeof(INPUT));
   
   INPUT inputs1158[2] = {};   
   ZeroMemory(inputs1158, sizeof(inputs1158));
   
   inputs1158[0].type = INPUT_KEYBOARD;   
   inputs1158[0].ki.wVk = 69;
   
   inputs1158[1].type = INPUT_KEYBOARD;   
   inputs1158[1].ki.wVk = 69;   
   inputs1158[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1158, sizeof(INPUT));
   
   INPUT inputs1159[2] = {};   
   ZeroMemory(inputs1159, sizeof(inputs1159));
   
   inputs1159[0].type = INPUT_KEYBOARD;   
   inputs1159[0].ki.wVk = 67;
   
   inputs1159[1].type = INPUT_KEYBOARD;   
   inputs1159[1].ki.wVk = 67;   
   inputs1159[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1159, sizeof(INPUT));
   
   INPUT inputs1160[2] = {};   
   ZeroMemory(inputs1160, sizeof(inputs1160));
   
   inputs1160[0].type = INPUT_KEYBOARD;   
   inputs1160[0].ki.wVk = 72;
   
   inputs1160[1].type = INPUT_KEYBOARD;   
   inputs1160[1].ki.wVk = 72;   
   inputs1160[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1160, sizeof(INPUT));
   
   INPUT inputs1161[2] = {};   
   ZeroMemory(inputs1161, sizeof(inputs1161));
   
   inputs1161[0].type = INPUT_KEYBOARD;   
   inputs1161[0].ki.wVk = 79;
   
   inputs1161[1].type = INPUT_KEYBOARD;   
   inputs1161[1].ki.wVk = 79;   
   inputs1161[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1161, sizeof(INPUT));
   
   INPUT inputs1162[2] = {};   
   ZeroMemory(inputs1162, sizeof(inputs1162));
   
   inputs1162[0].type = INPUT_KEYBOARD;   
   inputs1162[0].ki.wVk = 32;
   
   inputs1162[1].type = INPUT_KEYBOARD;   
   inputs1162[1].ki.wVk = 32;   
   inputs1162[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1162, sizeof(INPUT));
   
   INPUT inputs1163[2] = {};   
   ZeroMemory(inputs1163, sizeof(inputs1163));
   
   inputs1163[0].type = INPUT_KEYBOARD;   
   inputs1163[0].ki.wVk = 79;
   
   inputs1163[1].type = INPUT_KEYBOARD;   
   inputs1163[1].ki.wVk = 79;   
   inputs1163[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1163, sizeof(INPUT));
   
   INPUT inputs1164[2] = {};   
   ZeroMemory(inputs1164, sizeof(inputs1164));
   
   inputs1164[0].type = INPUT_KEYBOARD;   
   inputs1164[0].ki.wVk = 80;
   
   inputs1164[1].type = INPUT_KEYBOARD;   
   inputs1164[1].ki.wVk = 80;   
   inputs1164[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1164, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1165[2] = {};   
   ZeroMemory(inputs1165, sizeof(inputs1165));
   
   inputs1165[0].type = INPUT_KEYBOARD;   
   inputs1165[0].ki.wVk = 76;
   
   inputs1165[1].type = INPUT_KEYBOARD;   
   inputs1165[1].ki.wVk = 76;   
   inputs1165[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1165, sizeof(INPUT));
   
   INPUT inputs1166[2] = {};   
   ZeroMemory(inputs1166, sizeof(inputs1166));
   
   inputs1166[0].type = INPUT_KEYBOARD;   
   inputs1166[0].ki.wVk = 65;
   
   inputs1166[1].type = INPUT_KEYBOARD;   
   inputs1166[1].ki.wVk = 65;   
   inputs1166[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1166, sizeof(INPUT));
   
   INPUT inputs1167[2] = {};   
   ZeroMemory(inputs1167, sizeof(inputs1167));
   
   inputs1167[0].type = INPUT_KEYBOARD;   
   inputs1167[0].ki.wVk = 89;
   
   inputs1167[1].type = INPUT_KEYBOARD;   
   inputs1167[1].ki.wVk = 89;   
   inputs1167[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1167, sizeof(INPUT));
   
   INPUT inputs1168[2] = {};   
   ZeroMemory(inputs1168, sizeof(inputs1168));
   
   inputs1168[0].type = INPUT_KEYBOARD;   
   inputs1168[0].ki.wVk = 69;
   
   inputs1168[1].type = INPUT_KEYBOARD;   
   inputs1168[1].ki.wVk = 69;   
   inputs1168[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1168, sizeof(INPUT));
   
   INPUT inputs1169[2] = {};   
   ZeroMemory(inputs1169, sizeof(inputs1169));
   
   inputs1169[0].type = INPUT_KEYBOARD;   
   inputs1169[0].ki.wVk = 82;
   
   inputs1169[1].type = INPUT_KEYBOARD;   
   inputs1169[1].ki.wVk = 82;   
   inputs1169[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1169, sizeof(INPUT));
   
   INPUT inputs1170[2] = {};   
   ZeroMemory(inputs1170, sizeof(inputs1170));
   
   inputs1170[0].type = INPUT_KEYBOARD;   
   inputs1170[0].ki.wVk = 190;
   
   inputs1170[1].type = INPUT_KEYBOARD;   
   inputs1170[1].ki.wVk = 190;   
   inputs1170[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1170, sizeof(INPUT));
   
   INPUT inputs1171[2] = {};   
   ZeroMemory(inputs1171, sizeof(inputs1171));
   
   inputs1171[0].type = INPUT_KEYBOARD;   
   inputs1171[0].ki.wVk = 67;
   
   inputs1171[1].type = INPUT_KEYBOARD;   
   inputs1171[1].ki.wVk = 67;   
   inputs1171[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1171, sizeof(INPUT));
   
   INPUT inputs1172[2] = {};   
   ZeroMemory(inputs1172, sizeof(inputs1172));
   
   inputs1172[0].type = INPUT_KEYBOARD;   
   inputs1172[0].ki.wVk = 79;
   
   inputs1172[1].type = INPUT_KEYBOARD;   
   inputs1172[1].ki.wVk = 79;   
   inputs1172[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1172, sizeof(INPUT));
   
   INPUT inputs1173[2] = {};   
   ZeroMemory(inputs1173, sizeof(inputs1173));
   
   inputs1173[0].type = INPUT_KEYBOARD;   
   inputs1173[0].ki.wVk = 78;
   
   inputs1173[1].type = INPUT_KEYBOARD;   
   inputs1173[1].ki.wVk = 78;   
   inputs1173[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1173, sizeof(INPUT));
   
   INPUT inputs1174[2] = {};   
   ZeroMemory(inputs1174, sizeof(inputs1174));
   
   inputs1174[0].type = INPUT_KEYBOARD;   
   inputs1174[0].ki.wVk = 84;
   
   inputs1174[1].type = INPUT_KEYBOARD;   
   inputs1174[1].ki.wVk = 84;   
   inputs1174[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1174, sizeof(INPUT));
   
   INPUT inputs1175[2] = {};   
   ZeroMemory(inputs1175, sizeof(inputs1175));
   
   inputs1175[0].type = INPUT_KEYBOARD;   
   inputs1175[0].ki.wVk = 82;
   
   inputs1175[1].type = INPUT_KEYBOARD;   
   inputs1175[1].ki.wVk = 82;   
   inputs1175[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1175, sizeof(INPUT));
   
   INPUT inputs1176[2] = {};   
   ZeroMemory(inputs1176, sizeof(inputs1176));
   
   inputs1176[0].type = INPUT_KEYBOARD;   
   inputs1176[0].ki.wVk = 79;
   
   inputs1176[1].type = INPUT_KEYBOARD;   
   inputs1176[1].ki.wVk = 79;   
   inputs1176[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1176, sizeof(INPUT));
   
   INPUT inputs1177[2] = {};   
   ZeroMemory(inputs1177, sizeof(inputs1177));
   
   inputs1177[0].type = INPUT_KEYBOARD;   
   inputs1177[0].ki.wVk = 76;
   
   inputs1177[1].type = INPUT_KEYBOARD;   
   inputs1177[1].ki.wVk = 76;   
   inputs1177[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1177, sizeof(INPUT));
   
   INPUT inputs1178[2] = {};   
   ZeroMemory(inputs1178, sizeof(inputs1178));
   
   inputs1178[0].type = INPUT_KEYBOARD;   
   inputs1178[0].ki.wVk = 83;
   
   inputs1178[1].type = INPUT_KEYBOARD;   
   inputs1178[1].ki.wVk = 83;   
   inputs1178[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1178, sizeof(INPUT));
   
   INPUT inputs1179[2] = {};   
   ZeroMemory(inputs1179, sizeof(inputs1179));
   
   inputs1179[0].type = INPUT_KEYBOARD;   
   inputs1179[0].ki.wVk = 190;
   
   inputs1179[1].type = INPUT_KEYBOARD;   
   inputs1179[1].ki.wVk = 190;   
   inputs1179[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1179, sizeof(INPUT));
   
   INPUT inputs1180[2] = {};   
   ZeroMemory(inputs1180, sizeof(inputs1180));
   
   inputs1180[0].type = INPUT_KEYBOARD;   
   inputs1180[0].ki.wVk = 80;
   
   inputs1180[1].type = INPUT_KEYBOARD;   
   inputs1180[1].ki.wVk = 80;   
   inputs1180[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1180, sizeof(INPUT));
   
   INPUT inputs1181[2] = {};   
   ZeroMemory(inputs1181, sizeof(inputs1181));
   
   inputs1181[0].type = INPUT_KEYBOARD;   
   inputs1181[0].ki.wVk = 76;
   
   inputs1181[1].type = INPUT_KEYBOARD;   
   inputs1181[1].ki.wVk = 76;   
   inputs1181[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1181, sizeof(INPUT));
   
   INPUT inputs1182[2] = {};   
   ZeroMemory(inputs1182, sizeof(inputs1182));
   
   inputs1182[0].type = INPUT_KEYBOARD;   
   inputs1182[0].ki.wVk = 65;
   
   inputs1182[1].type = INPUT_KEYBOARD;   
   inputs1182[1].ki.wVk = 65;   
   inputs1182[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1182, sizeof(INPUT));
   
   INPUT inputs1183[2] = {};   
   ZeroMemory(inputs1183, sizeof(inputs1183));
   
   inputs1183[0].type = INPUT_KEYBOARD;   
   inputs1183[0].ki.wVk = 89;
   
   inputs1183[1].type = INPUT_KEYBOARD;   
   inputs1183[1].ki.wVk = 89;   
   inputs1183[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1183, sizeof(INPUT));
   
   INPUT inputs1184[2] = {};   
   ZeroMemory(inputs1184, sizeof(inputs1184));
   
   inputs1184[0].type = INPUT_KEYBOARD;   
   inputs1184[0].ki.wVk = 32;
   
   inputs1184[1].type = INPUT_KEYBOARD;   
   inputs1184[1].ki.wVk = 32;   
   inputs1184[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1184, sizeof(INPUT));
   
   INPUT inputs1185[2] = {};   
   ZeroMemory(inputs1185, sizeof(inputs1185));
   
   inputs1185[0].type = INPUT_KEYBOARD;   
   inputs1185[0].ki.wVk = 190;
   
   inputs1185[1].type = INPUT_KEYBOARD;   
   inputs1185[1].ki.wVk = 190;   
   inputs1185[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1185, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1186[2] = {};   
   ZeroMemory(inputs1186, sizeof(inputs1186));
   
   inputs1186[0].type = INPUT_KEYBOARD;   
   inputs1186[0].ki.wVk = 190;
   
   inputs1186[1].type = INPUT_KEYBOARD;   
   inputs1186[1].ki.wVk = 190;   
   inputs1186[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1186, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1187[2] = {};   
   ZeroMemory(inputs1187, sizeof(inputs1187));
   
   inputs1187[0].type = INPUT_KEYBOARD;   
   inputs1187[0].ki.wVk = 32;
   
   inputs1187[1].type = INPUT_KEYBOARD;   
   inputs1187[1].ki.wVk = 32;   
   inputs1187[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1187, sizeof(INPUT));
   
   INPUT inputs1188[2] = {};   
   ZeroMemory(inputs1188, sizeof(inputs1188));
   
   inputs1188[0].type = INPUT_KEYBOARD;   
   inputs1188[0].ki.wVk = 82;
   
   inputs1188[1].type = INPUT_KEYBOARD;   
   inputs1188[1].ki.wVk = 82;   
   inputs1188[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1188, sizeof(INPUT));
   
   INPUT inputs1189[2] = {};   
   ZeroMemory(inputs1189, sizeof(inputs1189));
   
   inputs1189[0].type = INPUT_KEYBOARD;   
   inputs1189[0].ki.wVk = 73;
   
   inputs1189[1].type = INPUT_KEYBOARD;   
   inputs1189[1].ki.wVk = 73;   
   inputs1189[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1189, sizeof(INPUT));
   
   INPUT inputs1190[2] = {};   
   ZeroMemory(inputs1190, sizeof(inputs1190));
   
   inputs1190[0].type = INPUT_KEYBOARD;   
   inputs1190[0].ki.wVk = 67;
   
   inputs1190[1].type = INPUT_KEYBOARD;   
   inputs1190[1].ki.wVk = 67;   
   inputs1190[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1190, sizeof(INPUT));
   
   INPUT inputs1191[2] = {};   
   ZeroMemory(inputs1191, sizeof(inputs1191));
   
   inputs1191[0].type = INPUT_KEYBOARD;   
   inputs1191[0].ki.wVk = 75;
   
   inputs1191[1].type = INPUT_KEYBOARD;   
   inputs1191[1].ki.wVk = 75;   
   inputs1191[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1191, sizeof(INPUT));
   
   INPUT inputs1192[2] = {};   
   ZeroMemory(inputs1192, sizeof(inputs1192));
   
   inputs1192[0].type = INPUT_KEYBOARD;   
   inputs1192[0].ki.wVk = 82;
   
   inputs1192[1].type = INPUT_KEYBOARD;   
   inputs1192[1].ki.wVk = 82;   
   inputs1192[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1192, sizeof(INPUT));
   
   INPUT inputs1193[2] = {};   
   ZeroMemory(inputs1193, sizeof(inputs1193));
   
   inputs1193[0].type = INPUT_KEYBOARD;   
   inputs1193[0].ki.wVk = 79;
   
   inputs1193[1].type = INPUT_KEYBOARD;   
   inputs1193[1].ki.wVk = 79;   
   inputs1193[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1193, sizeof(INPUT));
   
   INPUT inputs1194[2] = {};   
   ZeroMemory(inputs1194, sizeof(inputs1194));
   
   inputs1194[0].type = INPUT_KEYBOARD;   
   inputs1194[0].ki.wVk = 76;
   
   inputs1194[1].type = INPUT_KEYBOARD;   
   inputs1194[1].ki.wVk = 76;   
   inputs1194[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1194, sizeof(INPUT));
   
   INPUT inputs1195[2] = {};   
   ZeroMemory(inputs1195, sizeof(inputs1195));
   
   inputs1195[0].type = INPUT_KEYBOARD;   
   inputs1195[0].ki.wVk = 76;
   
   inputs1195[1].type = INPUT_KEYBOARD;   
   inputs1195[1].ki.wVk = 76;   
   inputs1195[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1195, sizeof(INPUT));
   
   INPUT inputs1196[2] = {};   
   ZeroMemory(inputs1196, sizeof(inputs1196));
   
   inputs1196[0].type = INPUT_KEYBOARD;   
   inputs1196[0].ki.wVk = 190;
   
   inputs1196[1].type = INPUT_KEYBOARD;   
   inputs1196[1].ki.wVk = 190;   
   inputs1196[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1196, sizeof(INPUT));
   
   INPUT inputs1197[2] = {};   
   ZeroMemory(inputs1197, sizeof(inputs1197));
   
   inputs1197[0].type = INPUT_KEYBOARD;   
   inputs1197[0].ki.wVk = 86;
   
   inputs1197[1].type = INPUT_KEYBOARD;   
   inputs1197[1].ki.wVk = 86;   
   inputs1197[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1197, sizeof(INPUT));
   
   INPUT inputs1198[2] = {};   
   ZeroMemory(inputs1198, sizeof(inputs1198));
   
   inputs1198[0].type = INPUT_KEYBOARD;   
   inputs1198[0].ki.wVk = 66;
   
   inputs1198[1].type = INPUT_KEYBOARD;   
   inputs1198[1].ki.wVk = 66;   
   inputs1198[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1198, sizeof(INPUT));
   
   INPUT inputs1199[2] = {};   
   ZeroMemory(inputs1199, sizeof(inputs1199));
   
   inputs1199[0].type = INPUT_KEYBOARD;   
   inputs1199[0].ki.wVk = 83;
   
   inputs1199[1].type = INPUT_KEYBOARD;   
   inputs1199[1].ki.wVk = 83;   
   inputs1199[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1199, sizeof(INPUT));
   
   INPUT inputs1200[2] = {};   
   ZeroMemory(inputs1200, sizeof(inputs1200));
   
   inputs1200[0].type = INPUT_KEYBOARD;   
   inputs1200[0].ki.wVk = 32;
   
   inputs1200[1].type = INPUT_KEYBOARD;   
   inputs1200[1].ki.wVk = 32;   
   inputs1200[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1200, sizeof(INPUT));
   
   INPUT inputs1201[2] = {};   
   ZeroMemory(inputs1201, sizeof(inputs1201));
   
   inputs1201[0].type = INPUT_KEYBOARD;   
   inputs1201[0].ki.wVk = 54;
   
   inputs1201[1].type = INPUT_KEYBOARD;   
   inputs1201[1].ki.wVk = 54;   
   inputs1201[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1201, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1202[2] = {};   
   ZeroMemory(inputs1202, sizeof(inputs1202));
   
   inputs1202[0].type = INPUT_KEYBOARD;   
   inputs1202[0].ki.wVk = 32;
   
   inputs1202[1].type = INPUT_KEYBOARD;   
   inputs1202[1].ki.wVk = 32;   
   inputs1202[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1202, sizeof(INPUT));
   
   INPUT inputs1203[2] = {};   
   ZeroMemory(inputs1203, sizeof(inputs1203));
   
   inputs1203[0].type = INPUT_KEYBOARD;   
   inputs1203[0].ki.wVk = 69;
   
   inputs1203[1].type = INPUT_KEYBOARD;   
   inputs1203[1].ki.wVk = 69;   
   inputs1203[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1203, sizeof(INPUT));
   
   INPUT inputs1204[2] = {};   
   ZeroMemory(inputs1204, sizeof(inputs1204));
   
   inputs1204[0].type = INPUT_KEYBOARD;   
   inputs1204[0].ki.wVk = 67;
   
   inputs1204[1].type = INPUT_KEYBOARD;   
   inputs1204[1].ki.wVk = 67;   
   inputs1204[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1204, sizeof(INPUT));
   
   INPUT inputs1205[2] = {};   
   ZeroMemory(inputs1205, sizeof(inputs1205));
   
   inputs1205[0].type = INPUT_KEYBOARD;   
   inputs1205[0].ki.wVk = 72;
   
   inputs1205[1].type = INPUT_KEYBOARD;   
   inputs1205[1].ki.wVk = 72;   
   inputs1205[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1205, sizeof(INPUT));
   
   INPUT inputs1206[2] = {};   
   ZeroMemory(inputs1206, sizeof(inputs1206));
   
   inputs1206[0].type = INPUT_KEYBOARD;   
   inputs1206[0].ki.wVk = 79;
   
   inputs1206[1].type = INPUT_KEYBOARD;   
   inputs1206[1].ki.wVk = 79;   
   inputs1206[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1206, sizeof(INPUT));
   
   INPUT inputs1207[2] = {};   
   ZeroMemory(inputs1207, sizeof(inputs1207));
   
   inputs1207[0].type = INPUT_KEYBOARD;   
   inputs1207[0].ki.wVk = 32;
   
   inputs1207[1].type = INPUT_KEYBOARD;   
   inputs1207[1].ki.wVk = 32;   
   inputs1207[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1207, sizeof(INPUT));
   
   INPUT inputs1208[2] = {};   
   ZeroMemory(inputs1208, sizeof(inputs1208));
   
   inputs1208[0].type = INPUT_KEYBOARD;   
   inputs1208[0].ki.wVk = 87;
   
   inputs1208[1].type = INPUT_KEYBOARD;   
   inputs1208[1].ki.wVk = 87;   
   inputs1208[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1208, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1209[2] = {};   
   ZeroMemory(inputs1209, sizeof(inputs1209));
   
   inputs1209[0].type = INPUT_KEYBOARD;   
   inputs1209[0].ki.wVk = 72;
   
   inputs1209[1].type = INPUT_KEYBOARD;   
   inputs1209[1].ki.wVk = 72;   
   inputs1209[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1209, sizeof(INPUT));
   
   INPUT inputs1210[2] = {};   
   ZeroMemory(inputs1210, sizeof(inputs1210));
   
   inputs1210[0].type = INPUT_KEYBOARD;   
   inputs1210[0].ki.wVk = 73;
   
   inputs1210[1].type = INPUT_KEYBOARD;   
   inputs1210[1].ki.wVk = 73;   
   inputs1210[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1210, sizeof(INPUT));
   
   INPUT inputs1211[2] = {};   
   ZeroMemory(inputs1211, sizeof(inputs1211));
   
   inputs1211[0].type = INPUT_KEYBOARD;   
   inputs1211[0].ki.wVk = 76;
   
   inputs1211[1].type = INPUT_KEYBOARD;   
   inputs1211[1].ki.wVk = 76;   
   inputs1211[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1211, sizeof(INPUT));
   
   INPUT inputs1212[2] = {};   
   ZeroMemory(inputs1212, sizeof(inputs1212));
   
   inputs1212[0].type = INPUT_KEYBOARD;   
   inputs1212[0].ki.wVk = 69;
   
   inputs1212[1].type = INPUT_KEYBOARD;   
   inputs1212[1].ki.wVk = 69;   
   inputs1212[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1212, sizeof(INPUT));
   
   INPUT inputs1213[2] = {};   
   ZeroMemory(inputs1213, sizeof(inputs1213));
   
   inputs1213[0].type = INPUT_KEYBOARD;   
   inputs1213[0].ki.wVk = 32;
   
   inputs1213[1].type = INPUT_KEYBOARD;   
   inputs1213[1].ki.wVk = 32;   
   inputs1213[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1213, sizeof(INPUT));
   
   INPUT inputs1214[2] = {};   
   ZeroMemory(inputs1214, sizeof(inputs1214));
   
   inputs1214[0].type = INPUT_KEYBOARD;   
   inputs1214[0].ki.wVk = 79;
   
   inputs1214[1].type = INPUT_KEYBOARD;   
   inputs1214[1].ki.wVk = 79;   
   inputs1214[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1214, sizeof(INPUT));
   
   INPUT inputs1215[2] = {};   
   ZeroMemory(inputs1215, sizeof(inputs1215));
   
   inputs1215[0].type = INPUT_KEYBOARD;   
   inputs1215[0].ki.wVk = 80;
   
   inputs1215[1].type = INPUT_KEYBOARD;   
   inputs1215[1].ki.wVk = 80;   
   inputs1215[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1215, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1216[2] = {};   
   ZeroMemory(inputs1216, sizeof(inputs1216));
   
   inputs1216[0].type = INPUT_KEYBOARD;   
   inputs1216[0].ki.wVk = 76;
   
   inputs1216[1].type = INPUT_KEYBOARD;   
   inputs1216[1].ki.wVk = 76;   
   inputs1216[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1216, sizeof(INPUT));
   
   INPUT inputs1217[2] = {};   
   ZeroMemory(inputs1217, sizeof(inputs1217));
   
   inputs1217[0].type = INPUT_KEYBOARD;   
   inputs1217[0].ki.wVk = 65;
   
   inputs1217[1].type = INPUT_KEYBOARD;   
   inputs1217[1].ki.wVk = 65;   
   inputs1217[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1217, sizeof(INPUT));
   
   INPUT inputs1218[2] = {};   
   ZeroMemory(inputs1218, sizeof(inputs1218));
   
   inputs1218[0].type = INPUT_KEYBOARD;   
   inputs1218[0].ki.wVk = 89;
   
   inputs1218[1].type = INPUT_KEYBOARD;   
   inputs1218[1].ki.wVk = 89;   
   inputs1218[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1218, sizeof(INPUT));
   
   INPUT inputs1219[2] = {};   
   ZeroMemory(inputs1219, sizeof(inputs1219));
   
   inputs1219[0].type = INPUT_KEYBOARD;   
   inputs1219[0].ki.wVk = 69;
   
   inputs1219[1].type = INPUT_KEYBOARD;   
   inputs1219[1].ki.wVk = 69;   
   inputs1219[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1219, sizeof(INPUT));
   
   INPUT inputs1220[2] = {};   
   ZeroMemory(inputs1220, sizeof(inputs1220));
   
   inputs1220[0].type = INPUT_KEYBOARD;   
   inputs1220[0].ki.wVk = 82;
   
   inputs1220[1].type = INPUT_KEYBOARD;   
   inputs1220[1].ki.wVk = 82;   
   inputs1220[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1220, sizeof(INPUT));
   
   INPUT inputs1221[2] = {};   
   ZeroMemory(inputs1221, sizeof(inputs1221));
   
   inputs1221[0].type = INPUT_KEYBOARD;   
   inputs1221[0].ki.wVk = 190;
   
   inputs1221[1].type = INPUT_KEYBOARD;   
   inputs1221[1].ki.wVk = 190;   
   inputs1221[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1221, sizeof(INPUT));
   
   INPUT inputs1222[2] = {};   
   ZeroMemory(inputs1222, sizeof(inputs1222));
   
   inputs1222[0].type = INPUT_KEYBOARD;   
   inputs1222[0].ki.wVk = 80;
   
   inputs1222[1].type = INPUT_KEYBOARD;   
   inputs1222[1].ki.wVk = 80;   
   inputs1222[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1222, sizeof(INPUT));
   
   INPUT inputs1223[2] = {};   
   ZeroMemory(inputs1223, sizeof(inputs1223));
   
   inputs1223[0].type = INPUT_KEYBOARD;   
   inputs1223[0].ki.wVk = 76;
   
   inputs1223[1].type = INPUT_KEYBOARD;   
   inputs1223[1].ki.wVk = 76;   
   inputs1223[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1223, sizeof(INPUT));
   
   INPUT inputs1224[2] = {};   
   ZeroMemory(inputs1224, sizeof(inputs1224));
   
   inputs1224[0].type = INPUT_KEYBOARD;   
   inputs1224[0].ki.wVk = 65;
   
   inputs1224[1].type = INPUT_KEYBOARD;   
   inputs1224[1].ki.wVk = 65;   
   inputs1224[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1224, sizeof(INPUT));
   
   INPUT inputs1225[2] = {};   
   ZeroMemory(inputs1225, sizeof(inputs1225));
   
   inputs1225[0].type = INPUT_KEYBOARD;   
   inputs1225[0].ki.wVk = 89;
   
   inputs1225[1].type = INPUT_KEYBOARD;   
   inputs1225[1].ki.wVk = 89;   
   inputs1225[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1225, sizeof(INPUT));
   
   INPUT inputs1226[2] = {};   
   ZeroMemory(inputs1226, sizeof(inputs1226));
   
   inputs1226[0].type = INPUT_KEYBOARD;   
   inputs1226[0].ki.wVk = 83;
   
   inputs1226[1].type = INPUT_KEYBOARD;   
   inputs1226[1].ki.wVk = 83;   
   inputs1226[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1226, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1227[2] = {};   
   ZeroMemory(inputs1227, sizeof(inputs1227));
   
   inputs1227[0].type = INPUT_KEYBOARD;   
   inputs1227[0].ki.wVk = 84;
   
   inputs1227[1].type = INPUT_KEYBOARD;   
   inputs1227[1].ki.wVk = 84;   
   inputs1227[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1227, sizeof(INPUT));
   
   INPUT inputs1228[2] = {};   
   ZeroMemory(inputs1228, sizeof(inputs1228));
   
   inputs1228[0].type = INPUT_KEYBOARD;   
   inputs1228[0].ki.wVk = 65;
   
   inputs1228[1].type = INPUT_KEYBOARD;   
   inputs1228[1].ki.wVk = 65;   
   inputs1228[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1228, sizeof(INPUT));
   
   INPUT inputs1229[2] = {};   
   ZeroMemory(inputs1229, sizeof(inputs1229));
   
   inputs1229[0].type = INPUT_KEYBOARD;   
   inputs1229[0].ki.wVk = 84;
   
   inputs1229[1].type = INPUT_KEYBOARD;   
   inputs1229[1].ki.wVk = 84;   
   inputs1229[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1229, sizeof(INPUT));
   
   INPUT inputs1230[2] = {};   
   ZeroMemory(inputs1230, sizeof(inputs1230));
   
   inputs1230[0].type = INPUT_KEYBOARD;   
   inputs1230[0].ki.wVk = 69;
   
   inputs1230[1].type = INPUT_KEYBOARD;   
   inputs1230[1].ki.wVk = 69;   
   inputs1230[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1230, sizeof(INPUT));
   
   INPUT inputs1231[2] = {};   
   ZeroMemory(inputs1231, sizeof(inputs1231));
   
   inputs1231[0].type = INPUT_KEYBOARD;   
   inputs1231[0].ki.wVk = 32;
   
   inputs1231[1].type = INPUT_KEYBOARD;   
   inputs1231[1].ki.wVk = 32;   
   inputs1231[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1231, sizeof(INPUT));
   
   INPUT inputs1232[2] = {};   
   ZeroMemory(inputs1232, sizeof(inputs1232));
   
   inputs1232[0].type = INPUT_KEYBOARD;   
   inputs1232[0].ki.wVk = 51;
   
   inputs1232[1].type = INPUT_KEYBOARD;   
   inputs1232[1].ki.wVk = 51;   
   inputs1232[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1232, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1233[2] = {};   
   ZeroMemory(inputs1233, sizeof(inputs1233));
   
   inputs1233[0].type = INPUT_KEYBOARD;   
   inputs1233[0].ki.wVk = 188;
   
   inputs1233[1].type = INPUT_KEYBOARD;   
   inputs1233[1].ki.wVk = 188;   
   inputs1233[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1233, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1234[2] = {};   
   ZeroMemory(inputs1234, sizeof(inputs1234));
   
   inputs1234[0].type = INPUT_KEYBOARD;   
   inputs1234[0].ki.wVk = 51;
   
   inputs1234[1].type = INPUT_KEYBOARD;   
   inputs1234[1].ki.wVk = 51;   
   inputs1234[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1234, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1235[2] = {};   
   ZeroMemory(inputs1235, sizeof(inputs1235));
   
   inputs1235[0].type = INPUT_KEYBOARD;   
   inputs1235[0].ki.wVk = 190;
   
   inputs1235[1].type = INPUT_KEYBOARD;   
   inputs1235[1].ki.wVk = 190;   
   inputs1235[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1235, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1236[2] = {};   
   ZeroMemory(inputs1236, sizeof(inputs1236));
   
   inputs1236[0].type = INPUT_KEYBOARD;   
   inputs1236[0].ki.wVk = 32;
   
   inputs1236[1].type = INPUT_KEYBOARD;   
   inputs1236[1].ki.wVk = 32;   
   inputs1236[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1236, sizeof(INPUT));
   
   INPUT inputs1237[2] = {};   
   ZeroMemory(inputs1237, sizeof(inputs1237));
   
   inputs1237[0].type = INPUT_KEYBOARD;   
   inputs1237[0].ki.wVk = 49;
   
   inputs1237[1].type = INPUT_KEYBOARD;   
   inputs1237[1].ki.wVk = 49;   
   inputs1237[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1237, sizeof(INPUT));
   
   INPUT inputs1238[2] = {};   
   ZeroMemory(inputs1238, sizeof(inputs1238));
   
   inputs1238[0].type = INPUT_KEYBOARD;   
   inputs1238[0].ki.wVk = 32;
   
   inputs1238[1].type = INPUT_KEYBOARD;   
   inputs1238[1].ki.wVk = 32;   
   inputs1238[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1238, sizeof(INPUT));
   
   INPUT inputs1239[2] = {};   
   ZeroMemory(inputs1239, sizeof(inputs1239));
   
   inputs1239[0].type = INPUT_KEYBOARD;   
   inputs1239[0].ki.wVk = 190;
   
   inputs1239[1].type = INPUT_KEYBOARD;   
   inputs1239[1].ki.wVk = 190;   
   inputs1239[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1239, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1240[2] = {};   
   ZeroMemory(inputs1240, sizeof(inputs1240));
   
   inputs1240[0].type = INPUT_KEYBOARD;   
   inputs1240[0].ki.wVk = 190;
   
   inputs1240[1].type = INPUT_KEYBOARD;   
   inputs1240[1].ki.wVk = 190;   
   inputs1240[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1240, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1241[2] = {};   
   ZeroMemory(inputs1241, sizeof(inputs1241));
   
   inputs1241[0].type = INPUT_KEYBOARD;   
   inputs1241[0].ki.wVk = 32;
   
   inputs1241[1].type = INPUT_KEYBOARD;   
   inputs1241[1].ki.wVk = 32;   
   inputs1241[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1241, sizeof(INPUT));
   
   INPUT inputs1242[2] = {};   
   ZeroMemory(inputs1242, sizeof(inputs1242));
   
   inputs1242[0].type = INPUT_KEYBOARD;   
   inputs1242[0].ki.wVk = 82;
   
   inputs1242[1].type = INPUT_KEYBOARD;   
   inputs1242[1].ki.wVk = 82;   
   inputs1242[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1242, sizeof(INPUT));
   
   INPUT inputs1243[2] = {};   
   ZeroMemory(inputs1243, sizeof(inputs1243));
   
   inputs1243[0].type = INPUT_KEYBOARD;   
   inputs1243[0].ki.wVk = 73;
   
   inputs1243[1].type = INPUT_KEYBOARD;   
   inputs1243[1].ki.wVk = 73;   
   inputs1243[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1243, sizeof(INPUT));
   
   INPUT inputs1244[2] = {};   
   ZeroMemory(inputs1244, sizeof(inputs1244));
   
   inputs1244[0].type = INPUT_KEYBOARD;   
   inputs1244[0].ki.wVk = 67;
   
   inputs1244[1].type = INPUT_KEYBOARD;   
   inputs1244[1].ki.wVk = 67;   
   inputs1244[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1244, sizeof(INPUT));
   
   INPUT inputs1245[2] = {};   
   ZeroMemory(inputs1245, sizeof(inputs1245));
   
   inputs1245[0].type = INPUT_KEYBOARD;   
   inputs1245[0].ki.wVk = 75;
   
   inputs1245[1].type = INPUT_KEYBOARD;   
   inputs1245[1].ki.wVk = 75;   
   inputs1245[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1245, sizeof(INPUT));
   
   INPUT inputs1246[2] = {};   
   ZeroMemory(inputs1246, sizeof(inputs1246));
   
   inputs1246[0].type = INPUT_KEYBOARD;   
   inputs1246[0].ki.wVk = 82;
   
   inputs1246[1].type = INPUT_KEYBOARD;   
   inputs1246[1].ki.wVk = 82;   
   inputs1246[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1246, sizeof(INPUT));
   
   INPUT inputs1247[2] = {};   
   ZeroMemory(inputs1247, sizeof(inputs1247));
   
   inputs1247[0].type = INPUT_KEYBOARD;   
   inputs1247[0].ki.wVk = 79;
   
   inputs1247[1].type = INPUT_KEYBOARD;   
   inputs1247[1].ki.wVk = 79;   
   inputs1247[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1247, sizeof(INPUT));
   
   INPUT inputs1248[2] = {};   
   ZeroMemory(inputs1248, sizeof(inputs1248));
   
   inputs1248[0].type = INPUT_KEYBOARD;   
   inputs1248[0].ki.wVk = 76;
   
   inputs1248[1].type = INPUT_KEYBOARD;   
   inputs1248[1].ki.wVk = 76;   
   inputs1248[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1248, sizeof(INPUT));
   
   INPUT inputs1249[2] = {};   
   ZeroMemory(inputs1249, sizeof(inputs1249));
   
   inputs1249[0].type = INPUT_KEYBOARD;   
   inputs1249[0].ki.wVk = 76;
   
   inputs1249[1].type = INPUT_KEYBOARD;   
   inputs1249[1].ki.wVk = 76;   
   inputs1249[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1249, sizeof(INPUT));
   
   INPUT inputs1250[2] = {};   
   ZeroMemory(inputs1250, sizeof(inputs1250));
   
   inputs1250[0].type = INPUT_KEYBOARD;   
   inputs1250[0].ki.wVk = 190;
   
   inputs1250[1].type = INPUT_KEYBOARD;   
   inputs1250[1].ki.wVk = 190;   
   inputs1250[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1250, sizeof(INPUT));
   
   INPUT inputs1251[2] = {};   
   ZeroMemory(inputs1251, sizeof(inputs1251));
   
   inputs1251[0].type = INPUT_KEYBOARD;   
   inputs1251[0].ki.wVk = 86;
   
   inputs1251[1].type = INPUT_KEYBOARD;   
   inputs1251[1].ki.wVk = 86;   
   inputs1251[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1251, sizeof(INPUT));
   
   INPUT inputs1252[2] = {};   
   ZeroMemory(inputs1252, sizeof(inputs1252));
   
   inputs1252[0].type = INPUT_KEYBOARD;   
   inputs1252[0].ki.wVk = 66;
   
   inputs1252[1].type = INPUT_KEYBOARD;   
   inputs1252[1].ki.wVk = 66;   
   inputs1252[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1252, sizeof(INPUT));
   
   INPUT inputs1253[2] = {};   
   ZeroMemory(inputs1253, sizeof(inputs1253));
   
   inputs1253[0].type = INPUT_KEYBOARD;   
   inputs1253[0].ki.wVk = 83;
   
   inputs1253[1].type = INPUT_KEYBOARD;   
   inputs1253[1].ki.wVk = 83;   
   inputs1253[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1253, sizeof(INPUT));
   
   INPUT inputs1254[2] = {};   
   ZeroMemory(inputs1254, sizeof(inputs1254));
   
   inputs1254[0].type = INPUT_KEYBOARD;   
   inputs1254[0].ki.wVk = 32;
   
   inputs1254[1].type = INPUT_KEYBOARD;   
   inputs1254[1].ki.wVk = 32;   
   inputs1254[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1254, sizeof(INPUT));
   
   INPUT inputs1255[2] = {};   
   ZeroMemory(inputs1255, sizeof(inputs1255));
   
   inputs1255[0].type = INPUT_KEYBOARD;   
   inputs1255[0].ki.wVk = 54;
   
   inputs1255[1].type = INPUT_KEYBOARD;   
   inputs1255[1].ki.wVk = 54;   
   inputs1255[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1255, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1256[2] = {};   
   ZeroMemory(inputs1256, sizeof(inputs1256));
   
   inputs1256[0].type = INPUT_KEYBOARD;   
   inputs1256[0].ki.wVk = 32;
   
   inputs1256[1].type = INPUT_KEYBOARD;   
   inputs1256[1].ki.wVk = 32;   
   inputs1256[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1256, sizeof(INPUT));
   
   INPUT inputs1257[2] = {};   
   ZeroMemory(inputs1257, sizeof(inputs1257));
   
   inputs1257[0].type = INPUT_KEYBOARD;   
   inputs1257[0].ki.wVk = 69;
   
   inputs1257[1].type = INPUT_KEYBOARD;   
   inputs1257[1].ki.wVk = 69;   
   inputs1257[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1257, sizeof(INPUT));
   
   INPUT inputs1258[2] = {};   
   ZeroMemory(inputs1258, sizeof(inputs1258));
   
   inputs1258[0].type = INPUT_KEYBOARD;   
   inputs1258[0].ki.wVk = 67;
   
   inputs1258[1].type = INPUT_KEYBOARD;   
   inputs1258[1].ki.wVk = 67;   
   inputs1258[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1258, sizeof(INPUT));
   
   INPUT inputs1259[2] = {};   
   ZeroMemory(inputs1259, sizeof(inputs1259));
   
   inputs1259[0].type = INPUT_KEYBOARD;   
   inputs1259[0].ki.wVk = 72;
   
   inputs1259[1].type = INPUT_KEYBOARD;   
   inputs1259[1].ki.wVk = 72;   
   inputs1259[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1259, sizeof(INPUT));
   
   INPUT inputs1260[2] = {};   
   ZeroMemory(inputs1260, sizeof(inputs1260));
   
   inputs1260[0].type = INPUT_KEYBOARD;   
   inputs1260[0].ki.wVk = 79;
   
   inputs1260[1].type = INPUT_KEYBOARD;   
   inputs1260[1].ki.wVk = 79;   
   inputs1260[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1260, sizeof(INPUT));
   
   INPUT inputs1261[2] = {};   
   ZeroMemory(inputs1261, sizeof(inputs1261));
   
   inputs1261[0].type = INPUT_KEYBOARD;   
   inputs1261[0].ki.wVk = 32;
   
   inputs1261[1].type = INPUT_KEYBOARD;   
   inputs1261[1].ki.wVk = 32;   
   inputs1261[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1261, sizeof(INPUT));
   
   INPUT inputs1262[2] = {};   
   ZeroMemory(inputs1262, sizeof(inputs1262));
   
   inputs1262[0].type = INPUT_KEYBOARD;   
   inputs1262[0].ki.wVk = 32;
   
   inputs1262[1].type = INPUT_KEYBOARD;   
   inputs1262[1].ki.wVk = 32;   
   inputs1262[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1262, sizeof(INPUT));
   
   INPUT inputs1263[2] = {};   
   ZeroMemory(inputs1263, sizeof(inputs1263));
   
   inputs1263[0].type = INPUT_KEYBOARD;   
   inputs1263[0].ki.wVk = 32;
   
   inputs1263[1].type = INPUT_KEYBOARD;   
   inputs1263[1].ki.wVk = 32;   
   inputs1263[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1263, sizeof(INPUT));
   
   INPUT inputs1264[2] = {};   
   ZeroMemory(inputs1264, sizeof(inputs1264));
   
   inputs1264[0].type = INPUT_KEYBOARD;   
   inputs1264[0].ki.wVk = 87;
   
   inputs1264[1].type = INPUT_KEYBOARD;   
   inputs1264[1].ki.wVk = 87;   
   inputs1264[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1264, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1265[2] = {};   
   ZeroMemory(inputs1265, sizeof(inputs1265));
   
   inputs1265[0].type = INPUT_KEYBOARD;   
   inputs1265[0].ki.wVk = 83;
   
   inputs1265[1].type = INPUT_KEYBOARD;   
   inputs1265[1].ki.wVk = 83;   
   inputs1265[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1265, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1266[2] = {};   
   ZeroMemory(inputs1266, sizeof(inputs1266));
   
   inputs1266[0].type = INPUT_KEYBOARD;   
   inputs1266[0].ki.wVk = 67;
   
   inputs1266[1].type = INPUT_KEYBOARD;   
   inputs1266[1].ki.wVk = 67;   
   inputs1266[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1266, sizeof(INPUT));
   
   INPUT inputs1267[2] = {};   
   ZeroMemory(inputs1267, sizeof(inputs1267));
   
   inputs1267[0].type = INPUT_KEYBOARD;   
   inputs1267[0].ki.wVk = 82;
   
   inputs1267[1].type = INPUT_KEYBOARD;   
   inputs1267[1].ki.wVk = 82;   
   inputs1267[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1267, sizeof(INPUT));
   
   INPUT inputs1268[2] = {};   
   ZeroMemory(inputs1268, sizeof(inputs1268));
   
   inputs1268[0].type = INPUT_KEYBOARD;   
   inputs1268[0].ki.wVk = 73;
   
   inputs1268[1].type = INPUT_KEYBOARD;   
   inputs1268[1].ki.wVk = 73;   
   inputs1268[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1268, sizeof(INPUT));
   
   INPUT inputs1269[2] = {};   
   ZeroMemory(inputs1269, sizeof(inputs1269));
   
   inputs1269[0].type = INPUT_KEYBOARD;   
   inputs1269[0].ki.wVk = 80;
   
   inputs1269[1].type = INPUT_KEYBOARD;   
   inputs1269[1].ki.wVk = 80;   
   inputs1269[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1269, sizeof(INPUT));
   
   INPUT inputs1270[2] = {};   
   ZeroMemory(inputs1270, sizeof(inputs1270));
   
   inputs1270[0].type = INPUT_KEYBOARD;   
   inputs1270[0].ki.wVk = 84;
   
   inputs1270[1].type = INPUT_KEYBOARD;   
   inputs1270[1].ki.wVk = 84;   
   inputs1270[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1270, sizeof(INPUT));
   
   INPUT inputs1271[2] = {};   
   ZeroMemory(inputs1271, sizeof(inputs1271));
   
   inputs1271[0].type = INPUT_KEYBOARD;   
   inputs1271[0].ki.wVk = 190;
   
   inputs1271[1].type = INPUT_KEYBOARD;   
   inputs1271[1].ki.wVk = 190;   
   inputs1271[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1271, sizeof(INPUT));
   
   INPUT inputs1272[2] = {};   
   ZeroMemory(inputs1272, sizeof(inputs1272));
   
   inputs1272[0].type = INPUT_KEYBOARD;   
   inputs1272[0].ki.wVk = 83;
   
   inputs1272[1].type = INPUT_KEYBOARD;   
   inputs1272[1].ki.wVk = 83;   
   inputs1272[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1272, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1273[2] = {};   
   ZeroMemory(inputs1273, sizeof(inputs1273));
   
   inputs1273[0].type = INPUT_KEYBOARD;   
   inputs1273[0].ki.wVk = 76;
   
   inputs1273[1].type = INPUT_KEYBOARD;   
   inputs1273[1].ki.wVk = 76;   
   inputs1273[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1273, sizeof(INPUT));
   
   INPUT inputs1274[2] = {};   
   ZeroMemory(inputs1274, sizeof(inputs1274));
   
   inputs1274[0].type = INPUT_KEYBOARD;   
   inputs1274[0].ki.wVk = 69;
   
   inputs1274[1].type = INPUT_KEYBOARD;   
   inputs1274[1].ki.wVk = 69;   
   inputs1274[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1274, sizeof(INPUT));
   
   INPUT inputs1275[2] = {};   
   ZeroMemory(inputs1275, sizeof(inputs1275));
   
   inputs1275[0].type = INPUT_KEYBOARD;   
   inputs1275[0].ki.wVk = 69;
   
   inputs1275[1].type = INPUT_KEYBOARD;   
   inputs1275[1].ki.wVk = 69;   
   inputs1275[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1275, sizeof(INPUT));
   
   INPUT inputs1276[2] = {};   
   ZeroMemory(inputs1276, sizeof(inputs1276));
   
   inputs1276[0].type = INPUT_KEYBOARD;   
   inputs1276[0].ki.wVk = 80;
   
   inputs1276[1].type = INPUT_KEYBOARD;   
   inputs1276[1].ki.wVk = 80;   
   inputs1276[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1276, sizeof(INPUT));
   
   INPUT inputs1277[2] = {};   
   ZeroMemory(inputs1277, sizeof(inputs1277));
   
   inputs1277[0].type = INPUT_KEYBOARD;   
   inputs1277[0].ki.wVk = 32;
   
   inputs1277[1].type = INPUT_KEYBOARD;   
   inputs1277[1].ki.wVk = 32;   
   inputs1277[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1277, sizeof(INPUT));
   
   INPUT inputs1278[2] = {};   
   ZeroMemory(inputs1278, sizeof(inputs1278));
   
   inputs1278[0].type = INPUT_KEYBOARD;   
   inputs1278[0].ki.wVk = 49;
   
   inputs1278[1].type = INPUT_KEYBOARD;   
   inputs1278[1].ki.wVk = 49;   
   inputs1278[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1278, sizeof(INPUT));
   
   INPUT inputs1279[2] = {};   
   ZeroMemory(inputs1279, sizeof(inputs1279));
   
   inputs1279[0].type = INPUT_KEYBOARD;   
   inputs1279[0].ki.wVk = 48;
   
   inputs1279[1].type = INPUT_KEYBOARD;   
   inputs1279[1].ki.wVk = 48;   
   inputs1279[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1279, sizeof(INPUT));
   
   INPUT inputs1280[2] = {};   
   ZeroMemory(inputs1280, sizeof(inputs1280));
   
   inputs1280[0].type = INPUT_KEYBOARD;   
   inputs1280[0].ki.wVk = 48;
   
   inputs1280[1].type = INPUT_KEYBOARD;   
   inputs1280[1].ki.wVk = 48;   
   inputs1280[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1280, sizeof(INPUT));
   
   INPUT inputs1281[2] = {};   
   ZeroMemory(inputs1281, sizeof(inputs1281));
   
   inputs1281[0].type = INPUT_KEYBOARD;   
   inputs1281[0].ki.wVk = 32;
   
   inputs1281[1].type = INPUT_KEYBOARD;   
   inputs1281[1].ki.wVk = 32;   
   inputs1281[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1281, sizeof(INPUT));
   
   INPUT inputs1282[2] = {};   
   ZeroMemory(inputs1282, sizeof(inputs1282));
   
   inputs1282[0].type = INPUT_KEYBOARD;   
   inputs1282[0].ki.wVk = 190;
   
   inputs1282[1].type = INPUT_KEYBOARD;   
   inputs1282[1].ki.wVk = 190;   
   inputs1282[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1282, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1283[2] = {};   
   ZeroMemory(inputs1283, sizeof(inputs1283));
   
   inputs1283[0].type = INPUT_KEYBOARD;   
   inputs1283[0].ki.wVk = 190;
   
   inputs1283[1].type = INPUT_KEYBOARD;   
   inputs1283[1].ki.wVk = 190;   
   inputs1283[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1283, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1284[2] = {};   
   ZeroMemory(inputs1284, sizeof(inputs1284));
   
   inputs1284[0].type = INPUT_KEYBOARD;   
   inputs1284[0].ki.wVk = 32;
   
   inputs1284[1].type = INPUT_KEYBOARD;   
   inputs1284[1].ki.wVk = 32;   
   inputs1284[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1284, sizeof(INPUT));
   
   INPUT inputs1285[2] = {};   
   ZeroMemory(inputs1285, sizeof(inputs1285));
   
   inputs1285[0].type = INPUT_KEYBOARD;   
   inputs1285[0].ki.wVk = 82;
   
   inputs1285[1].type = INPUT_KEYBOARD;   
   inputs1285[1].ki.wVk = 82;   
   inputs1285[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1285, sizeof(INPUT));
   
   INPUT inputs1286[2] = {};   
   ZeroMemory(inputs1286, sizeof(inputs1286));
   
   inputs1286[0].type = INPUT_KEYBOARD;   
   inputs1286[0].ki.wVk = 73;
   
   inputs1286[1].type = INPUT_KEYBOARD;   
   inputs1286[1].ki.wVk = 73;   
   inputs1286[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1286, sizeof(INPUT));
   
   INPUT inputs1287[2] = {};   
   ZeroMemory(inputs1287, sizeof(inputs1287));
   
   inputs1287[0].type = INPUT_KEYBOARD;   
   inputs1287[0].ki.wVk = 67;
   
   inputs1287[1].type = INPUT_KEYBOARD;   
   inputs1287[1].ki.wVk = 67;   
   inputs1287[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1287, sizeof(INPUT));
   
   INPUT inputs1288[2] = {};   
   ZeroMemory(inputs1288, sizeof(inputs1288));
   
   inputs1288[0].type = INPUT_KEYBOARD;   
   inputs1288[0].ki.wVk = 75;
   
   inputs1288[1].type = INPUT_KEYBOARD;   
   inputs1288[1].ki.wVk = 75;   
   inputs1288[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1288, sizeof(INPUT));
   
   INPUT inputs1289[2] = {};   
   ZeroMemory(inputs1289, sizeof(inputs1289));
   
   inputs1289[0].type = INPUT_KEYBOARD;   
   inputs1289[0].ki.wVk = 82;
   
   inputs1289[1].type = INPUT_KEYBOARD;   
   inputs1289[1].ki.wVk = 82;   
   inputs1289[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1289, sizeof(INPUT));
   
   INPUT inputs1290[2] = {};   
   ZeroMemory(inputs1290, sizeof(inputs1290));
   
   inputs1290[0].type = INPUT_KEYBOARD;   
   inputs1290[0].ki.wVk = 79;
   
   inputs1290[1].type = INPUT_KEYBOARD;   
   inputs1290[1].ki.wVk = 79;   
   inputs1290[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1290, sizeof(INPUT));
   
   INPUT inputs1291[2] = {};   
   ZeroMemory(inputs1291, sizeof(inputs1291));
   
   inputs1291[0].type = INPUT_KEYBOARD;   
   inputs1291[0].ki.wVk = 76;
   
   inputs1291[1].type = INPUT_KEYBOARD;   
   inputs1291[1].ki.wVk = 76;   
   inputs1291[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1291, sizeof(INPUT));
   
   INPUT inputs1292[2] = {};   
   ZeroMemory(inputs1292, sizeof(inputs1292));
   
   inputs1292[0].type = INPUT_KEYBOARD;   
   inputs1292[0].ki.wVk = 76;
   
   inputs1292[1].type = INPUT_KEYBOARD;   
   inputs1292[1].ki.wVk = 76;   
   inputs1292[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1292, sizeof(INPUT));
   
   INPUT inputs1293[2] = {};   
   ZeroMemory(inputs1293, sizeof(inputs1293));
   
   inputs1293[0].type = INPUT_KEYBOARD;   
   inputs1293[0].ki.wVk = 190;
   
   inputs1293[1].type = INPUT_KEYBOARD;   
   inputs1293[1].ki.wVk = 190;   
   inputs1293[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1293, sizeof(INPUT));
   
   INPUT inputs1294[2] = {};   
   ZeroMemory(inputs1294, sizeof(inputs1294));
   
   inputs1294[0].type = INPUT_KEYBOARD;   
   inputs1294[0].ki.wVk = 86;
   
   inputs1294[1].type = INPUT_KEYBOARD;   
   inputs1294[1].ki.wVk = 86;   
   inputs1294[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1294, sizeof(INPUT));
   
   INPUT inputs1295[2] = {};   
   ZeroMemory(inputs1295, sizeof(inputs1295));
   
   inputs1295[0].type = INPUT_KEYBOARD;   
   inputs1295[0].ki.wVk = 66;
   
   inputs1295[1].type = INPUT_KEYBOARD;   
   inputs1295[1].ki.wVk = 66;   
   inputs1295[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1295, sizeof(INPUT));
   
   INPUT inputs1296[2] = {};   
   ZeroMemory(inputs1296, sizeof(inputs1296));
   
   inputs1296[0].type = INPUT_KEYBOARD;   
   inputs1296[0].ki.wVk = 83;
   
   inputs1296[1].type = INPUT_KEYBOARD;   
   inputs1296[1].ki.wVk = 83;   
   inputs1296[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1296, sizeof(INPUT));
   
   INPUT inputs1297[2] = {};   
   ZeroMemory(inputs1297, sizeof(inputs1297));
   
   inputs1297[0].type = INPUT_KEYBOARD;   
   inputs1297[0].ki.wVk = 32;
   
   inputs1297[1].type = INPUT_KEYBOARD;   
   inputs1297[1].ki.wVk = 32;   
   inputs1297[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1297, sizeof(INPUT));
   
   INPUT inputs1298[2] = {};   
   ZeroMemory(inputs1298, sizeof(inputs1298));
   
   inputs1298[0].type = INPUT_KEYBOARD;   
   inputs1298[0].ki.wVk = 54;
   
   inputs1298[1].type = INPUT_KEYBOARD;   
   inputs1298[1].ki.wVk = 54;   
   inputs1298[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1298, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1299[2] = {};   
   ZeroMemory(inputs1299, sizeof(inputs1299));
   
   inputs1299[0].type = INPUT_KEYBOARD;   
   inputs1299[0].ki.wVk = 32;
   
   inputs1299[1].type = INPUT_KEYBOARD;   
   inputs1299[1].ki.wVk = 32;   
   inputs1299[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1299, sizeof(INPUT));
   
   INPUT inputs1300[2] = {};   
   ZeroMemory(inputs1300, sizeof(inputs1300));
   
   inputs1300[0].type = INPUT_KEYBOARD;   
   inputs1300[0].ki.wVk = 69;
   
   inputs1300[1].type = INPUT_KEYBOARD;   
   inputs1300[1].ki.wVk = 69;   
   inputs1300[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1300, sizeof(INPUT));
   
   INPUT inputs1301[2] = {};   
   ZeroMemory(inputs1301, sizeof(inputs1301));
   
   inputs1301[0].type = INPUT_KEYBOARD;   
   inputs1301[0].ki.wVk = 67;
   
   inputs1301[1].type = INPUT_KEYBOARD;   
   inputs1301[1].ki.wVk = 67;   
   inputs1301[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1301, sizeof(INPUT));
   
   INPUT inputs1302[2] = {};   
   ZeroMemory(inputs1302, sizeof(inputs1302));
   
   inputs1302[0].type = INPUT_KEYBOARD;   
   inputs1302[0].ki.wVk = 72;
   
   inputs1302[1].type = INPUT_KEYBOARD;   
   inputs1302[1].ki.wVk = 72;   
   inputs1302[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1302, sizeof(INPUT));
   
   INPUT inputs1303[2] = {};   
   ZeroMemory(inputs1303, sizeof(inputs1303));
   
   inputs1303[0].type = INPUT_KEYBOARD;   
   inputs1303[0].ki.wVk = 79;
   
   inputs1303[1].type = INPUT_KEYBOARD;   
   inputs1303[1].ki.wVk = 79;   
   inputs1303[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1303, sizeof(INPUT));
   
   INPUT inputs1304[2] = {};   
   ZeroMemory(inputs1304, sizeof(inputs1304));
   
   inputs1304[0].type = INPUT_KEYBOARD;   
   inputs1304[0].ki.wVk = 32;
   
   inputs1304[1].type = INPUT_KEYBOARD;   
   inputs1304[1].ki.wVk = 32;   
   inputs1304[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1304, sizeof(INPUT));
   
   INPUT inputs1305[2] = {};   
   ZeroMemory(inputs1305, sizeof(inputs1305));
   
   inputs1305[0].type = INPUT_KEYBOARD;   
   inputs1305[0].ki.wVk = 87;
   
   inputs1305[1].type = INPUT_KEYBOARD;   
   inputs1305[1].ki.wVk = 87;   
   inputs1305[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1305, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1306[2] = {};   
   ZeroMemory(inputs1306, sizeof(inputs1306));
   
   inputs1306[0].type = INPUT_KEYBOARD;   
   inputs1306[0].ki.wVk = 69;
   
   inputs1306[1].type = INPUT_KEYBOARD;   
   inputs1306[1].ki.wVk = 69;   
   inputs1306[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1306, sizeof(INPUT));
   
   INPUT inputs1307[2] = {};   
   ZeroMemory(inputs1307, sizeof(inputs1307));
   
   inputs1307[0].type = INPUT_KEYBOARD;   
   inputs1307[0].ki.wVk = 78;
   
   inputs1307[1].type = INPUT_KEYBOARD;   
   inputs1307[1].ki.wVk = 78;   
   inputs1307[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1307, sizeof(INPUT));
   
   INPUT inputs1308[2] = {};   
   ZeroMemory(inputs1308, sizeof(inputs1308));
   
   inputs1308[0].type = INPUT_KEYBOARD;   
   inputs1308[0].ki.wVk = 68;
   
   inputs1308[1].type = INPUT_KEYBOARD;   
   inputs1308[1].ki.wVk = 68;   
   inputs1308[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1308, sizeof(INPUT));
   
   INPUT inputs1309[2] = {};   
   ZeroMemory(inputs1309, sizeof(inputs1309));
   
   inputs1309[0].type = INPUT_KEYBOARD;   
   inputs1309[0].ki.wVk = 32;
   
   inputs1309[1].type = INPUT_KEYBOARD;   
   inputs1309[1].ki.wVk = 32;   
   inputs1309[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1309, sizeof(INPUT));
   
   INPUT inputs1310[2] = {};   
   ZeroMemory(inputs1310, sizeof(inputs1310));
   
   inputs1310[0].type = INPUT_KEYBOARD;   
   inputs1310[0].ki.wVk = 190;
   
   inputs1310[1].type = INPUT_KEYBOARD;   
   inputs1310[1].ki.wVk = 190;   
   inputs1310[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1310, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1311[2] = {};   
   ZeroMemory(inputs1311, sizeof(inputs1311));
   
   inputs1311[0].type = INPUT_KEYBOARD;   
   inputs1311[0].ki.wVk = 190;
   
   inputs1311[1].type = INPUT_KEYBOARD;   
   inputs1311[1].ki.wVk = 190;   
   inputs1311[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1311, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1312[2] = {};   
   ZeroMemory(inputs1312, sizeof(inputs1312));
   
   inputs1312[0].type = INPUT_KEYBOARD;   
   inputs1312[0].ki.wVk = 32;
   
   inputs1312[1].type = INPUT_KEYBOARD;   
   inputs1312[1].ki.wVk = 32;   
   inputs1312[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1312, sizeof(INPUT));
   
   INPUT inputs1313[2] = {};   
   ZeroMemory(inputs1313, sizeof(inputs1313));
   
   inputs1313[0].type = INPUT_KEYBOARD;   
   inputs1313[0].ki.wVk = 82;
   
   inputs1313[1].type = INPUT_KEYBOARD;   
   inputs1313[1].ki.wVk = 82;   
   inputs1313[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1313, sizeof(INPUT));
   
   INPUT inputs1314[2] = {};   
   ZeroMemory(inputs1314, sizeof(inputs1314));
   
   inputs1314[0].type = INPUT_KEYBOARD;   
   inputs1314[0].ki.wVk = 73;
   
   inputs1314[1].type = INPUT_KEYBOARD;   
   inputs1314[1].ki.wVk = 73;   
   inputs1314[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1314, sizeof(INPUT));
   
   INPUT inputs1315[2] = {};   
   ZeroMemory(inputs1315, sizeof(inputs1315));
   
   inputs1315[0].type = INPUT_KEYBOARD;   
   inputs1315[0].ki.wVk = 67;
   
   inputs1315[1].type = INPUT_KEYBOARD;   
   inputs1315[1].ki.wVk = 67;   
   inputs1315[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1315, sizeof(INPUT));
   
   INPUT inputs1316[2] = {};   
   ZeroMemory(inputs1316, sizeof(inputs1316));
   
   inputs1316[0].type = INPUT_KEYBOARD;   
   inputs1316[0].ki.wVk = 75;
   
   inputs1316[1].type = INPUT_KEYBOARD;   
   inputs1316[1].ki.wVk = 75;   
   inputs1316[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1316, sizeof(INPUT));
   
   INPUT inputs1317[2] = {};   
   ZeroMemory(inputs1317, sizeof(inputs1317));
   
   inputs1317[0].type = INPUT_KEYBOARD;   
   inputs1317[0].ki.wVk = 82;
   
   inputs1317[1].type = INPUT_KEYBOARD;   
   inputs1317[1].ki.wVk = 82;   
   inputs1317[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1317, sizeof(INPUT));
   
   INPUT inputs1318[2] = {};   
   ZeroMemory(inputs1318, sizeof(inputs1318));
   
   inputs1318[0].type = INPUT_KEYBOARD;   
   inputs1318[0].ki.wVk = 79;
   
   inputs1318[1].type = INPUT_KEYBOARD;   
   inputs1318[1].ki.wVk = 79;   
   inputs1318[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1318, sizeof(INPUT));
   
   INPUT inputs1319[2] = {};   
   ZeroMemory(inputs1319, sizeof(inputs1319));
   
   inputs1319[0].type = INPUT_KEYBOARD;   
   inputs1319[0].ki.wVk = 76;
   
   inputs1319[1].type = INPUT_KEYBOARD;   
   inputs1319[1].ki.wVk = 76;   
   inputs1319[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1319, sizeof(INPUT));
   
   INPUT inputs1320[2] = {};   
   ZeroMemory(inputs1320, sizeof(inputs1320));
   
   inputs1320[0].type = INPUT_KEYBOARD;   
   inputs1320[0].ki.wVk = 76;
   
   inputs1320[1].type = INPUT_KEYBOARD;   
   inputs1320[1].ki.wVk = 76;   
   inputs1320[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1320, sizeof(INPUT));
   
   INPUT inputs1321[2] = {};   
   ZeroMemory(inputs1321, sizeof(inputs1321));
   
   inputs1321[0].type = INPUT_KEYBOARD;   
   inputs1321[0].ki.wVk = 190;
   
   inputs1321[1].type = INPUT_KEYBOARD;   
   inputs1321[1].ki.wVk = 190;   
   inputs1321[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1321, sizeof(INPUT));
   
   INPUT inputs1322[2] = {};   
   ZeroMemory(inputs1322, sizeof(inputs1322));
   
   inputs1322[0].type = INPUT_KEYBOARD;   
   inputs1322[0].ki.wVk = 86;
   
   inputs1322[1].type = INPUT_KEYBOARD;   
   inputs1322[1].ki.wVk = 86;   
   inputs1322[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1322, sizeof(INPUT));
   
   INPUT inputs1323[2] = {};   
   ZeroMemory(inputs1323, sizeof(inputs1323));
   
   inputs1323[0].type = INPUT_KEYBOARD;   
   inputs1323[0].ki.wVk = 66;
   
   inputs1323[1].type = INPUT_KEYBOARD;   
   inputs1323[1].ki.wVk = 66;   
   inputs1323[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1323, sizeof(INPUT));
   
   INPUT inputs1324[2] = {};   
   ZeroMemory(inputs1324, sizeof(inputs1324));
   
   inputs1324[0].type = INPUT_KEYBOARD;   
   inputs1324[0].ki.wVk = 83;
   
   inputs1324[1].type = INPUT_KEYBOARD;   
   inputs1324[1].ki.wVk = 83;   
   inputs1324[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1324, sizeof(INPUT));
   
   INPUT inputs1325[2] = {};   
   ZeroMemory(inputs1325, sizeof(inputs1325));
   
   inputs1325[0].type = INPUT_KEYBOARD;   
   inputs1325[0].ki.wVk = 32;
   
   inputs1325[1].type = INPUT_KEYBOARD;   
   inputs1325[1].ki.wVk = 32;   
   inputs1325[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1325, sizeof(INPUT));
   
   INPUT inputs1326[2] = {};   
   ZeroMemory(inputs1326, sizeof(inputs1326));
   
   inputs1326[0].type = INPUT_KEYBOARD;   
   inputs1326[0].ki.wVk = 54;
   
   inputs1326[1].type = INPUT_KEYBOARD;   
   inputs1326[1].ki.wVk = 54;   
   inputs1326[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1326, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1327[2] = {};   
   ZeroMemory(inputs1327, sizeof(inputs1327));
   
   inputs1327[0].type = INPUT_KEYBOARD;   
   inputs1327[0].ki.wVk = 32;
   
   inputs1327[1].type = INPUT_KEYBOARD;   
   inputs1327[1].ki.wVk = 32;   
   inputs1327[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1327, sizeof(INPUT));
   
   INPUT inputs1328[2] = {};   
   ZeroMemory(inputs1328, sizeof(inputs1328));
   
   inputs1328[0].type = INPUT_KEYBOARD;   
   inputs1328[0].ki.wVk = 69;
   
   inputs1328[1].type = INPUT_KEYBOARD;   
   inputs1328[1].ki.wVk = 69;   
   inputs1328[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1328, sizeof(INPUT));
   
   INPUT inputs1329[2] = {};   
   ZeroMemory(inputs1329, sizeof(inputs1329));
   
   inputs1329[0].type = INPUT_KEYBOARD;   
   inputs1329[0].ki.wVk = 67;
   
   inputs1329[1].type = INPUT_KEYBOARD;   
   inputs1329[1].ki.wVk = 67;   
   inputs1329[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1329, sizeof(INPUT));
   
   INPUT inputs1330[2] = {};   
   ZeroMemory(inputs1330, sizeof(inputs1330));
   
   inputs1330[0].type = INPUT_KEYBOARD;   
   inputs1330[0].ki.wVk = 72;
   
   inputs1330[1].type = INPUT_KEYBOARD;   
   inputs1330[1].ki.wVk = 72;   
   inputs1330[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1330, sizeof(INPUT));
   
   INPUT inputs1331[2] = {};   
   ZeroMemory(inputs1331, sizeof(inputs1331));
   
   inputs1331[0].type = INPUT_KEYBOARD;   
   inputs1331[0].ki.wVk = 79;
   
   inputs1331[1].type = INPUT_KEYBOARD;   
   inputs1331[1].ki.wVk = 79;   
   inputs1331[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1331, sizeof(INPUT));
   
   INPUT inputs1332[2] = {};   
   ZeroMemory(inputs1332, sizeof(inputs1332));
   
   inputs1332[0].type = INPUT_KEYBOARD;   
   inputs1332[0].ki.wVk = 32;
   
   inputs1332[1].type = INPUT_KEYBOARD;   
   inputs1332[1].ki.wVk = 32;   
   inputs1332[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1332, sizeof(INPUT));
   
   INPUT inputs1333[2] = {};   
   ZeroMemory(inputs1333, sizeof(inputs1333));
   
   inputs1333[0].type = INPUT_KEYBOARD;   
   inputs1333[0].ki.wVk = 79;
   
   inputs1333[1].type = INPUT_KEYBOARD;   
   inputs1333[1].ki.wVk = 79;   
   inputs1333[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1333, sizeof(INPUT));
   
   INPUT inputs1334[2] = {};   
   ZeroMemory(inputs1334, sizeof(inputs1334));
   
   inputs1334[0].type = INPUT_KEYBOARD;   
   inputs1334[0].ki.wVk = 80;
   
   inputs1334[1].type = INPUT_KEYBOARD;   
   inputs1334[1].ki.wVk = 80;   
   inputs1334[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1334, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1335[2] = {};   
   ZeroMemory(inputs1335, sizeof(inputs1335));
   
   inputs1335[0].type = INPUT_KEYBOARD;   
   inputs1335[0].ki.wVk = 76;
   
   inputs1335[1].type = INPUT_KEYBOARD;   
   inputs1335[1].ki.wVk = 76;   
   inputs1335[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1335, sizeof(INPUT));
   
   INPUT inputs1336[2] = {};   
   ZeroMemory(inputs1336, sizeof(inputs1336));
   
   inputs1336[0].type = INPUT_KEYBOARD;   
   inputs1336[0].ki.wVk = 65;
   
   inputs1336[1].type = INPUT_KEYBOARD;   
   inputs1336[1].ki.wVk = 65;   
   inputs1336[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1336, sizeof(INPUT));
   
   INPUT inputs1337[2] = {};   
   ZeroMemory(inputs1337, sizeof(inputs1337));
   
   inputs1337[0].type = INPUT_KEYBOARD;   
   inputs1337[0].ki.wVk = 89;
   
   inputs1337[1].type = INPUT_KEYBOARD;   
   inputs1337[1].ki.wVk = 89;   
   inputs1337[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1337, sizeof(INPUT));
   
   INPUT inputs1338[2] = {};   
   ZeroMemory(inputs1338, sizeof(inputs1338));
   
   inputs1338[0].type = INPUT_KEYBOARD;   
   inputs1338[0].ki.wVk = 69;
   
   inputs1338[1].type = INPUT_KEYBOARD;   
   inputs1338[1].ki.wVk = 69;   
   inputs1338[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1338, sizeof(INPUT));
   
   INPUT inputs1339[2] = {};   
   ZeroMemory(inputs1339, sizeof(inputs1339));
   
   inputs1339[0].type = INPUT_KEYBOARD;   
   inputs1339[0].ki.wVk = 82;
   
   inputs1339[1].type = INPUT_KEYBOARD;   
   inputs1339[1].ki.wVk = 82;   
   inputs1339[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1339, sizeof(INPUT));
   
   INPUT inputs1340[2] = {};   
   ZeroMemory(inputs1340, sizeof(inputs1340));
   
   inputs1340[0].type = INPUT_KEYBOARD;   
   inputs1340[0].ki.wVk = 190;
   
   inputs1340[1].type = INPUT_KEYBOARD;   
   inputs1340[1].ki.wVk = 190;   
   inputs1340[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1340, sizeof(INPUT));
   
   INPUT inputs1341[2] = {};   
   ZeroMemory(inputs1341, sizeof(inputs1341));
   
   inputs1341[0].type = INPUT_KEYBOARD;   
   inputs1341[0].ki.wVk = 67;
   
   inputs1341[1].type = INPUT_KEYBOARD;   
   inputs1341[1].ki.wVk = 67;   
   inputs1341[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1341, sizeof(INPUT));
   
   INPUT inputs1342[2] = {};   
   ZeroMemory(inputs1342, sizeof(inputs1342));
   
   inputs1342[0].type = INPUT_KEYBOARD;   
   inputs1342[0].ki.wVk = 76;
   
   inputs1342[1].type = INPUT_KEYBOARD;   
   inputs1342[1].ki.wVk = 76;   
   inputs1342[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1342, sizeof(INPUT));
   
   INPUT inputs1343[2] = {};   
   ZeroMemory(inputs1343, sizeof(inputs1343));
   
   inputs1343[0].type = INPUT_KEYBOARD;   
   inputs1343[0].ki.wVk = 79;
   
   inputs1343[1].type = INPUT_KEYBOARD;   
   inputs1343[1].ki.wVk = 79;   
   inputs1343[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1343, sizeof(INPUT));
   
   INPUT inputs1344[2] = {};   
   ZeroMemory(inputs1344, sizeof(inputs1344));
   
   inputs1344[0].type = INPUT_KEYBOARD;   
   inputs1344[0].ki.wVk = 83;
   
   inputs1344[1].type = INPUT_KEYBOARD;   
   inputs1344[1].ki.wVk = 83;   
   inputs1344[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1344, sizeof(INPUT));
   
   INPUT inputs1345[2] = {};   
   ZeroMemory(inputs1345, sizeof(inputs1345));
   
   inputs1345[0].type = INPUT_KEYBOARD;   
   inputs1345[0].ki.wVk = 69;
   
   inputs1345[1].type = INPUT_KEYBOARD;   
   inputs1345[1].ki.wVk = 69;   
   inputs1345[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1345, sizeof(INPUT));
   
   INPUT inputs1346[2] = {};   
   ZeroMemory(inputs1346, sizeof(inputs1346));
   
   inputs1346[0].type = INPUT_KEYBOARD;   
   inputs1346[0].ki.wVk = 32;
   
   inputs1346[1].type = INPUT_KEYBOARD;   
   inputs1346[1].ki.wVk = 32;   
   inputs1346[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1346, sizeof(INPUT));
   
   INPUT inputs1347[2] = {};   
   ZeroMemory(inputs1347, sizeof(inputs1347));
   
   inputs1347[0].type = INPUT_KEYBOARD;   
   inputs1347[0].ki.wVk = 190;
   
   inputs1347[1].type = INPUT_KEYBOARD;   
   inputs1347[1].ki.wVk = 190;   
   inputs1347[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1347, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1348[2] = {};   
   ZeroMemory(inputs1348, sizeof(inputs1348));
   
   inputs1348[0].type = INPUT_KEYBOARD;   
   inputs1348[0].ki.wVk = 190;
   
   inputs1348[1].type = INPUT_KEYBOARD;   
   inputs1348[1].ki.wVk = 190;   
   inputs1348[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(2, inputs1348, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));
   
   INPUT inputs1349[2] = {};   
   ZeroMemory(inputs1349, sizeof(inputs1349));
   
   inputs1349[0].type = INPUT_KEYBOARD;   
   inputs1349[0].ki.wVk = 32;
   
   inputs1349[1].type = INPUT_KEYBOARD;   
   inputs1349[1].ki.wVk = 32;   
   inputs1349[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1349, sizeof(INPUT));
   
   INPUT inputs1350[2] = {};   
   ZeroMemory(inputs1350, sizeof(inputs1350));
   
   inputs1350[0].type = INPUT_KEYBOARD;   
   inputs1350[0].ki.wVk = 82;
   
   inputs1350[1].type = INPUT_KEYBOARD;   
   inputs1350[1].ki.wVk = 82;   
   inputs1350[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1350, sizeof(INPUT));
   
   INPUT inputs1351[2] = {};   
   ZeroMemory(inputs1351, sizeof(inputs1351));
   
   inputs1351[0].type = INPUT_KEYBOARD;   
   inputs1351[0].ki.wVk = 73;
   
   inputs1351[1].type = INPUT_KEYBOARD;   
   inputs1351[1].ki.wVk = 73;   
   inputs1351[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1351, sizeof(INPUT));
   
   INPUT inputs1352[2] = {};   
   ZeroMemory(inputs1352, sizeof(inputs1352));
   
   inputs1352[0].type = INPUT_KEYBOARD;   
   inputs1352[0].ki.wVk = 67;
   
   inputs1352[1].type = INPUT_KEYBOARD;   
   inputs1352[1].ki.wVk = 67;   
   inputs1352[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1352, sizeof(INPUT));
   
   INPUT inputs1353[2] = {};   
   ZeroMemory(inputs1353, sizeof(inputs1353));
   
   inputs1353[0].type = INPUT_KEYBOARD;   
   inputs1353[0].ki.wVk = 75;
   
   inputs1353[1].type = INPUT_KEYBOARD;   
   inputs1353[1].ki.wVk = 75;   
   inputs1353[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1353, sizeof(INPUT));
   
   INPUT inputs1354[2] = {};   
   ZeroMemory(inputs1354, sizeof(inputs1354));
   
   inputs1354[0].type = INPUT_KEYBOARD;   
   inputs1354[0].ki.wVk = 82;
   
   inputs1354[1].type = INPUT_KEYBOARD;   
   inputs1354[1].ki.wVk = 82;   
   inputs1354[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1354, sizeof(INPUT));
   
   INPUT inputs1355[2] = {};   
   ZeroMemory(inputs1355, sizeof(inputs1355));
   
   inputs1355[0].type = INPUT_KEYBOARD;   
   inputs1355[0].ki.wVk = 79;
   
   inputs1355[1].type = INPUT_KEYBOARD;   
   inputs1355[1].ki.wVk = 79;   
   inputs1355[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1355, sizeof(INPUT));
   
   INPUT inputs1356[2] = {};   
   ZeroMemory(inputs1356, sizeof(inputs1356));
   
   inputs1356[0].type = INPUT_KEYBOARD;   
   inputs1356[0].ki.wVk = 76;
   
   inputs1356[1].type = INPUT_KEYBOARD;   
   inputs1356[1].ki.wVk = 76;   
   inputs1356[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1356, sizeof(INPUT));
   
   INPUT inputs1357[2] = {};   
   ZeroMemory(inputs1357, sizeof(inputs1357));
   
   inputs1357[0].type = INPUT_KEYBOARD;   
   inputs1357[0].ki.wVk = 76;
   
   inputs1357[1].type = INPUT_KEYBOARD;   
   inputs1357[1].ki.wVk = 76;   
   inputs1357[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1357, sizeof(INPUT));
   
   INPUT inputs1358[2] = {};   
   ZeroMemory(inputs1358, sizeof(inputs1358));
   
   inputs1358[0].type = INPUT_KEYBOARD;   
   inputs1358[0].ki.wVk = 190;
   
   inputs1358[1].type = INPUT_KEYBOARD;   
   inputs1358[1].ki.wVk = 190;   
   inputs1358[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1358, sizeof(INPUT));
   
   INPUT inputs1359[2] = {};   
   ZeroMemory(inputs1359, sizeof(inputs1359));
   
   inputs1359[0].type = INPUT_KEYBOARD;   
   inputs1359[0].ki.wVk = 86;
   
   inputs1359[1].type = INPUT_KEYBOARD;   
   inputs1359[1].ki.wVk = 86;   
   inputs1359[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1359, sizeof(INPUT));
   
   INPUT inputs1360[2] = {};   
   ZeroMemory(inputs1360, sizeof(inputs1360));
   
   inputs1360[0].type = INPUT_KEYBOARD;   
   inputs1360[0].ki.wVk = 66;
   
   inputs1360[1].type = INPUT_KEYBOARD;   
   inputs1360[1].ki.wVk = 66;   
   inputs1360[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1360, sizeof(INPUT));
   
   INPUT inputs1361[2] = {};   
   ZeroMemory(inputs1361, sizeof(inputs1361));
   
   inputs1361[0].type = INPUT_KEYBOARD;   
   inputs1361[0].ki.wVk = 83;
   
   inputs1361[1].type = INPUT_KEYBOARD;   
   inputs1361[1].ki.wVk = 83;   
   inputs1361[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1361, sizeof(INPUT));
   
   INPUT inputs1362[2] = {};   
   ZeroMemory(inputs1362, sizeof(inputs1362));
   
   inputs1362[0].type = INPUT_KEYBOARD;   
   inputs1362[0].ki.wVk = 32;
   
   inputs1362[1].type = INPUT_KEYBOARD;   
   inputs1362[1].ki.wVk = 32;   
   inputs1362[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1362, sizeof(INPUT));
   
   INPUT inputs1363[2] = {};   
   ZeroMemory(inputs1363, sizeof(inputs1363));
   
   inputs1363[0].type = INPUT_KEYBOARD;   
   inputs1363[0].ki.wVk = 54;
   
   inputs1363[1].type = INPUT_KEYBOARD;   
   inputs1363[1].ki.wVk = 54;   
   inputs1363[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1363, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1364[2] = {};   
   ZeroMemory(inputs1364, sizeof(inputs1364));
   
   inputs1364[0].type = INPUT_KEYBOARD;   
   inputs1364[0].ki.wVk = 32;
   
   inputs1364[1].type = INPUT_KEYBOARD;   
   inputs1364[1].ki.wVk = 32;   
   inputs1364[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1364, sizeof(INPUT));
   
   INPUT inputs1365[2] = {};   
   ZeroMemory(inputs1365, sizeof(inputs1365));
   
   inputs1365[0].type = INPUT_KEYBOARD;   
   inputs1365[0].ki.wVk = 83;
   
   inputs1365[1].type = INPUT_KEYBOARD;   
   inputs1365[1].ki.wVk = 83;   
   inputs1365[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1365, sizeof(INPUT));
   
   INPUT inputs1366[2] = {};   
   ZeroMemory(inputs1366, sizeof(inputs1366));
   
   inputs1366[0].type = INPUT_KEYBOARD;   
   inputs1366[0].ki.wVk = 84;
   
   inputs1366[1].type = INPUT_KEYBOARD;   
   inputs1366[1].ki.wVk = 84;   
   inputs1366[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1366, sizeof(INPUT));
   
   INPUT inputs1367[2] = {};   
   ZeroMemory(inputs1367, sizeof(inputs1367));
   
   inputs1367[0].type = INPUT_KEYBOARD;   
   inputs1367[0].ki.wVk = 65;
   
   inputs1367[1].type = INPUT_KEYBOARD;   
   inputs1367[1].ki.wVk = 65;   
   inputs1367[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1367, sizeof(INPUT));
   
   INPUT inputs1368[2] = {};   
   ZeroMemory(inputs1368, sizeof(inputs1368));
   
   inputs1368[0].type = INPUT_KEYBOARD;   
   inputs1368[0].ki.wVk = 82;
   
   inputs1368[1].type = INPUT_KEYBOARD;   
   inputs1368[1].ki.wVk = 82;   
   inputs1368[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1368, sizeof(INPUT));
   
   INPUT inputs1369[2] = {};   
   ZeroMemory(inputs1369, sizeof(inputs1369));
   
   inputs1369[0].type = INPUT_KEYBOARD;   
   inputs1369[0].ki.wVk = 84;
   
   inputs1369[1].type = INPUT_KEYBOARD;   
   inputs1369[1].ki.wVk = 84;   
   inputs1369[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1369, sizeof(INPUT));
   
   INPUT inputs1370[2] = {};   
   ZeroMemory(inputs1370, sizeof(inputs1370));
   
   inputs1370[0].type = INPUT_KEYBOARD;   
   inputs1370[0].ki.wVk = 32;
   
   inputs1370[1].type = INPUT_KEYBOARD;   
   inputs1370[1].ki.wVk = 32;   
   inputs1370[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1370, sizeof(INPUT));
   
   INPUT inputs1371[2] = {};   
   ZeroMemory(inputs1371, sizeof(inputs1371));
   
   inputs1371[0].type = INPUT_KEYBOARD;   
   inputs1371[0].ki.wVk = 82;
   
   inputs1371[1].type = INPUT_KEYBOARD;   
   inputs1371[1].ki.wVk = 82;   
   inputs1371[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1371, sizeof(INPUT));
   
   INPUT inputs1372[2] = {};   
   ZeroMemory(inputs1372, sizeof(inputs1372));
   
   inputs1372[0].type = INPUT_KEYBOARD;   
   inputs1372[0].ki.wVk = 73;
   
   inputs1372[1].type = INPUT_KEYBOARD;   
   inputs1372[1].ki.wVk = 73;   
   inputs1372[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1372, sizeof(INPUT));
   
   INPUT inputs1373[2] = {};   
   ZeroMemory(inputs1373, sizeof(inputs1373));
   
   inputs1373[0].type = INPUT_KEYBOARD;   
   inputs1373[0].ki.wVk = 67;
   
   inputs1373[1].type = INPUT_KEYBOARD;   
   inputs1373[1].ki.wVk = 67;   
   inputs1373[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1373, sizeof(INPUT));
   
   INPUT inputs1374[2] = {};   
   ZeroMemory(inputs1374, sizeof(inputs1374));
   
   inputs1374[0].type = INPUT_KEYBOARD;   
   inputs1374[0].ki.wVk = 75;
   
   inputs1374[1].type = INPUT_KEYBOARD;   
   inputs1374[1].ki.wVk = 75;   
   inputs1374[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1374, sizeof(INPUT));
   
   INPUT inputs1375[2] = {};   
   ZeroMemory(inputs1375, sizeof(inputs1375));
   
   inputs1375[0].type = INPUT_KEYBOARD;   
   inputs1375[0].ki.wVk = 82;
   
   inputs1375[1].type = INPUT_KEYBOARD;   
   inputs1375[1].ki.wVk = 82;   
   inputs1375[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1375, sizeof(INPUT));
   
   INPUT inputs1376[2] = {};   
   ZeroMemory(inputs1376, sizeof(inputs1376));
   
   inputs1376[0].type = INPUT_KEYBOARD;   
   inputs1376[0].ki.wVk = 79;
   
   inputs1376[1].type = INPUT_KEYBOARD;   
   inputs1376[1].ki.wVk = 79;   
   inputs1376[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1376, sizeof(INPUT));
   
   INPUT inputs1377[2] = {};   
   ZeroMemory(inputs1377, sizeof(inputs1377));
   
   inputs1377[0].type = INPUT_KEYBOARD;   
   inputs1377[0].ki.wVk = 76;
   
   inputs1377[1].type = INPUT_KEYBOARD;   
   inputs1377[1].ki.wVk = 76;   
   inputs1377[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1377, sizeof(INPUT));
   
   INPUT inputs1378[2] = {};   
   ZeroMemory(inputs1378, sizeof(inputs1378));
   
   inputs1378[0].type = INPUT_KEYBOARD;   
   inputs1378[0].ki.wVk = 76;
   
   inputs1378[1].type = INPUT_KEYBOARD;   
   inputs1378[1].ki.wVk = 76;   
   inputs1378[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1378, sizeof(INPUT));
   
   INPUT inputs1379[2] = {};   
   ZeroMemory(inputs1379, sizeof(inputs1379));
   
   inputs1379[0].type = INPUT_KEYBOARD;   
   inputs1379[0].ki.wVk = 190;
   
   inputs1379[1].type = INPUT_KEYBOARD;   
   inputs1379[1].ki.wVk = 190;   
   inputs1379[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1379, sizeof(INPUT));
   
   INPUT inputs1380[2] = {};   
   ZeroMemory(inputs1380, sizeof(inputs1380));
   
   inputs1380[0].type = INPUT_KEYBOARD;   
   inputs1380[0].ki.wVk = 86;
   
   inputs1380[1].type = INPUT_KEYBOARD;   
   inputs1380[1].ki.wVk = 86;   
   inputs1380[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1380, sizeof(INPUT));
   
   INPUT inputs1381[2] = {};   
   ZeroMemory(inputs1381, sizeof(inputs1381));
   
   inputs1381[0].type = INPUT_KEYBOARD;   
   inputs1381[0].ki.wVk = 66;
   
   inputs1381[1].type = INPUT_KEYBOARD;   
   inputs1381[1].ki.wVk = 66;   
   inputs1381[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1381, sizeof(INPUT));
   
   INPUT inputs1382[2] = {};   
   ZeroMemory(inputs1382, sizeof(inputs1382));
   
   inputs1382[0].type = INPUT_KEYBOARD;   
   inputs1382[0].ki.wVk = 83;
   
   inputs1382[1].type = INPUT_KEYBOARD;   
   inputs1382[1].ki.wVk = 83;   
   inputs1382[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1382, sizeof(INPUT));
   
   INPUT inputs1383[2] = {};   
   ZeroMemory(inputs1383, sizeof(inputs1383));
   
   inputs1383[0].type = INPUT_KEYBOARD;   
   inputs1383[0].ki.wVk = 32;
   
   inputs1383[1].type = INPUT_KEYBOARD;   
   inputs1383[1].ki.wVk = 32;   
   inputs1383[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1383, sizeof(INPUT));
   
   INPUT inputs1384[2] = {};   
   ZeroMemory(inputs1384, sizeof(inputs1384));
   
   inputs1384[0].type = INPUT_KEYBOARD;   
   inputs1384[0].ki.wVk = 54;
   
   inputs1384[1].type = INPUT_KEYBOARD;   
   inputs1384[1].ki.wVk = 54;   
   inputs1384[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(2, inputs1384, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));
   
   INPUT inputs1385[2] = {};   
   ZeroMemory(inputs1385, sizeof(inputs1385));
   
   inputs1385[0].type = INPUT_KEYBOARD;   
   inputs1385[0].ki.wVk = 32;
   
   inputs1385[1].type = INPUT_KEYBOARD;   
   inputs1385[1].ki.wVk = 32;   
   inputs1385[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1385, sizeof(INPUT));
   
   INPUT inputs1386[2] = {};   
   ZeroMemory(inputs1386, sizeof(inputs1386));
   
   inputs1386[0].type = INPUT_KEYBOARD;   
   inputs1386[0].ki.wVk = 69;
   
   inputs1386[1].type = INPUT_KEYBOARD;   
   inputs1386[1].ki.wVk = 69;   
   inputs1386[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1386, sizeof(INPUT));
   
   INPUT inputs1387[2] = {};   
   ZeroMemory(inputs1387, sizeof(inputs1387));
   
   inputs1387[0].type = INPUT_KEYBOARD;   
   inputs1387[0].ki.wVk = 88;
   
   inputs1387[1].type = INPUT_KEYBOARD;   
   inputs1387[1].ki.wVk = 88;   
   inputs1387[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1387, sizeof(INPUT));
   
   INPUT inputs1388[2] = {};   
   ZeroMemory(inputs1388, sizeof(inputs1388));
   
   inputs1388[0].type = INPUT_KEYBOARD;   
   inputs1388[0].ki.wVk = 73;
   
   inputs1388[1].type = INPUT_KEYBOARD;   
   inputs1388[1].ki.wVk = 73;   
   inputs1388[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1388, sizeof(INPUT));
   
   INPUT inputs1389[2] = {};   
   ZeroMemory(inputs1389, sizeof(inputs1389));
   
   inputs1389[0].type = INPUT_KEYBOARD;   
   inputs1389[0].ki.wVk = 84;
   
   inputs1389[1].type = INPUT_KEYBOARD;   
   inputs1389[1].ki.wVk = 84;   
   inputs1389[1].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(2, inputs1389, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs1390[1] = {};   
   ZeroMemory(inputs1390, sizeof(inputs1390));
   
   inputs1390[0].type = INPUT_KEYBOARD;   
   inputs1390[0].ki.wVk = VK_RETURN;
   
   SendInput(ARRAYSIZE(inputs1390), inputs1390, sizeof(INPUT));
   
   Sleep(100);
   INPUT inputs1391[1] = {};   
   ZeroMemory(inputs1391, sizeof(inputs1391));
   
   inputs1391[0].type = INPUT_KEYBOARD;   
   inputs1391[0].ki.wVk = VK_RETURN;   
   inputs1391[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   SendInput(ARRAYSIZE(inputs1391), inputs1391, sizeof(INPUT));


   return 0;
}