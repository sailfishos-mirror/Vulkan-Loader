/*
 * Copyright (c) 2015-2016 The Khronos Group Inc.
 * Copyright (c) 2015-2016 Valve Corporation
 * Copyright (c) 2015-2016 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Jon Ashburn <jon@lunarg.com>
 * Author: Lenny Komow <lenny@lunarg.com>
 */

#include <vulkan/vulkan_core.h>
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC optimize(3)  // force gcc to use tail-calls
#endif

// The asm declaration prevents name mangling which is necessary for macOS
#if defined(MODIFY_UNKNOWN_FUNCTION_DECLS)
#define ASM_NAME(name) __asm(name)
#else
#define ASM_NAME(name)
#endif

// Clang-format does not understand macros.
// clang-format off

VKAPI_ATTR void VKAPI_CALL vkdev_ext0(VkDevice device) ASM_NAME("vkdev_ext0");
VKAPI_ATTR void VKAPI_CALL vkdev_ext1(VkDevice device) ASM_NAME("vkdev_ext1");
VKAPI_ATTR void VKAPI_CALL vkdev_ext2(VkDevice device) ASM_NAME("vkdev_ext2");
VKAPI_ATTR void VKAPI_CALL vkdev_ext3(VkDevice device) ASM_NAME("vkdev_ext3");
VKAPI_ATTR void VKAPI_CALL vkdev_ext4(VkDevice device) ASM_NAME("vkdev_ext4");
VKAPI_ATTR void VKAPI_CALL vkdev_ext5(VkDevice device) ASM_NAME("vkdev_ext5");
VKAPI_ATTR void VKAPI_CALL vkdev_ext6(VkDevice device) ASM_NAME("vkdev_ext6");
VKAPI_ATTR void VKAPI_CALL vkdev_ext7(VkDevice device) ASM_NAME("vkdev_ext7");
VKAPI_ATTR void VKAPI_CALL vkdev_ext8(VkDevice device) ASM_NAME("vkdev_ext8");
VKAPI_ATTR void VKAPI_CALL vkdev_ext9(VkDevice device) ASM_NAME("vkdev_ext9");
VKAPI_ATTR void VKAPI_CALL vkdev_ext10(VkDevice device) ASM_NAME("vkdev_ext10");
VKAPI_ATTR void VKAPI_CALL vkdev_ext11(VkDevice device) ASM_NAME("vkdev_ext11");
VKAPI_ATTR void VKAPI_CALL vkdev_ext12(VkDevice device) ASM_NAME("vkdev_ext12");
VKAPI_ATTR void VKAPI_CALL vkdev_ext13(VkDevice device) ASM_NAME("vkdev_ext13");
VKAPI_ATTR void VKAPI_CALL vkdev_ext14(VkDevice device) ASM_NAME("vkdev_ext14");
VKAPI_ATTR void VKAPI_CALL vkdev_ext15(VkDevice device) ASM_NAME("vkdev_ext15");
VKAPI_ATTR void VKAPI_CALL vkdev_ext16(VkDevice device) ASM_NAME("vkdev_ext16");
VKAPI_ATTR void VKAPI_CALL vkdev_ext17(VkDevice device) ASM_NAME("vkdev_ext17");
VKAPI_ATTR void VKAPI_CALL vkdev_ext18(VkDevice device) ASM_NAME("vkdev_ext18");
VKAPI_ATTR void VKAPI_CALL vkdev_ext19(VkDevice device) ASM_NAME("vkdev_ext19");
VKAPI_ATTR void VKAPI_CALL vkdev_ext20(VkDevice device) ASM_NAME("vkdev_ext20");
VKAPI_ATTR void VKAPI_CALL vkdev_ext21(VkDevice device) ASM_NAME("vkdev_ext21");
VKAPI_ATTR void VKAPI_CALL vkdev_ext22(VkDevice device) ASM_NAME("vkdev_ext22");
VKAPI_ATTR void VKAPI_CALL vkdev_ext23(VkDevice device) ASM_NAME("vkdev_ext23");
VKAPI_ATTR void VKAPI_CALL vkdev_ext24(VkDevice device) ASM_NAME("vkdev_ext24");
VKAPI_ATTR void VKAPI_CALL vkdev_ext25(VkDevice device) ASM_NAME("vkdev_ext25");
VKAPI_ATTR void VKAPI_CALL vkdev_ext26(VkDevice device) ASM_NAME("vkdev_ext26");
VKAPI_ATTR void VKAPI_CALL vkdev_ext27(VkDevice device) ASM_NAME("vkdev_ext27");
VKAPI_ATTR void VKAPI_CALL vkdev_ext28(VkDevice device) ASM_NAME("vkdev_ext28");
VKAPI_ATTR void VKAPI_CALL vkdev_ext29(VkDevice device) ASM_NAME("vkdev_ext29");
VKAPI_ATTR void VKAPI_CALL vkdev_ext30(VkDevice device) ASM_NAME("vkdev_ext30");
VKAPI_ATTR void VKAPI_CALL vkdev_ext31(VkDevice device) ASM_NAME("vkdev_ext31");
VKAPI_ATTR void VKAPI_CALL vkdev_ext32(VkDevice device) ASM_NAME("vkdev_ext32");
VKAPI_ATTR void VKAPI_CALL vkdev_ext33(VkDevice device) ASM_NAME("vkdev_ext33");
VKAPI_ATTR void VKAPI_CALL vkdev_ext34(VkDevice device) ASM_NAME("vkdev_ext34");
VKAPI_ATTR void VKAPI_CALL vkdev_ext35(VkDevice device) ASM_NAME("vkdev_ext35");
VKAPI_ATTR void VKAPI_CALL vkdev_ext36(VkDevice device) ASM_NAME("vkdev_ext36");
VKAPI_ATTR void VKAPI_CALL vkdev_ext37(VkDevice device) ASM_NAME("vkdev_ext37");
VKAPI_ATTR void VKAPI_CALL vkdev_ext38(VkDevice device) ASM_NAME("vkdev_ext38");
VKAPI_ATTR void VKAPI_CALL vkdev_ext39(VkDevice device) ASM_NAME("vkdev_ext39");
VKAPI_ATTR void VKAPI_CALL vkdev_ext40(VkDevice device) ASM_NAME("vkdev_ext40");
VKAPI_ATTR void VKAPI_CALL vkdev_ext41(VkDevice device) ASM_NAME("vkdev_ext41");
VKAPI_ATTR void VKAPI_CALL vkdev_ext42(VkDevice device) ASM_NAME("vkdev_ext42");
VKAPI_ATTR void VKAPI_CALL vkdev_ext43(VkDevice device) ASM_NAME("vkdev_ext43");
VKAPI_ATTR void VKAPI_CALL vkdev_ext44(VkDevice device) ASM_NAME("vkdev_ext44");
VKAPI_ATTR void VKAPI_CALL vkdev_ext45(VkDevice device) ASM_NAME("vkdev_ext45");
VKAPI_ATTR void VKAPI_CALL vkdev_ext46(VkDevice device) ASM_NAME("vkdev_ext46");
VKAPI_ATTR void VKAPI_CALL vkdev_ext47(VkDevice device) ASM_NAME("vkdev_ext47");
VKAPI_ATTR void VKAPI_CALL vkdev_ext48(VkDevice device) ASM_NAME("vkdev_ext48");
VKAPI_ATTR void VKAPI_CALL vkdev_ext49(VkDevice device) ASM_NAME("vkdev_ext49");
VKAPI_ATTR void VKAPI_CALL vkdev_ext50(VkDevice device) ASM_NAME("vkdev_ext50");
VKAPI_ATTR void VKAPI_CALL vkdev_ext51(VkDevice device) ASM_NAME("vkdev_ext51");
VKAPI_ATTR void VKAPI_CALL vkdev_ext52(VkDevice device) ASM_NAME("vkdev_ext52");
VKAPI_ATTR void VKAPI_CALL vkdev_ext53(VkDevice device) ASM_NAME("vkdev_ext53");
VKAPI_ATTR void VKAPI_CALL vkdev_ext54(VkDevice device) ASM_NAME("vkdev_ext54");
VKAPI_ATTR void VKAPI_CALL vkdev_ext55(VkDevice device) ASM_NAME("vkdev_ext55");
VKAPI_ATTR void VKAPI_CALL vkdev_ext56(VkDevice device) ASM_NAME("vkdev_ext56");
VKAPI_ATTR void VKAPI_CALL vkdev_ext57(VkDevice device) ASM_NAME("vkdev_ext57");
VKAPI_ATTR void VKAPI_CALL vkdev_ext58(VkDevice device) ASM_NAME("vkdev_ext58");
VKAPI_ATTR void VKAPI_CALL vkdev_ext59(VkDevice device) ASM_NAME("vkdev_ext59");
VKAPI_ATTR void VKAPI_CALL vkdev_ext60(VkDevice device) ASM_NAME("vkdev_ext60");
VKAPI_ATTR void VKAPI_CALL vkdev_ext61(VkDevice device) ASM_NAME("vkdev_ext61");
VKAPI_ATTR void VKAPI_CALL vkdev_ext62(VkDevice device) ASM_NAME("vkdev_ext62");
VKAPI_ATTR void VKAPI_CALL vkdev_ext63(VkDevice device) ASM_NAME("vkdev_ext63");
VKAPI_ATTR void VKAPI_CALL vkdev_ext64(VkDevice device) ASM_NAME("vkdev_ext64");
VKAPI_ATTR void VKAPI_CALL vkdev_ext65(VkDevice device) ASM_NAME("vkdev_ext65");
VKAPI_ATTR void VKAPI_CALL vkdev_ext66(VkDevice device) ASM_NAME("vkdev_ext66");
VKAPI_ATTR void VKAPI_CALL vkdev_ext67(VkDevice device) ASM_NAME("vkdev_ext67");
VKAPI_ATTR void VKAPI_CALL vkdev_ext68(VkDevice device) ASM_NAME("vkdev_ext68");
VKAPI_ATTR void VKAPI_CALL vkdev_ext69(VkDevice device) ASM_NAME("vkdev_ext69");
VKAPI_ATTR void VKAPI_CALL vkdev_ext70(VkDevice device) ASM_NAME("vkdev_ext70");
VKAPI_ATTR void VKAPI_CALL vkdev_ext71(VkDevice device) ASM_NAME("vkdev_ext71");
VKAPI_ATTR void VKAPI_CALL vkdev_ext72(VkDevice device) ASM_NAME("vkdev_ext72");
VKAPI_ATTR void VKAPI_CALL vkdev_ext73(VkDevice device) ASM_NAME("vkdev_ext73");
VKAPI_ATTR void VKAPI_CALL vkdev_ext74(VkDevice device) ASM_NAME("vkdev_ext74");
VKAPI_ATTR void VKAPI_CALL vkdev_ext75(VkDevice device) ASM_NAME("vkdev_ext75");
VKAPI_ATTR void VKAPI_CALL vkdev_ext76(VkDevice device) ASM_NAME("vkdev_ext76");
VKAPI_ATTR void VKAPI_CALL vkdev_ext77(VkDevice device) ASM_NAME("vkdev_ext77");
VKAPI_ATTR void VKAPI_CALL vkdev_ext78(VkDevice device) ASM_NAME("vkdev_ext78");
VKAPI_ATTR void VKAPI_CALL vkdev_ext79(VkDevice device) ASM_NAME("vkdev_ext79");
VKAPI_ATTR void VKAPI_CALL vkdev_ext80(VkDevice device) ASM_NAME("vkdev_ext80");
VKAPI_ATTR void VKAPI_CALL vkdev_ext81(VkDevice device) ASM_NAME("vkdev_ext81");
VKAPI_ATTR void VKAPI_CALL vkdev_ext82(VkDevice device) ASM_NAME("vkdev_ext82");
VKAPI_ATTR void VKAPI_CALL vkdev_ext83(VkDevice device) ASM_NAME("vkdev_ext83");
VKAPI_ATTR void VKAPI_CALL vkdev_ext84(VkDevice device) ASM_NAME("vkdev_ext84");
VKAPI_ATTR void VKAPI_CALL vkdev_ext85(VkDevice device) ASM_NAME("vkdev_ext85");
VKAPI_ATTR void VKAPI_CALL vkdev_ext86(VkDevice device) ASM_NAME("vkdev_ext86");
VKAPI_ATTR void VKAPI_CALL vkdev_ext87(VkDevice device) ASM_NAME("vkdev_ext87");
VKAPI_ATTR void VKAPI_CALL vkdev_ext88(VkDevice device) ASM_NAME("vkdev_ext88");
VKAPI_ATTR void VKAPI_CALL vkdev_ext89(VkDevice device) ASM_NAME("vkdev_ext89");
VKAPI_ATTR void VKAPI_CALL vkdev_ext90(VkDevice device) ASM_NAME("vkdev_ext90");
VKAPI_ATTR void VKAPI_CALL vkdev_ext91(VkDevice device) ASM_NAME("vkdev_ext91");
VKAPI_ATTR void VKAPI_CALL vkdev_ext92(VkDevice device) ASM_NAME("vkdev_ext92");
VKAPI_ATTR void VKAPI_CALL vkdev_ext93(VkDevice device) ASM_NAME("vkdev_ext93");
VKAPI_ATTR void VKAPI_CALL vkdev_ext94(VkDevice device) ASM_NAME("vkdev_ext94");
VKAPI_ATTR void VKAPI_CALL vkdev_ext95(VkDevice device) ASM_NAME("vkdev_ext95");
VKAPI_ATTR void VKAPI_CALL vkdev_ext96(VkDevice device) ASM_NAME("vkdev_ext96");
VKAPI_ATTR void VKAPI_CALL vkdev_ext97(VkDevice device) ASM_NAME("vkdev_ext97");
VKAPI_ATTR void VKAPI_CALL vkdev_ext98(VkDevice device) ASM_NAME("vkdev_ext98");
VKAPI_ATTR void VKAPI_CALL vkdev_ext99(VkDevice device) ASM_NAME("vkdev_ext99");
VKAPI_ATTR void VKAPI_CALL vkdev_ext100(VkDevice device) ASM_NAME("vkdev_ext100");
VKAPI_ATTR void VKAPI_CALL vkdev_ext101(VkDevice device) ASM_NAME("vkdev_ext101");
VKAPI_ATTR void VKAPI_CALL vkdev_ext102(VkDevice device) ASM_NAME("vkdev_ext102");
VKAPI_ATTR void VKAPI_CALL vkdev_ext103(VkDevice device) ASM_NAME("vkdev_ext103");
VKAPI_ATTR void VKAPI_CALL vkdev_ext104(VkDevice device) ASM_NAME("vkdev_ext104");
VKAPI_ATTR void VKAPI_CALL vkdev_ext105(VkDevice device) ASM_NAME("vkdev_ext105");
VKAPI_ATTR void VKAPI_CALL vkdev_ext106(VkDevice device) ASM_NAME("vkdev_ext106");
VKAPI_ATTR void VKAPI_CALL vkdev_ext107(VkDevice device) ASM_NAME("vkdev_ext107");
VKAPI_ATTR void VKAPI_CALL vkdev_ext108(VkDevice device) ASM_NAME("vkdev_ext108");
VKAPI_ATTR void VKAPI_CALL vkdev_ext109(VkDevice device) ASM_NAME("vkdev_ext109");
VKAPI_ATTR void VKAPI_CALL vkdev_ext110(VkDevice device) ASM_NAME("vkdev_ext110");
VKAPI_ATTR void VKAPI_CALL vkdev_ext111(VkDevice device) ASM_NAME("vkdev_ext111");
VKAPI_ATTR void VKAPI_CALL vkdev_ext112(VkDevice device) ASM_NAME("vkdev_ext112");
VKAPI_ATTR void VKAPI_CALL vkdev_ext113(VkDevice device) ASM_NAME("vkdev_ext113");
VKAPI_ATTR void VKAPI_CALL vkdev_ext114(VkDevice device) ASM_NAME("vkdev_ext114");
VKAPI_ATTR void VKAPI_CALL vkdev_ext115(VkDevice device) ASM_NAME("vkdev_ext115");
VKAPI_ATTR void VKAPI_CALL vkdev_ext116(VkDevice device) ASM_NAME("vkdev_ext116");
VKAPI_ATTR void VKAPI_CALL vkdev_ext117(VkDevice device) ASM_NAME("vkdev_ext117");
VKAPI_ATTR void VKAPI_CALL vkdev_ext118(VkDevice device) ASM_NAME("vkdev_ext118");
VKAPI_ATTR void VKAPI_CALL vkdev_ext119(VkDevice device) ASM_NAME("vkdev_ext119");
VKAPI_ATTR void VKAPI_CALL vkdev_ext120(VkDevice device) ASM_NAME("vkdev_ext120");
VKAPI_ATTR void VKAPI_CALL vkdev_ext121(VkDevice device) ASM_NAME("vkdev_ext121");
VKAPI_ATTR void VKAPI_CALL vkdev_ext122(VkDevice device) ASM_NAME("vkdev_ext122");
VKAPI_ATTR void VKAPI_CALL vkdev_ext123(VkDevice device) ASM_NAME("vkdev_ext123");
VKAPI_ATTR void VKAPI_CALL vkdev_ext124(VkDevice device) ASM_NAME("vkdev_ext124");
VKAPI_ATTR void VKAPI_CALL vkdev_ext125(VkDevice device) ASM_NAME("vkdev_ext125");
VKAPI_ATTR void VKAPI_CALL vkdev_ext126(VkDevice device) ASM_NAME("vkdev_ext126");
VKAPI_ATTR void VKAPI_CALL vkdev_ext127(VkDevice device) ASM_NAME("vkdev_ext127");
VKAPI_ATTR void VKAPI_CALL vkdev_ext128(VkDevice device) ASM_NAME("vkdev_ext128");
VKAPI_ATTR void VKAPI_CALL vkdev_ext129(VkDevice device) ASM_NAME("vkdev_ext129");
VKAPI_ATTR void VKAPI_CALL vkdev_ext130(VkDevice device) ASM_NAME("vkdev_ext130");
VKAPI_ATTR void VKAPI_CALL vkdev_ext131(VkDevice device) ASM_NAME("vkdev_ext131");
VKAPI_ATTR void VKAPI_CALL vkdev_ext132(VkDevice device) ASM_NAME("vkdev_ext132");
VKAPI_ATTR void VKAPI_CALL vkdev_ext133(VkDevice device) ASM_NAME("vkdev_ext133");
VKAPI_ATTR void VKAPI_CALL vkdev_ext134(VkDevice device) ASM_NAME("vkdev_ext134");
VKAPI_ATTR void VKAPI_CALL vkdev_ext135(VkDevice device) ASM_NAME("vkdev_ext135");
VKAPI_ATTR void VKAPI_CALL vkdev_ext136(VkDevice device) ASM_NAME("vkdev_ext136");
VKAPI_ATTR void VKAPI_CALL vkdev_ext137(VkDevice device) ASM_NAME("vkdev_ext137");
VKAPI_ATTR void VKAPI_CALL vkdev_ext138(VkDevice device) ASM_NAME("vkdev_ext138");
VKAPI_ATTR void VKAPI_CALL vkdev_ext139(VkDevice device) ASM_NAME("vkdev_ext139");
VKAPI_ATTR void VKAPI_CALL vkdev_ext140(VkDevice device) ASM_NAME("vkdev_ext140");
VKAPI_ATTR void VKAPI_CALL vkdev_ext141(VkDevice device) ASM_NAME("vkdev_ext141");
VKAPI_ATTR void VKAPI_CALL vkdev_ext142(VkDevice device) ASM_NAME("vkdev_ext142");
VKAPI_ATTR void VKAPI_CALL vkdev_ext143(VkDevice device) ASM_NAME("vkdev_ext143");
VKAPI_ATTR void VKAPI_CALL vkdev_ext144(VkDevice device) ASM_NAME("vkdev_ext144");
VKAPI_ATTR void VKAPI_CALL vkdev_ext145(VkDevice device) ASM_NAME("vkdev_ext145");
VKAPI_ATTR void VKAPI_CALL vkdev_ext146(VkDevice device) ASM_NAME("vkdev_ext146");
VKAPI_ATTR void VKAPI_CALL vkdev_ext147(VkDevice device) ASM_NAME("vkdev_ext147");
VKAPI_ATTR void VKAPI_CALL vkdev_ext148(VkDevice device) ASM_NAME("vkdev_ext148");
VKAPI_ATTR void VKAPI_CALL vkdev_ext149(VkDevice device) ASM_NAME("vkdev_ext149");
VKAPI_ATTR void VKAPI_CALL vkdev_ext150(VkDevice device) ASM_NAME("vkdev_ext150");
VKAPI_ATTR void VKAPI_CALL vkdev_ext151(VkDevice device) ASM_NAME("vkdev_ext151");
VKAPI_ATTR void VKAPI_CALL vkdev_ext152(VkDevice device) ASM_NAME("vkdev_ext152");
VKAPI_ATTR void VKAPI_CALL vkdev_ext153(VkDevice device) ASM_NAME("vkdev_ext153");
VKAPI_ATTR void VKAPI_CALL vkdev_ext154(VkDevice device) ASM_NAME("vkdev_ext154");
VKAPI_ATTR void VKAPI_CALL vkdev_ext155(VkDevice device) ASM_NAME("vkdev_ext155");
VKAPI_ATTR void VKAPI_CALL vkdev_ext156(VkDevice device) ASM_NAME("vkdev_ext156");
VKAPI_ATTR void VKAPI_CALL vkdev_ext157(VkDevice device) ASM_NAME("vkdev_ext157");
VKAPI_ATTR void VKAPI_CALL vkdev_ext158(VkDevice device) ASM_NAME("vkdev_ext158");
VKAPI_ATTR void VKAPI_CALL vkdev_ext159(VkDevice device) ASM_NAME("vkdev_ext159");
VKAPI_ATTR void VKAPI_CALL vkdev_ext160(VkDevice device) ASM_NAME("vkdev_ext160");
VKAPI_ATTR void VKAPI_CALL vkdev_ext161(VkDevice device) ASM_NAME("vkdev_ext161");
VKAPI_ATTR void VKAPI_CALL vkdev_ext162(VkDevice device) ASM_NAME("vkdev_ext162");
VKAPI_ATTR void VKAPI_CALL vkdev_ext163(VkDevice device) ASM_NAME("vkdev_ext163");
VKAPI_ATTR void VKAPI_CALL vkdev_ext164(VkDevice device) ASM_NAME("vkdev_ext164");
VKAPI_ATTR void VKAPI_CALL vkdev_ext165(VkDevice device) ASM_NAME("vkdev_ext165");
VKAPI_ATTR void VKAPI_CALL vkdev_ext166(VkDevice device) ASM_NAME("vkdev_ext166");
VKAPI_ATTR void VKAPI_CALL vkdev_ext167(VkDevice device) ASM_NAME("vkdev_ext167");
VKAPI_ATTR void VKAPI_CALL vkdev_ext168(VkDevice device) ASM_NAME("vkdev_ext168");
VKAPI_ATTR void VKAPI_CALL vkdev_ext169(VkDevice device) ASM_NAME("vkdev_ext169");
VKAPI_ATTR void VKAPI_CALL vkdev_ext170(VkDevice device) ASM_NAME("vkdev_ext170");
VKAPI_ATTR void VKAPI_CALL vkdev_ext171(VkDevice device) ASM_NAME("vkdev_ext171");
VKAPI_ATTR void VKAPI_CALL vkdev_ext172(VkDevice device) ASM_NAME("vkdev_ext172");
VKAPI_ATTR void VKAPI_CALL vkdev_ext173(VkDevice device) ASM_NAME("vkdev_ext173");
VKAPI_ATTR void VKAPI_CALL vkdev_ext174(VkDevice device) ASM_NAME("vkdev_ext174");
VKAPI_ATTR void VKAPI_CALL vkdev_ext175(VkDevice device) ASM_NAME("vkdev_ext175");
VKAPI_ATTR void VKAPI_CALL vkdev_ext176(VkDevice device) ASM_NAME("vkdev_ext176");
VKAPI_ATTR void VKAPI_CALL vkdev_ext177(VkDevice device) ASM_NAME("vkdev_ext177");
VKAPI_ATTR void VKAPI_CALL vkdev_ext178(VkDevice device) ASM_NAME("vkdev_ext178");
VKAPI_ATTR void VKAPI_CALL vkdev_ext179(VkDevice device) ASM_NAME("vkdev_ext179");
VKAPI_ATTR void VKAPI_CALL vkdev_ext180(VkDevice device) ASM_NAME("vkdev_ext180");
VKAPI_ATTR void VKAPI_CALL vkdev_ext181(VkDevice device) ASM_NAME("vkdev_ext181");
VKAPI_ATTR void VKAPI_CALL vkdev_ext182(VkDevice device) ASM_NAME("vkdev_ext182");
VKAPI_ATTR void VKAPI_CALL vkdev_ext183(VkDevice device) ASM_NAME("vkdev_ext183");
VKAPI_ATTR void VKAPI_CALL vkdev_ext184(VkDevice device) ASM_NAME("vkdev_ext184");
VKAPI_ATTR void VKAPI_CALL vkdev_ext185(VkDevice device) ASM_NAME("vkdev_ext185");
VKAPI_ATTR void VKAPI_CALL vkdev_ext186(VkDevice device) ASM_NAME("vkdev_ext186");
VKAPI_ATTR void VKAPI_CALL vkdev_ext187(VkDevice device) ASM_NAME("vkdev_ext187");
VKAPI_ATTR void VKAPI_CALL vkdev_ext188(VkDevice device) ASM_NAME("vkdev_ext188");
VKAPI_ATTR void VKAPI_CALL vkdev_ext189(VkDevice device) ASM_NAME("vkdev_ext189");
VKAPI_ATTR void VKAPI_CALL vkdev_ext190(VkDevice device) ASM_NAME("vkdev_ext190");
VKAPI_ATTR void VKAPI_CALL vkdev_ext191(VkDevice device) ASM_NAME("vkdev_ext191");
VKAPI_ATTR void VKAPI_CALL vkdev_ext192(VkDevice device) ASM_NAME("vkdev_ext192");
VKAPI_ATTR void VKAPI_CALL vkdev_ext193(VkDevice device) ASM_NAME("vkdev_ext193");
VKAPI_ATTR void VKAPI_CALL vkdev_ext194(VkDevice device) ASM_NAME("vkdev_ext194");
VKAPI_ATTR void VKAPI_CALL vkdev_ext195(VkDevice device) ASM_NAME("vkdev_ext195");
VKAPI_ATTR void VKAPI_CALL vkdev_ext196(VkDevice device) ASM_NAME("vkdev_ext196");
VKAPI_ATTR void VKAPI_CALL vkdev_ext197(VkDevice device) ASM_NAME("vkdev_ext197");
VKAPI_ATTR void VKAPI_CALL vkdev_ext198(VkDevice device) ASM_NAME("vkdev_ext198");
VKAPI_ATTR void VKAPI_CALL vkdev_ext199(VkDevice device) ASM_NAME("vkdev_ext199");
VKAPI_ATTR void VKAPI_CALL vkdev_ext200(VkDevice device) ASM_NAME("vkdev_ext200");
VKAPI_ATTR void VKAPI_CALL vkdev_ext201(VkDevice device) ASM_NAME("vkdev_ext201");
VKAPI_ATTR void VKAPI_CALL vkdev_ext202(VkDevice device) ASM_NAME("vkdev_ext202");
VKAPI_ATTR void VKAPI_CALL vkdev_ext203(VkDevice device) ASM_NAME("vkdev_ext203");
VKAPI_ATTR void VKAPI_CALL vkdev_ext204(VkDevice device) ASM_NAME("vkdev_ext204");
VKAPI_ATTR void VKAPI_CALL vkdev_ext205(VkDevice device) ASM_NAME("vkdev_ext205");
VKAPI_ATTR void VKAPI_CALL vkdev_ext206(VkDevice device) ASM_NAME("vkdev_ext206");
VKAPI_ATTR void VKAPI_CALL vkdev_ext207(VkDevice device) ASM_NAME("vkdev_ext207");
VKAPI_ATTR void VKAPI_CALL vkdev_ext208(VkDevice device) ASM_NAME("vkdev_ext208");
VKAPI_ATTR void VKAPI_CALL vkdev_ext209(VkDevice device) ASM_NAME("vkdev_ext209");
VKAPI_ATTR void VKAPI_CALL vkdev_ext210(VkDevice device) ASM_NAME("vkdev_ext210");
VKAPI_ATTR void VKAPI_CALL vkdev_ext211(VkDevice device) ASM_NAME("vkdev_ext211");
VKAPI_ATTR void VKAPI_CALL vkdev_ext212(VkDevice device) ASM_NAME("vkdev_ext212");
VKAPI_ATTR void VKAPI_CALL vkdev_ext213(VkDevice device) ASM_NAME("vkdev_ext213");
VKAPI_ATTR void VKAPI_CALL vkdev_ext214(VkDevice device) ASM_NAME("vkdev_ext214");
VKAPI_ATTR void VKAPI_CALL vkdev_ext215(VkDevice device) ASM_NAME("vkdev_ext215");
VKAPI_ATTR void VKAPI_CALL vkdev_ext216(VkDevice device) ASM_NAME("vkdev_ext216");
VKAPI_ATTR void VKAPI_CALL vkdev_ext217(VkDevice device) ASM_NAME("vkdev_ext217");
VKAPI_ATTR void VKAPI_CALL vkdev_ext218(VkDevice device) ASM_NAME("vkdev_ext218");
VKAPI_ATTR void VKAPI_CALL vkdev_ext219(VkDevice device) ASM_NAME("vkdev_ext219");
VKAPI_ATTR void VKAPI_CALL vkdev_ext220(VkDevice device) ASM_NAME("vkdev_ext220");
VKAPI_ATTR void VKAPI_CALL vkdev_ext221(VkDevice device) ASM_NAME("vkdev_ext221");
VKAPI_ATTR void VKAPI_CALL vkdev_ext222(VkDevice device) ASM_NAME("vkdev_ext222");
VKAPI_ATTR void VKAPI_CALL vkdev_ext223(VkDevice device) ASM_NAME("vkdev_ext223");
VKAPI_ATTR void VKAPI_CALL vkdev_ext224(VkDevice device) ASM_NAME("vkdev_ext224");
VKAPI_ATTR void VKAPI_CALL vkdev_ext225(VkDevice device) ASM_NAME("vkdev_ext225");
VKAPI_ATTR void VKAPI_CALL vkdev_ext226(VkDevice device) ASM_NAME("vkdev_ext226");
VKAPI_ATTR void VKAPI_CALL vkdev_ext227(VkDevice device) ASM_NAME("vkdev_ext227");
VKAPI_ATTR void VKAPI_CALL vkdev_ext228(VkDevice device) ASM_NAME("vkdev_ext228");
VKAPI_ATTR void VKAPI_CALL vkdev_ext229(VkDevice device) ASM_NAME("vkdev_ext229");
VKAPI_ATTR void VKAPI_CALL vkdev_ext230(VkDevice device) ASM_NAME("vkdev_ext230");
VKAPI_ATTR void VKAPI_CALL vkdev_ext231(VkDevice device) ASM_NAME("vkdev_ext231");
VKAPI_ATTR void VKAPI_CALL vkdev_ext232(VkDevice device) ASM_NAME("vkdev_ext232");
VKAPI_ATTR void VKAPI_CALL vkdev_ext233(VkDevice device) ASM_NAME("vkdev_ext233");
VKAPI_ATTR void VKAPI_CALL vkdev_ext234(VkDevice device) ASM_NAME("vkdev_ext234");
VKAPI_ATTR void VKAPI_CALL vkdev_ext235(VkDevice device) ASM_NAME("vkdev_ext235");
VKAPI_ATTR void VKAPI_CALL vkdev_ext236(VkDevice device) ASM_NAME("vkdev_ext236");
VKAPI_ATTR void VKAPI_CALL vkdev_ext237(VkDevice device) ASM_NAME("vkdev_ext237");
VKAPI_ATTR void VKAPI_CALL vkdev_ext238(VkDevice device) ASM_NAME("vkdev_ext238");
VKAPI_ATTR void VKAPI_CALL vkdev_ext239(VkDevice device) ASM_NAME("vkdev_ext239");
VKAPI_ATTR void VKAPI_CALL vkdev_ext240(VkDevice device) ASM_NAME("vkdev_ext240");
VKAPI_ATTR void VKAPI_CALL vkdev_ext241(VkDevice device) ASM_NAME("vkdev_ext241");
VKAPI_ATTR void VKAPI_CALL vkdev_ext242(VkDevice device) ASM_NAME("vkdev_ext242");
VKAPI_ATTR void VKAPI_CALL vkdev_ext243(VkDevice device) ASM_NAME("vkdev_ext243");
VKAPI_ATTR void VKAPI_CALL vkdev_ext244(VkDevice device) ASM_NAME("vkdev_ext244");
VKAPI_ATTR void VKAPI_CALL vkdev_ext245(VkDevice device) ASM_NAME("vkdev_ext245");
VKAPI_ATTR void VKAPI_CALL vkdev_ext246(VkDevice device) ASM_NAME("vkdev_ext246");
VKAPI_ATTR void VKAPI_CALL vkdev_ext247(VkDevice device) ASM_NAME("vkdev_ext247");
VKAPI_ATTR void VKAPI_CALL vkdev_ext248(VkDevice device) ASM_NAME("vkdev_ext248");
VKAPI_ATTR void VKAPI_CALL vkdev_ext249(VkDevice device) ASM_NAME("vkdev_ext249");

void *loader_get_dev_ext_trampoline(uint32_t index) {
    switch (index) {
#define CASE_HANDLE(num) case num: return vkdev_ext##num
        CASE_HANDLE(0);
        CASE_HANDLE(1);
        CASE_HANDLE(2);
        CASE_HANDLE(3);
        CASE_HANDLE(4);
        CASE_HANDLE(5);
        CASE_HANDLE(6);
        CASE_HANDLE(7);
        CASE_HANDLE(8);
        CASE_HANDLE(9);
        CASE_HANDLE(10);
        CASE_HANDLE(11);
        CASE_HANDLE(12);
        CASE_HANDLE(13);
        CASE_HANDLE(14);
        CASE_HANDLE(15);
        CASE_HANDLE(16);
        CASE_HANDLE(17);
        CASE_HANDLE(18);
        CASE_HANDLE(19);
        CASE_HANDLE(20);
        CASE_HANDLE(21);
        CASE_HANDLE(22);
        CASE_HANDLE(23);
        CASE_HANDLE(24);
        CASE_HANDLE(25);
        CASE_HANDLE(26);
        CASE_HANDLE(27);
        CASE_HANDLE(28);
        CASE_HANDLE(29);
        CASE_HANDLE(30);
        CASE_HANDLE(31);
        CASE_HANDLE(32);
        CASE_HANDLE(33);
        CASE_HANDLE(34);
        CASE_HANDLE(35);
        CASE_HANDLE(36);
        CASE_HANDLE(37);
        CASE_HANDLE(38);
        CASE_HANDLE(39);
        CASE_HANDLE(40);
        CASE_HANDLE(41);
        CASE_HANDLE(42);
        CASE_HANDLE(43);
        CASE_HANDLE(44);
        CASE_HANDLE(45);
        CASE_HANDLE(46);
        CASE_HANDLE(47);
        CASE_HANDLE(48);
        CASE_HANDLE(49);
        CASE_HANDLE(50);
        CASE_HANDLE(51);
        CASE_HANDLE(52);
        CASE_HANDLE(53);
        CASE_HANDLE(54);
        CASE_HANDLE(55);
        CASE_HANDLE(56);
        CASE_HANDLE(57);
        CASE_HANDLE(58);
        CASE_HANDLE(59);
        CASE_HANDLE(60);
        CASE_HANDLE(61);
        CASE_HANDLE(62);
        CASE_HANDLE(63);
        CASE_HANDLE(64);
        CASE_HANDLE(65);
        CASE_HANDLE(66);
        CASE_HANDLE(67);
        CASE_HANDLE(68);
        CASE_HANDLE(69);
        CASE_HANDLE(70);
        CASE_HANDLE(71);
        CASE_HANDLE(72);
        CASE_HANDLE(73);
        CASE_HANDLE(74);
        CASE_HANDLE(75);
        CASE_HANDLE(76);
        CASE_HANDLE(77);
        CASE_HANDLE(78);
        CASE_HANDLE(79);
        CASE_HANDLE(80);
        CASE_HANDLE(81);
        CASE_HANDLE(82);
        CASE_HANDLE(83);
        CASE_HANDLE(84);
        CASE_HANDLE(85);
        CASE_HANDLE(86);
        CASE_HANDLE(87);
        CASE_HANDLE(88);
        CASE_HANDLE(89);
        CASE_HANDLE(90);
        CASE_HANDLE(91);
        CASE_HANDLE(92);
        CASE_HANDLE(93);
        CASE_HANDLE(94);
        CASE_HANDLE(95);
        CASE_HANDLE(96);
        CASE_HANDLE(97);
        CASE_HANDLE(98);
        CASE_HANDLE(99);
        CASE_HANDLE(100);
        CASE_HANDLE(101);
        CASE_HANDLE(102);
        CASE_HANDLE(103);
        CASE_HANDLE(104);
        CASE_HANDLE(105);
        CASE_HANDLE(106);
        CASE_HANDLE(107);
        CASE_HANDLE(108);
        CASE_HANDLE(109);
        CASE_HANDLE(110);
        CASE_HANDLE(111);
        CASE_HANDLE(112);
        CASE_HANDLE(113);
        CASE_HANDLE(114);
        CASE_HANDLE(115);
        CASE_HANDLE(116);
        CASE_HANDLE(117);
        CASE_HANDLE(118);
        CASE_HANDLE(119);
        CASE_HANDLE(120);
        CASE_HANDLE(121);
        CASE_HANDLE(122);
        CASE_HANDLE(123);
        CASE_HANDLE(124);
        CASE_HANDLE(125);
        CASE_HANDLE(126);
        CASE_HANDLE(127);
        CASE_HANDLE(128);
        CASE_HANDLE(129);
        CASE_HANDLE(130);
        CASE_HANDLE(131);
        CASE_HANDLE(132);
        CASE_HANDLE(133);
        CASE_HANDLE(134);
        CASE_HANDLE(135);
        CASE_HANDLE(136);
        CASE_HANDLE(137);
        CASE_HANDLE(138);
        CASE_HANDLE(139);
        CASE_HANDLE(140);
        CASE_HANDLE(141);
        CASE_HANDLE(142);
        CASE_HANDLE(143);
        CASE_HANDLE(144);
        CASE_HANDLE(145);
        CASE_HANDLE(146);
        CASE_HANDLE(147);
        CASE_HANDLE(148);
        CASE_HANDLE(149);
        CASE_HANDLE(150);
        CASE_HANDLE(151);
        CASE_HANDLE(152);
        CASE_HANDLE(153);
        CASE_HANDLE(154);
        CASE_HANDLE(155);
        CASE_HANDLE(156);
        CASE_HANDLE(157);
        CASE_HANDLE(158);
        CASE_HANDLE(159);
        CASE_HANDLE(160);
        CASE_HANDLE(161);
        CASE_HANDLE(162);
        CASE_HANDLE(163);
        CASE_HANDLE(164);
        CASE_HANDLE(165);
        CASE_HANDLE(166);
        CASE_HANDLE(167);
        CASE_HANDLE(168);
        CASE_HANDLE(169);
        CASE_HANDLE(170);
        CASE_HANDLE(171);
        CASE_HANDLE(172);
        CASE_HANDLE(173);
        CASE_HANDLE(174);
        CASE_HANDLE(175);
        CASE_HANDLE(176);
        CASE_HANDLE(177);
        CASE_HANDLE(178);
        CASE_HANDLE(179);
        CASE_HANDLE(180);
        CASE_HANDLE(181);
        CASE_HANDLE(182);
        CASE_HANDLE(183);
        CASE_HANDLE(184);
        CASE_HANDLE(185);
        CASE_HANDLE(186);
        CASE_HANDLE(187);
        CASE_HANDLE(188);
        CASE_HANDLE(189);
        CASE_HANDLE(190);
        CASE_HANDLE(191);
        CASE_HANDLE(192);
        CASE_HANDLE(193);
        CASE_HANDLE(194);
        CASE_HANDLE(195);
        CASE_HANDLE(196);
        CASE_HANDLE(197);
        CASE_HANDLE(198);
        CASE_HANDLE(199);
        CASE_HANDLE(200);
        CASE_HANDLE(201);
        CASE_HANDLE(202);
        CASE_HANDLE(203);
        CASE_HANDLE(204);
        CASE_HANDLE(205);
        CASE_HANDLE(206);
        CASE_HANDLE(207);
        CASE_HANDLE(208);
        CASE_HANDLE(209);
        CASE_HANDLE(210);
        CASE_HANDLE(211);
        CASE_HANDLE(212);
        CASE_HANDLE(213);
        CASE_HANDLE(214);
        CASE_HANDLE(215);
        CASE_HANDLE(216);
        CASE_HANDLE(217);
        CASE_HANDLE(218);
        CASE_HANDLE(219);
        CASE_HANDLE(220);
        CASE_HANDLE(221);
        CASE_HANDLE(222);
        CASE_HANDLE(223);
        CASE_HANDLE(224);
        CASE_HANDLE(225);
        CASE_HANDLE(226);
        CASE_HANDLE(227);
        CASE_HANDLE(228);
        CASE_HANDLE(229);
        CASE_HANDLE(230);
        CASE_HANDLE(231);
        CASE_HANDLE(232);
        CASE_HANDLE(233);
        CASE_HANDLE(234);
        CASE_HANDLE(235);
        CASE_HANDLE(236);
        CASE_HANDLE(237);
        CASE_HANDLE(238);
        CASE_HANDLE(239);
        CASE_HANDLE(240);
        CASE_HANDLE(241);
        CASE_HANDLE(242);
        CASE_HANDLE(243);
        CASE_HANDLE(244);
        CASE_HANDLE(245);
        CASE_HANDLE(246);
        CASE_HANDLE(247);
        CASE_HANDLE(248);
        CASE_HANDLE(249);
    }

    return NULL;
}
