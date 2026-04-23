```c

__int64 __fastcall sub_14C8D5690(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // r15
  unsigned int *v5; // r15
  _QWORD *v6; // rdi
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  int *v28; // rax
  int v29; // ecx
  __int128 v30; // xmm0
  int *v31; // rax
  int v32; // ecx
  __int128 v33; // xmm0
  int *v34; // rax
  int v35; // ecx
  __int128 v36; // xmm0
  int *v37; // rax
  int v38; // ecx
  __int128 v39; // xmm0
  int *v40; // rax
  int v41; // ecx
  __int128 v42; // xmm0
  int *v43; // rax
  int v44; // ecx
  int *v45; // rax
  int v46; // ecx
  __int128 v47; // xmm0
  int *v48; // rax
  int v49; // ecx
  __int128 v50; // xmm0
  int *v51; // rax
  int v52; // ecx
  __int128 v53; // xmm0
  int *v54; // rax
  int v55; // ecx
  __int128 v56; // xmm0
  int *v57; // rax
  int v58; // ecx
  __int128 v59; // xmm0
  int *v60; // rax
  int v61; // ecx
  __int128 v62; // xmm0
  int *v63; // rax
  int v64; // ecx
  int *v65; // rax
  int v66; // ecx
  __int128 v67; // xmm0
  int *v68; // rax
  int v69; // ecx
  __int128 v70; // xmm0
  int *v71; // rax
  int v72; // ecx
  __int128 v73; // xmm0
  int *v74; // rax
  int v75; // ecx
  __int128 v76; // xmm0
  int *v77; // rax
  int v78; // ecx
  __int128 v79; // xmm0
  int *v80; // rax
  int v81; // ecx
  __int128 v82; // xmm0
  int *v83; // rax
  int v84; // ecx
  __int128 v85; // xmm0
  int *v86; // rax
  int v87; // ecx
  __int128 v88; // xmm0
  int *v89; // rax
  int v90; // ecx
  __int128 v91; // xmm0
  int *v92; // rax
  int v93; // ecx
  __m128i v94; // xmm0
  int *v95; // rax
  int v96; // ecx
  __int128 v97; // xmm0
  int *v98; // rax
  int v99; // ecx
  __int128 v100; // xmm0
  int *v101; // rax
  int v102; // ecx
  __int128 v103; // xmm0
  int *v104; // rax
  int v105; // ecx
  __int128 v106; // xmm0
  int *v107; // rax
  int v108; // ecx
  __int128 v109; // xmm0
  int *v110; // rax
  int v111; // ecx
  int *v112; // rax
  int v113; // ecx
  __int128 v114; // xmm0
  int *v115; // rax
  int v116; // ecx
  __int128 v117; // xmm0
  int *v118; // rax
  int v119; // ecx
  __int128 v120; // xmm0
  int *v121; // rax
  int v122; // ecx
  __int128 v123; // xmm0
  int *v124; // rax
  int v125; // ecx
  __int128 v126; // xmm0
  int *v127; // rax
  int v128; // ecx
  __int128 v129; // xmm0
  int *v130; // rax
  int v131; // ecx
  int *v132; // rax
  int v133; // ecx
  __int128 v134; // xmm0
  int *v135; // rax
  int v136; // ecx
  __int128 v137; // xmm0
  int *v138; // rax
  int v139; // ecx
  __int128 v140; // xmm0
  int *v141; // rax
  int v142; // ecx
  __int128 v143; // xmm0
  int *v144; // rax
  int v145; // ecx
  __int128 v146; // xmm0
  int *v147; // rax
  int v148; // ecx
  __int128 v149; // xmm0
  int *v150; // rax
  int v151; // ecx
  __int128 v152; // xmm0
  int *v153; // rax
  int v154; // ecx
  __int128 v155; // xmm0
  int *v156; // rax
  int v157; // ecx
  __int128 v158; // xmm0
  int *v159; // rax
  int v160; // ecx
  __int128 v161; // xmm0
  int *v162; // rax
  int v163; // ecx
  __int128 v164; // xmm0
  int *v165; // rax
  int v166; // ecx
  __int128 v167; // xmm0
  int v168; // ecx
  __int128 v169; // xmm0
  int *v170; // rax
  int v171; // ecx
  __int128 v172; // xmm0
  int *v173; // rax
  int v174; // ecx
  __int128 v175; // xmm0
  int *v176; // rax
  int v177; // ecx
  __int128 v178; // xmm0
  int *v179; // rax
  int v180; // ecx
  __int128 v181; // xmm0
  int *v182; // rax
  int v183; // ecx
  __int128 v184; // xmm0
  int *v185; // rax
  int v186; // ecx
  int *v187; // rax
  int v188; // ecx
  __int128 v189; // xmm0
  int *v190; // rax
  int v191; // ecx
  __int128 v192; // xmm0
  int *v193; // rax
  int v194; // ecx
  __int128 v195; // xmm0
  int *v196; // rax
  int v197; // ecx
  __int128 v198; // xmm0
  int *v199; // rax
  int v200; // ecx
  __int128 v201; // xmm0
  int *v202; // rax
  int v203; // ecx
  __int128 v204; // xmm0
  int *v205; // rax
  int v206; // ecx
  int *v207; // rax
  int v208; // ecx
  __int128 v209; // xmm0
  int *v210; // rax
  int v211; // ecx
  __int128 v212; // xmm0
  int *v213; // rax
  int v214; // ecx
  __int128 v215; // xmm0
  int *v216; // rax
  int v217; // ecx
  __int128 v218; // xmm0
  int *v219; // rax
  int v220; // ecx
  __int128 v221; // xmm0
  int *v222; // rax
  int v223; // ecx
  __int128 v224; // xmm0
  int *v225; // rax
  int v226; // ecx
  __int128 v227; // xmm0
  int *v228; // rax
  int v229; // ecx
  __int128 v230; // xmm0
  int *v231; // rax
  int v232; // ecx
  __int128 v233; // xmm0
  int *v234; // rax
  int v235; // ecx
  __int128 v236; // xmm0
  int *v237; // rax
  int v238; // ecx
  __int128 v239; // xmm0
  int *v240; // rax
  int v241; // ecx
  __int128 v242; // xmm0
  int v243; // ecx
  __int128 v244; // xmm0
  int *v245; // rax
  int v246; // ecx
  __int128 v247; // xmm0
  int *v248; // rax
  int v249; // ecx
  __int128 v250; // xmm0
  int *v251; // rax
  int v252; // ecx
  __int128 v253; // xmm0
  int *v254; // rax
  int v255; // ecx
  __int128 v256; // xmm0
  int *v257; // rax
  int v258; // ecx
  __int128 v259; // xmm0
  int *v260; // rax
  int v261; // ecx
  int *v262; // rax
  int v263; // ecx
  __int128 v264; // xmm0
  int *v265; // rax
  int v266; // ecx
  __int128 v267; // xmm0
  int *v268; // rax
  int v269; // ecx
  __int128 v270; // xmm0
  int *v271; // rax
  int v272; // ecx
  __int128 v273; // xmm0
  int *v274; // rax
  int v275; // ecx
  __int128 v276; // xmm0
  int *v277; // rax
  int v278; // ecx
  __int128 v279; // xmm0
  int *v280; // rax
  int v281; // ecx
  int *v282; // rax
  int v283; // ecx
  __int128 v284; // xmm0
  int *v285; // rax
  int v286; // ecx
  __int128 v287; // xmm0
  int *v288; // rax
  int v289; // ecx
  __int128 v290; // xmm0
  int *v291; // rax
  int v292; // ecx
  __int128 v293; // xmm0
  int *v294; // rax
  int v295; // ecx
  __int128 v296; // xmm0
  int *v297; // rax
  int v298; // ecx
  __int128 v299; // xmm0
  int *v300; // rax
  int v301; // ecx
  __int128 v302; // xmm0
  int *v303; // rax
  int v304; // ecx
  __int128 v305; // xmm0
  int *v306; // rax
  int v307; // ecx
  __int128 v308; // xmm0
  int *v309; // rax
  int v310; // ecx
  __int128 v311; // xmm0
  int *v312; // rax
  int v313; // ecx
  __int128 v314; // xmm0
  int *v315; // rax
  int v316; // ecx
  __int128 v317; // xmm0
  int v318; // ecx
  __int128 v319; // xmm0
  int *v320; // rax
  int v321; // ecx
  __int128 v322; // xmm0
  int *v323; // rax
  int v324; // ecx
  __int128 v325; // xmm0
  int *v326; // rax
  int v327; // ecx
  __int128 v328; // xmm0
  int *v329; // rax
  int v330; // ecx
  __int128 v331; // xmm0
  int *v332; // rax
  int v333; // ecx
  __int128 v334; // xmm0
  int *v335; // rax
  int v336; // ecx
  int *v337; // rax
  int v338; // ecx
  __int128 v339; // xmm0
  int *v340; // rax
  int v341; // ecx
  __int128 v342; // xmm0
  int *v343; // rax
  int v344; // ecx
  __int128 v345; // xmm0
  int *v346; // rax
  int v347; // ecx
  __int128 v348; // xmm0
  int *v349; // rax
  int v350; // ecx
  __int128 v351; // xmm0
  int *v352; // rax
  int v353; // ecx
  __int128 v354; // xmm0
  int *v355; // rax
  int v356; // ecx
  int *v357; // rax
  int v358; // ecx
  __int128 v359; // xmm0
  int *v360; // rax
  int v361; // ecx
  __int128 v362; // xmm0
  int *v363; // rax
  int v364; // ecx
  __int128 v365; // xmm0
  int *v366; // rax
  int v367; // ecx
  __int128 v368; // xmm0
  int *v369; // rax
  int v370; // ecx
  __int128 v371; // xmm0
  int *v372; // rax
  int v373; // ecx
  __int128 v374; // xmm0
  int *v375; // rax
  int v376; // ecx
  __int128 v377; // xmm0
  int *v378; // rax
  int v379; // ecx
  __int128 v380; // xmm0
  int *v381; // rax
  int v382; // ecx
  __int128 v383; // xmm0
  int *v384; // rax
  int v385; // ecx
  __int128 v386; // xmm0
  int *v387; // rax
  int v388; // ecx
  __int128 v389; // xmm0
  int *v390; // rax
  int v391; // ecx
  __int128 v392; // xmm0
  int v393; // ecx
  __int128 v394; // xmm0
  int *v395; // rax
  int v396; // ecx
  __int128 v397; // xmm0
  int *v398; // rax
  int v399; // ecx
  __int128 v400; // xmm0
  int *v401; // rax
  int v402; // ecx
  __int128 v403; // xmm0
  int *v404; // rax
  int v405; // ecx
  __int128 v406; // xmm0
  int *v407; // rax
  int v408; // ecx
  __int128 v409; // xmm0
  int *v410; // rax
  int v411; // ecx
  int *v412; // rax
  int v413; // ecx
  __int128 v414; // xmm0
  int *v415; // rax
  int v416; // ecx
  __int128 v417; // xmm0
  int *v418; // rax
  int v419; // ecx
  __int128 v420; // xmm0
  int *v421; // rax
  int v422; // ecx
  __int128 v423; // xmm0
  int *v424; // rax
  int v425; // ecx
  __int128 v426; // xmm0
  int *v427; // rax
  int v428; // ecx
  __int128 v429; // xmm0
  int *v430; // rax
  int v431; // ecx
  int *v432; // rax
  int v433; // ecx
  __int128 v434; // xmm0
  int *v435; // rax
  int v436; // ecx
  __int128 v437; // xmm0
  int *v438; // rax
  int v439; // ecx
  __int128 v440; // xmm0
  int *v441; // rax
  int v442; // ecx
  __int128 v443; // xmm0
  int *v444; // rax
  int v445; // ecx
  __int128 v446; // xmm0
  int *v447; // rax
  int v448; // ecx
  __int128 v449; // xmm0
  int *v450; // rax
  int v451; // ecx
  __int128 v452; // xmm0
  int *v453; // rax
  int v454; // ecx
  __int128 v455; // xmm0
  int *v456; // rax
  int v457; // ecx
  __int128 v458; // xmm0
  int *v459; // rax
  int v460; // ecx
  __int128 v461; // xmm0
  int *v462; // rax
  int v463; // ecx
  __int128 v464; // xmm0
  int *v465; // rax
  int v466; // ecx
  __int128 v467; // xmm0
  int v468; // ecx
  __int128 v469; // xmm0
  int *v470; // rax
  int v471; // ecx
  __int128 v472; // xmm0
  int *v473; // rax
  int v474; // ecx
  __int128 v475; // xmm0
  int *v476; // rax
  int v477; // ecx
  __int128 v478; // xmm0
  int *v479; // rax
  int v480; // ecx
  __int128 v481; // xmm0
  int *v482; // rax
  int v483; // ecx
  __int128 v484; // xmm0
  int *v485; // rax
  int v486; // ecx
  unsigned int v487; // edi
  unsigned int v488; // ecx
  __int64 v489; // rax
  volatile signed __int32 *v490; // rdi
  __int128 v492; // [rsp+30h] [rbp-D0h] BYREF
  char v493[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v494; // [rsp+44h] [rbp-BCh] BYREF
  char v495[8]; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v496; // [rsp+50h] [rbp-B0h]
  char v497[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v498[4]; // [rsp+64h] [rbp-9Ch] BYREF
  char v499[4]; // [rsp+68h] [rbp-98h] BYREF
  char v500[4]; // [rsp+6Ch] [rbp-94h] BYREF
  char v501[4]; // [rsp+70h] [rbp-90h] BYREF
  char v502[4]; // [rsp+74h] [rbp-8Ch] BYREF
  char v503[4]; // [rsp+78h] [rbp-88h] BYREF
  char v504[4]; // [rsp+7Ch] [rbp-84h] BYREF
  char v505[4]; // [rsp+80h] [rbp-80h] BYREF
  char v506[4]; // [rsp+84h] [rbp-7Ch] BYREF
  char v507[4]; // [rsp+88h] [rbp-78h] BYREF
  char v508[4]; // [rsp+8Ch] [rbp-74h] BYREF
  char v509[4]; // [rsp+90h] [rbp-70h] BYREF
  char v510[4]; // [rsp+94h] [rbp-6Ch] BYREF
  char v511[4]; // [rsp+98h] [rbp-68h] BYREF
  char v512[4]; // [rsp+9Ch] [rbp-64h] BYREF
  char v513[4]; // [rsp+A0h] [rbp-60h] BYREF
  char v514[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  char v515[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v516[4]; // [rsp+ACh] [rbp-54h] BYREF
  char v517[4]; // [rsp+B0h] [rbp-50h] BYREF
  char v518[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  char v519[4]; // [rsp+B8h] [rbp-48h] BYREF
  char v520[4]; // [rsp+BCh] [rbp-44h] BYREF
  char v521[4]; // [rsp+C0h] [rbp-40h] BYREF
  char v522[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  char v523[4]; // [rsp+C8h] [rbp-38h] BYREF
  char v524[4]; // [rsp+CCh] [rbp-34h] BYREF
  char v525[4]; // [rsp+D0h] [rbp-30h] BYREF
  char v526[4]; // [rsp+D4h] [rbp-2Ch] BYREF
  char v527[4]; // [rsp+D8h] [rbp-28h] BYREF
  char v528[4]; // [rsp+DCh] [rbp-24h] BYREF
  char v529[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v530[4]; // [rsp+E4h] [rbp-1Ch] BYREF
  char v531[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v532[4]; // [rsp+ECh] [rbp-14h] BYREF
  char v533[4]; // [rsp+F0h] [rbp-10h] BYREF
  char v534[4]; // [rsp+F4h] [rbp-Ch] BYREF
  char v535[4]; // [rsp+F8h] [rbp-8h] BYREF
  char v536[4]; // [rsp+FCh] [rbp-4h] BYREF
  char v537[4]; // [rsp+100h] [rbp+0h] BYREF
  char v538[4]; // [rsp+104h] [rbp+4h] BYREF
  char v539[4]; // [rsp+108h] [rbp+8h] BYREF
  char v540[4]; // [rsp+10Ch] [rbp+Ch] BYREF
  char v541[4]; // [rsp+110h] [rbp+10h] BYREF
  char v542[4]; // [rsp+114h] [rbp+14h] BYREF
  char v543[4]; // [rsp+118h] [rbp+18h] BYREF
  char v544[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  char v545[4]; // [rsp+120h] [rbp+20h] BYREF
  char v546[4]; // [rsp+124h] [rbp+24h] BYREF
  char v547[4]; // [rsp+128h] [rbp+28h] BYREF
  char v548[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
  char v549[4]; // [rsp+130h] [rbp+30h] BYREF
  char v550[4]; // [rsp+134h] [rbp+34h] BYREF
  char v551[4]; // [rsp+138h] [rbp+38h] BYREF
  char v552[4]; // [rsp+13Ch] [rbp+3Ch] BYREF
  char v553[4]; // [rsp+140h] [rbp+40h] BYREF
  char v554[4]; // [rsp+144h] [rbp+44h] BYREF
  char v555[4]; // [rsp+148h] [rbp+48h] BYREF
  char v556[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
  char v557[4]; // [rsp+150h] [rbp+50h] BYREF
  char v558[4]; // [rsp+154h] [rbp+54h] BYREF
  char v559[4]; // [rsp+158h] [rbp+58h] BYREF
  char v560[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
  char v561[4]; // [rsp+160h] [rbp+60h] BYREF
  char v562[4]; // [rsp+164h] [rbp+64h] BYREF
  char v563[4]; // [rsp+168h] [rbp+68h] BYREF
  char v564[4]; // [rsp+16Ch] [rbp+6Ch] BYREF
  const char *v565; // [rsp+170h] [rbp+70h] BYREF
  int v566; // [rsp+178h] [rbp+78h]
  char v567; // [rsp+17Ch] [rbp+7Ch]
  __int16 v568; // [rsp+17Dh] [rbp+7Dh]
  char v569; // [rsp+17Fh] [rbp+7Fh]
  __m128i v570; // [rsp+180h] [rbp+80h]
  char v571; // [rsp+194h] [rbp+94h]

  MEMORY[0x7FFA21B5DEC0]();
  sub_150266849();
  *(_QWORD *)(a1 + 0x10008) = 0LL;
  *(_QWORD *)(a1 + 0x10010) = 0LL;
  *(_QWORD *)(a1 + 0x10018) = 0LL;
  v2 = sub_14C8E3810();
  *(_QWORD *)(a1 + 8) = sub_14C7B7F30(0x80000LL, *(unsigned int *)(v2 + 0x10));
  *(_DWORD *)(a1 + 0x10020) = 0;
  *(_DWORD *)(a1 + 0x10024) = 0;
  v3 = (_QWORD *)(a1 + 0x10040);
  v4 = 0x10LL;
  do
  {
    MEMORY[0x7FFA21B5DEC0](v3);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  v5 = (unsigned int *)(a1 + 0x10440);
  sub_150266849();
  *(_QWORD *)(a1 + 0x12DB8) = 0LL;
  *(_QWORD *)(a1 + 0x12DC0) = 0LL;
  *(_QWORD *)(a1 + 0x12E08) = 0LL;
  *(_QWORD *)(a1 + 0x12E10) = 0LL;
  *(_DWORD *)(a1 + 0x12E18) = 0xFFFFFFFF;
  *(_DWORD *)(a1 + 0x12E1C) = 0;
  *(_QWORD *)(a1 + 0x13220) = 0LL;
  *(_DWORD *)(a1 + 0x13228) = 0;
  if ( a1 + 0x10040 != a1 + 0x10440 )
  {
    v6 = (_QWORD *)(a1 + 0x10050);
    do
    {
      v6[1] = a1;
      *v6 = sub_14C7B7F30(0x400LL, 4LL);
      sub_150266849();
      *((_DWORD *)v6 + 0xFFFFFFFF) = 0xFF;
      v6 += 8;
    }
    while ( v6 + 0xFFFFFFFE != (_QWORD *)(a1 + 0x10440) );
  }
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "None";
  v493[0] = 0;
  v565 = "None";
  v566 = 4;
  v7 = *(__m128i *)sub_14C8D4580(&v492);
  v571 = 0;
  v570 = v7;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v7) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *v5 = v494;
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "N0ne";
  v493[0] = 0;
  v565 = "N0ne";
  v566 = 4;
  v8 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v8;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v8) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10560) = v494;
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "Nome";
  v493[0] = 0;
  v565 = "Nome";
  v566 = 4;
  v9 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v9;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v9) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10564) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "30949b77fd7e7042";
  v493[0] = 0;
  v565 = "30949b77fd7e7042";
  v566 = 0x10;
  v10 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v10;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v10) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10448) = v494;
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "SHVector";
  v493[0] = 0;
  v565 = "SHVector";
  v566 = 8;
  v11 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v11;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v11) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10534) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "992e7de5ca74c4d4";
  v493[0] = 0;
  v565 = "992e7de5ca74c4d4";
  v566 = 0x10;
  v12 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v12;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v12) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10450) = v494;
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "Color";
  v493[0] = 0;
  v565 = "Color";
  v566 = 5;
  v13 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v13;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v13) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10538) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "e80c4d39f32503c7";
  v493[0] = 0;
  v565 = "e80c4d39f32503c7";
  v566 = 0x10;
  v14 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v14;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v14) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x1047C) = v494;
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "Plane";
  v493[0] = 0;
  v565 = "Plane";
  v566 = 5;
  v15 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v15;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v15) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x1053C) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "f325031e27a4a292";
  v493[0] = 0;
  v565 = "f325031e27a4a292";
  v566 = 0x10;
  v16 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v16;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v16) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x104E0) = v494;
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "Matrix";
  v493[0] = 0;
  v565 = "Matrix";
  v566 = 6;
  v17 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v17;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v17) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10540) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "1708c31e2528cc02";
  v493[0] = 0;
  v565 = "1708c31e2528cc02";
  v566 = 0x10;
  v18 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v18;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v18) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x104E4) = v494;
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "Sphere";
  v493[0] = 0;
  v565 = "Sphere";
  v566 = 6;
  v19 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v19;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v19) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10510) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "08c31e27ac31e252";
  v493[0] = 0;
  v565 = "08c31e27ac31e252";
  v566 = 0x10;
  v20 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v20;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v20) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x104E8) = v494;
  DWORD2(v492) = 3;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = &dword_150745470;
  v493[0] = 0;
  v565 = (const char *)&dword_150745470;
  v566 = 3;
  v21 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v21;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v21) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10514) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "c31e2c31e2528cc0";
  v493[0] = 0;
  v565 = "c31e2c31e2528cc0";
  v566 = 0x10;
  v22 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v22;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v22) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x104EC) = v494;
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "Vector2D";
  v493[0] = 0;
  v565 = "Vector2D";
  v566 = 8;
  v23 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v23;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v23) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x10518) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "31e27a1e27a4a292";
  v493[0] = 0;
  v565 = "31e27a1e27a4a292";
  v566 = 0x10;
  v24 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v24;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v24) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x104F0) = v494;
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "IntRect";
  v493[0] = 0;
  v565 = "IntRect";
  v566 = 7;
  v25 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v25;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v25) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x1051C) = v494;
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "e2528ce2528cc022";
  v493[0] = 0;
  v565 = "e2528ce2528cc022";
  v566 = 0x10;
  v26 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v26;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v26) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  *(_DWORD *)(a1 + 0x104F4) = v494;
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_QWORD *)&v492 = "IntPoint";
  v493[0] = 0;
  v565 = "IntPoint";
  v566 = 8;
  v27 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v27;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v27) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  *(_DWORD *)(a1 + 0x10520) = v494;
  *(_QWORD *)&v492 = "7ac31e257ac3e252";
  v28 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v29 = *v28;
  *(_QWORD *)&v492 = "Vector4";
  v30 = v492;
  *(_DWORD *)(a1 + 0x104F8) = v29;
  v492 = v30;
  v31 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v32 = *v31;
  *(_QWORD *)&v492 = "8c31ec31e2528cc0";
  v33 = v492;
  *(_DWORD *)(a1 + 0x10524) = v32;
  v492 = v33;
  v34 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v35 = *v34;
  *(_QWORD *)&v492 = "Name";
  v36 = v492;
  *(_DWORD *)(a1 + 0x104FC) = v35;
  v492 = v36;
  v37 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v38 = *v37;
  *(_QWORD *)&v492 = "b77fd7e727a4a292";
  v39 = v492;
  *(_DWORD *)(a1 + 0x10528) = v38;
  v492 = v39;
  v40 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v41 = *v40;
  *(_QWORD *)&v492 = "Vector";
  v42 = v492;
  *(_DWORD *)(a1 + 0x10500) = v41;
  v492 = v42;
  v43 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v44 = *v43;
  *(_QWORD *)&v492 = "27a4a292528cc021";
  *(_DWORD *)(a1 + 0x1052C) = v44;
  v45 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v46 = *v45;
  *(_QWORD *)&v492 = "Rotator";
  v47 = v492;
  *(_DWORD *)(a1 + 0x10504) = v46;
  v492 = v47;
  v48 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v49 = *v48;
  *(_QWORD *)&v492 = "StrProperty";
  v50 = v492;
  *(_DWORD *)(a1 + 0x10530) = v49;
  v492 = v50;
  v51 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v52 = *v51;
  *(_QWORD *)&v492 = "ObjectArchetype";
  v53 = v492;
  *(_DWORD *)(a1 + 0x10474) = v52;
  v492 = v53;
  v54 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v55 = *v54;
  *(_QWORD *)&v492 = "Class";
  v56 = v492;
  *(_DWORD *)(a1 + 0x105E0) = v55;
  v492 = v56;
  v57 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v58 = *v57;
  *(_QWORD *)&v492 = "ScriptStruct";
  v59 = v492;
  *(_DWORD *)(a1 + 0x105E4) = v58;
  v492 = v59;
  v60 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v61 = *v60;
  *(_QWORD *)&v492 = "Function";
  v62 = v492;
  *(_DWORD *)(a1 + 0x105E8) = v61;
  v492 = v62;
  v63 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v64 = *v63;
  *(_QWORD *)&v492 = "State";
  *(_DWORD *)(a1 + 0x105EC) = v64;
  v65 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v66 = *v65;
  *(_QWORD *)&v492 = "TRUE";
  v67 = v492;
  *(_DWORD *)(a1 + 0x10760) = v66;
  v492 = v67;
  v68 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v69 = *v68;
  *(_QWORD *)&v492 = "FALSE";
  v70 = v492;
  *(_DWORD *)(a1 + 0x10764) = v69;
  v492 = v70;
  v71 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v72 = *v71;
  *(_QWORD *)&v492 = "UInt16Property";
  v73 = v492;
  *(_DWORD *)(a1 + 0x10768) = v72;
  v492 = v73;
  v74 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v75 = *v74;
  *(_QWORD *)&v492 = "Enum";
  v76 = v492;
  *(_DWORD *)(a1 + 0x104A8) = v75;
  v492 = v76;
  v77 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v78 = *v77;
  *(_QWORD *)&v492 = "Default";
  v79 = v492;
  *(_DWORD *)(a1 + 0x1076C) = v78;
  v492 = v79;
  v80 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v81 = *v80;
  *(_QWORD *)&v492 = "Skip";
  v82 = v492;
  *(_DWORD *)(a1 + 0x10770) = v81;
  v492 = v82;
  *(_DWORD *)(a1 + 0x10774) = *(_DWORD *)sub_14C8F9350(a1, &v494, &v492);
  *(_QWORD *)&v492 = "Input";
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v83 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v84 = *v83;
  *(_QWORD *)&v492 = "Package";
  v85 = v492;
  *(_DWORD *)(a1 + 0x10778) = v84;
  v492 = v85;
  v86 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v87 = *v86;
  *(_QWORD *)&v492 = "Groups";
  v88 = v492;
  *(_DWORD *)(a1 + 0x1077C) = v87;
  v492 = v88;
  v89 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v90 = *v89;
  *(_QWORD *)&v492 = "Interface";
  v91 = v492;
  *(_DWORD *)(a1 + 0x10780) = v90;
  v492 = v91;
  v92 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  *(_QWORD *)&v492 = "VectorProperty";
  v93 = *v92;
  v567 = 0;
  v568 = *(_WORD *)((char *)&v492 + 0xD);
  v569 = HIBYTE(v492);
  *(_DWORD *)(a1 + 0x10784) = v93;
  v493[0] = 0;
  v565 = "VectorProperty";
  v566 = 0xE;
  v94 = *(__m128i *)sub_14C8D4580(v495);
  v571 = 0;
  v570 = v94;
  sub_14C8ED220(a1 + (((unsigned int)_mm_cvtsi128_si32(v94) + 0x401LL) << 6), (int *)&v494, (__int64)&v565, v493);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 0x10020), (unsigned __int8)v493[0]);
  DWORD2(v492) = 0xA;
  BYTE12(v492) = 0;
  *(_DWORD *)(a1 + 0x1046C) = v494;
  *(_QWORD *)&v492 = "Components";
  v95 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v96 = *v95;
  *(_QWORD *)&v492 = "Global";
  v97 = v492;
  *(_DWORD *)(a1 + 0x10788) = v96;
  v492 = v97;
  v98 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v99 = *v98;
  *(_QWORD *)&v492 = "PackageMetaData";
  v100 = v492;
  *(_DWORD *)(a1 + 0x1078C) = v99;
  v492 = v100;
  v101 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v102 = *v101;
  *(_QWORD *)&v492 = "InitialState";
  v103 = v492;
  *(_DWORD *)(a1 + 0x107AC) = v102;
  v492 = v103;
  v104 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v105 = *v104;
  *(_QWORD *)&v492 = "Game";
  v106 = v492;
  *(_DWORD *)(a1 + 0x107B0) = v105;
  v492 = v106;
  v107 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v108 = *v107;
  *(_QWORD *)&v492 = "LinearColor";
  v109 = v492;
  *(_DWORD *)(a1 + 0x107B4) = v108;
  v492 = v109;
  v110 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v111 = *v110;
  *(_QWORD *)&v492 = "AdvanceFrame";
  *(_DWORD *)(a1 + 0x10544) = v111;
  v112 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v113 = *v112;
  *(_QWORD *)&v492 = "Pointer";
  v114 = v492;
  *(_DWORD *)(a1 + 0x10548) = v113;
  v492 = v114;
  v115 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v116 = *v115;
  *(_QWORD *)&v492 = "Double";
  v117 = v492;
  *(_DWORD *)(a1 + 0x1054C) = v116;
  v492 = v117;
  v118 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v119 = *v118;
  *(_QWORD *)&v492 = "Quat";
  v120 = v492;
  *(_DWORD *)(a1 + 0x10550) = v119;
  v492 = v120;
  v121 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v122 = *v121;
  *(_QWORD *)&v492 = "Self";
  v123 = v492;
  *(_DWORD *)(a1 + 0x10554) = v122;
  v492 = v123;
  v124 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v125 = *v124;
  *(_QWORD *)&v492 = "Transform";
  v126 = v492;
  *(_DWORD *)(a1 + 0x10558) = v125;
  v492 = v126;
  v127 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v128 = *v127;
  *(_QWORD *)&v492 = "Object";
  v129 = v492;
  *(_DWORD *)(a1 + 0x1055C) = v128;
  v492 = v129;
  v130 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v131 = *v130;
  *(_QWORD *)&v492 = "Camera";
  *(_DWORD *)(a1 + 0x105D0) = v131;
  v132 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v133 = *v132;
  *(_QWORD *)&v492 = "Actor";
  v134 = v492;
  *(_DWORD *)(a1 + 0x105D4) = v133;
  v492 = v134;
  v135 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v136 = *v135;
  *(_QWORD *)&v492 = "ObjectRedirector";
  v137 = v492;
  *(_DWORD *)(a1 + 0x105D8) = v136;
  v492 = v137;
  v138 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v139 = *v138;
  *(_QWORD *)&v492 = "MapProperty";
  v140 = v492;
  *(_DWORD *)(a1 + 0x105DC) = v139;
  v492 = v140;
  v141 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v142 = *v141;
  *(_QWORD *)&v492 = "Cylinder";
  v143 = v492;
  *(_DWORD *)(a1 + 0x104B0) = v142;
  v492 = v143;
  v144 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v145 = *v144;
  *(_QWORD *)&v492 = "BoxSphereBounds";
  v146 = v492;
  *(_DWORD *)(a1 + 0x10508) = v145;
  v492 = v146;
  v147 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v148 = *v147;
  *(_QWORD *)&v492 = "SelectionColor";
  v149 = v492;
  *(_DWORD *)(a1 + 0x1050C) = v148;
  v492 = v149;
  *(_DWORD *)(a1 + 0x107B8) = *(_DWORD *)sub_14C8F9350(a1, &v494, &v492);
  *(_QWORD *)&v492 = &unk_150F1C5A8;
  DWORD2(v492) = 2;
  BYTE12(v492) = 0;
  v150 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v151 = *v150;
  *(_QWORD *)&v492 = "ExecuteUbergraph";
  v152 = v492;
  *(_DWORD *)(a1 + 0x107BC) = v151;
  v492 = v152;
  v153 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v154 = *v153;
  *(_QWORD *)&v492 = "DeviceID";
  v155 = v492;
  *(_DWORD *)(a1 + 0x107C0) = v154;
  v492 = v155;
  v156 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v157 = *v156;
  *(_QWORD *)&v492 = "RootStat";
  v158 = v492;
  *(_DWORD *)(a1 + 0x107C4) = v157;
  v492 = v158;
  v159 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v160 = *v159;
  *(_QWORD *)&v492 = "NameProperty";
  v161 = v492;
  *(_DWORD *)(a1 + 0x107C8) = v160;
  v492 = v161;
  v162 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v163 = *v162;
  *(_QWORD *)&v492 = "MoveActor";
  v164 = v492;
  *(_DWORD *)(a1 + 0x10458) = v163;
  v492 = v164;
  v165 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 3;
  BYTE12(v492) = 0;
  v166 = *v165;
  *(_QWORD *)&v492 = "All";
  v167 = v492;
  *(_DWORD *)(a1 + 0x107CC) = v166;
  v492 = v167;
  v168 = *(_DWORD *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  *(_QWORD *)&v492 = "ExpressionInput";
  BYTE12(v492) = 0;
  v169 = v492;
  *(_DWORD *)(a1 + 0x107D8) = v168;
  v492 = v169;
  v170 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v171 = *v170;
  *(_QWORD *)&v492 = "Untitled";
  v172 = v492;
  *(_DWORD *)(a1 + 0x107F8) = v171;
  v492 = v172;
  v173 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v174 = *v173;
  *(_QWORD *)&v492 = "Timer";
  v175 = v492;
  *(_DWORD *)(a1 + 0x107FC) = v174;
  v492 = v175;
  v176 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v177 = *v176;
  *(_QWORD *)&v492 = "Team";
  v178 = v492;
  *(_DWORD *)(a1 + 0x10800) = v177;
  v492 = v178;
  v179 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v180 = *v179;
  *(_QWORD *)&v492 = "Super";
  v181 = v492;
  *(_DWORD *)(a1 + 0x10804) = v180;
  v492 = v181;
  v182 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v183 = *v182;
  *(_QWORD *)&v492 = "UInt32Property";
  v184 = v492;
  *(_DWORD *)(a1 + 0x10790) = v183;
  v492 = v184;
  v185 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v186 = *v185;
  *(_QWORD *)&v492 = "Outer";
  *(_DWORD *)(a1 + 0x104A4) = v186;
  v187 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 3;
  BYTE12(v492) = 0;
  v188 = *v187;
  *(_QWORD *)&v492 = "Map";
  v189 = v492;
  *(_DWORD *)(a1 + 0x10794) = v188;
  v492 = v189;
  v190 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v191 = *v190;
  *(_QWORD *)&v492 = "RotatorProperty";
  v192 = v492;
  *(_DWORD *)(a1 + 0x10798) = v191;
  v492 = v192;
  v193 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v194 = *v193;
  *(_QWORD *)&v492 = "Role";
  v195 = v492;
  *(_DWORD *)(a1 + 0x10470) = v194;
  v492 = v195;
  v196 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xA;
  BYTE12(v492) = 0;
  v197 = *v196;
  *(_QWORD *)&v492 = "RemoteRole";
  v198 = v492;
  *(_DWORD *)(a1 + 0x1079C) = v197;
  v492 = v198;
  v199 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v200 = *v199;
  *(_QWORD *)&v492 = "PersistentLevel";
  v201 = v492;
  *(_DWORD *)(a1 + 0x107A0) = v200;
  v492 = v201;
  v202 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v203 = *v202;
  *(_QWORD *)&v492 = "TheWorld";
  v204 = v492;
  *(_DWORD *)(a1 + 0x107A4) = v203;
  v492 = v204;
  v205 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 3;
  BYTE12(v492) = 0;
  v206 = *v205;
  *(_QWORD *)&v492 = "Low";
  *(_DWORD *)(a1 + 0x107A8) = v206;
  v207 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v208 = *v207;
  *(_QWORD *)&v492 = "High";
  v209 = v492;
  *(_DWORD *)(a1 + 0x10808) = v208;
  v492 = v209;
  v210 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v211 = *v210;
  *(_QWORD *)&v492 = "NetworkGUID";
  v212 = v492;
  *(_DWORD *)(a1 + 0x1080C) = v211;
  v492 = v212;
  v213 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xA;
  BYTE12(v492) = 0;
  v214 = *v213;
  *(_QWORD *)&v492 = "GameThread";
  v215 = v492;
  *(_DWORD *)(a1 + 0x10810) = v214;
  v492 = v215;
  v216 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v217 = *v216;
  *(_QWORD *)&v492 = "RenderThread";
  v218 = v492;
  *(_DWORD *)(a1 + 0x10814) = v217;
  v492 = v218;
  v219 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x19;
  BYTE12(v492) = 0;
  v220 = *v219;
  *(_QWORD *)&v492 = "MulticastDelegateProperty";
  v221 = v492;
  *(_DWORD *)(a1 + 0x10818) = v220;
  v492 = v221;
  v222 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v223 = *v222;
  *(_QWORD *)&v492 = "OtherChildren";
  v224 = v492;
  *(_DWORD *)(a1 + 0x10480) = v223;
  v492 = v224;
  *(_DWORD *)(a1 + 0x1081C) = *(_DWORD *)sub_14C8F9350(a1, &v494, &v492);
  *(_QWORD *)&v492 = "Location";
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v225 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v226 = *v225;
  *(_QWORD *)&v492 = "Rotation";
  v227 = v492;
  *(_DWORD *)(a1 + 0x10820) = v226;
  v492 = v227;
  v228 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v229 = *v228;
  *(_QWORD *)&v492 = "UInt64Property";
  v230 = v492;
  *(_DWORD *)(a1 + 0x10824) = v229;
  v492 = v230;
  v231 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 3;
  BYTE12(v492) = 0;
  v232 = *v231;
  *(_QWORD *)&v492 = "BSP";
  v233 = v492;
  *(_DWORD *)(a1 + 0x104A0) = v232;
  v492 = v233;
  v234 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v235 = *v234;
  *(_QWORD *)&v492 = "StructProperty";
  v236 = v492;
  *(_DWORD *)(a1 + 0x10828) = v235;
  v492 = v236;
  v237 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v238 = *v237;
  *(_QWORD *)&v492 = "EditorSettings";
  v239 = v492;
  *(_DWORD *)(a1 + 0x10468) = v238;
  v492 = v239;
  v240 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v241 = *v240;
  *(_QWORD *)&v492 = "AudioThread";
  v242 = v492;
  *(_DWORD *)(a1 + 0x1082C) = v241;
  v492 = v242;
  v243 = *(_DWORD *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 2;
  *(_QWORD *)&v492 = &unk_150D05984;
  BYTE12(v492) = 0;
  v244 = v492;
  *(_DWORD *)(a1 + 0x10830) = v243;
  v492 = v244;
  v245 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x11;
  BYTE12(v492) = 0;
  v246 = *v245;
  *(_QWORD *)&v492 = "StructRefProperty";
  v247 = v492;
  *(_DWORD *)(a1 + 0x10834) = v246;
  v492 = v247;
  v248 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v249 = *v248;
  *(_QWORD *)&v492 = "UserDefinedEnum";
  v250 = v492;
  *(_DWORD *)(a1 + 0x10484) = v249;
  v492 = v250;
  v251 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v252 = *v251;
  *(_QWORD *)&v492 = "Control";
  v253 = v492;
  *(_DWORD *)(a1 + 0x10838) = v252;
  v492 = v253;
  v254 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v255 = *v254;
  *(_QWORD *)&v492 = "Voice";
  v256 = v492;
  *(_DWORD *)(a1 + 0x1083C) = v255;
  v492 = v256;
  v257 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v258 = *v257;
  *(_QWORD *)&v492 = "Zlib";
  v259 = v492;
  *(_DWORD *)(a1 + 0x10840) = v258;
  v492 = v259;
  v260 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x12;
  BYTE12(v492) = 0;
  v261 = *v260;
  *(_QWORD *)&v492 = "SoftObjectProperty";
  *(_DWORD *)(a1 + 0x10844) = v261;
  v262 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v263 = *v262;
  *(_QWORD *)&v492 = "Gzip";
  v264 = v492;
  *(_DWORD *)(a1 + 0x1048C) = v263;
  v492 = v264;
  v265 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v266 = *v265;
  *(_QWORD *)&v492 = "Zstd";
  v267 = v492;
  *(_DWORD *)(a1 + 0x10848) = v266;
  v492 = v267;
  v268 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v269 = *v268;
  *(_QWORD *)&v492 = "TextProperty";
  v270 = v492;
  *(_DWORD *)(a1 + 0x1084C) = v269;
  v492 = v270;
  v271 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x16;
  BYTE12(v492) = 0;
  v272 = *v271;
  *(_QWORD *)&v492 = "MeshEmitterVertexColor";
  v273 = v492;
  *(_DWORD *)(a1 + 0x10478) = v272;
  v492 = v273;
  v274 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x16;
  BYTE12(v492) = 0;
  v275 = *v274;
  *(_QWORD *)&v492 = "TextureOffsetParameter";
  v276 = v492;
  *(_DWORD *)(a1 + 0x107DC) = v275;
  v492 = v276;
  v277 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x15;
  BYTE12(v492) = 0;
  v278 = *v277;
  *(_QWORD *)&v492 = "TextureScaleParameter";
  v279 = v492;
  *(_DWORD *)(a1 + 0x107E0) = v278;
  v492 = v279;
  v280 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v281 = *v280;
  *(_QWORD *)&v492 = "ImpactVel";
  *(_DWORD *)(a1 + 0x107E4) = v281;
  v282 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v283 = *v282;
  *(_QWORD *)&v492 = "Int32Property";
  v284 = v492;
  *(_DWORD *)(a1 + 0x107E8) = v283;
  v492 = v284;
  v285 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v286 = *v285;
  *(_QWORD *)&v492 = "SlideVel";
  v287 = v492;
  *(_DWORD *)(a1 + 0x10494) = v286;
  v492 = v287;
  v288 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x17;
  BYTE12(v492) = 0;
  v289 = *v288;
  *(_QWORD *)&v492 = "TextureOffset1Parameter";
  v290 = v492;
  *(_DWORD *)(a1 + 0x107EC) = v289;
  v492 = v290;
  v291 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 0x1B;
  BYTE12(v492) = 0;
  v292 = *v291;
  *(_QWORD *)&v492 = "MeshEmitterDynamicParameter";
  v293 = v492;
  *(_DWORD *)(a1 + 0x107F0) = v292;
  v492 = v293;
  v294 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v295 = *v294;
  *(_QWORD *)&v492 = "DGram";
  v296 = v492;
  *(_DWORD *)(a1 + 0x107F4) = v295;
  v492 = v296;
  v297 = (int *)sub_14C8F9350(a1, &v494, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v298 = *v297;
  *(_QWORD *)&v492 = "Stream";
  v299 = v492;
  *(_DWORD *)(a1 + 0x108A0) = v298;
  v492 = v299;
  *(_DWORD *)(a1 + 0x108A4) = *(_DWORD *)sub_14C8F9350(a1, &v494, &v492);
  *(_QWORD *)&v492 = "Int64Property";
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v300 = (int *)sub_14C8F9350(a1, v562, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v301 = *v300;
  *(_QWORD *)&v492 = "GameNetDriver";
  v302 = v492;
  *(_DWORD *)(a1 + 0x10490) = v301;
  v492 = v302;
  v303 = (int *)sub_14C8F9350(a1, v563, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v304 = *v303;
  *(_QWORD *)&v492 = "PendingNetDriver";
  v305 = v492;
  *(_DWORD *)(a1 + 0x108A8) = v304;
  v492 = v305;
  v306 = (int *)sub_14C8F9350(a1, v564, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v307 = *v306;
  *(_QWORD *)&v492 = "SetProperty";
  v308 = v492;
  *(_DWORD *)(a1 + 0x108AC) = v307;
  v492 = v308;
  v309 = (int *)sub_14C8F9350(a1, v498, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v310 = *v309;
  *(_QWORD *)&v492 = "MeshPort";
  v311 = v492;
  *(_DWORD *)(a1 + 0x104B4) = v310;
  v492 = v311;
  v312 = (int *)sub_14C8F9350(a1, v499, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v313 = *v312;
  *(_QWORD *)&v492 = "MeshNetDriver";
  v314 = v492;
  *(_DWORD *)(a1 + 0x108CC) = v313;
  v492 = v314;
  v315 = (int *)sub_14C8F9350(a1, v500, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v316 = *v315;
  *(_QWORD *)&v492 = "LiveStreamVoice";
  v317 = v492;
  *(_DWORD *)(a1 + 0x108D0) = v316;
  v492 = v317;
  v318 = *(_DWORD *)sub_14C8F9350(a1, v501, &v492);
  DWORD2(v492) = 4;
  *(_QWORD *)&v492 = "Core";
  BYTE12(v492) = 0;
  v319 = v492;
  *(_DWORD *)(a1 + 0x108D4) = v318;
  v492 = v319;
  v320 = (int *)sub_14C8F9350(a1, v502, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v321 = *v320;
  *(_QWORD *)&v492 = "Engine";
  v322 = v492;
  *(_DWORD *)(a1 + 0x104B8) = v321;
  v492 = v322;
  v323 = (int *)sub_14C8F9350(a1, v503, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v324 = *v323;
  *(_QWORD *)&v492 = "Editor";
  v325 = v492;
  *(_DWORD *)(a1 + 0x104BC) = v324;
  v492 = v325;
  v326 = (int *)sub_14C8F9350(a1, v504, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v327 = *v326;
  *(_QWORD *)&v492 = "CoreUObject";
  v328 = v492;
  *(_DWORD *)(a1 + 0x104C0) = v327;
  v492 = v328;
  v329 = (int *)sub_14C8F9350(a1, v505, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v330 = *v329;
  *(_QWORD *)&v492 = "EnumProperty";
  v331 = v492;
  *(_DWORD *)(a1 + 0x104C4) = v330;
  v492 = v331;
  v332 = (int *)sub_14C8F9350(a1, v506, &v492);
  DWORD2(v492) = 6;
  BYTE12(v492) = 0;
  v333 = *v332;
  *(_QWORD *)&v492 = "Linear";
  v334 = v492;
  *(_DWORD *)(a1 + 0x104C8) = v333;
  v492 = v334;
  v335 = (int *)sub_14C8F9350(a1, v507, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v336 = *v335;
  *(_QWORD *)&v492 = "Point";
  *(_DWORD *)(a1 + 0x108F0) = v336;
  v337 = (int *)sub_14C8F9350(a1, v508, &v492);
  DWORD2(v492) = 0x12;
  BYTE12(v492) = 0;
  v338 = *v337;
  *(_QWORD *)&v492 = "LazyObjectProperty";
  v339 = v492;
  *(_DWORD *)(a1 + 0x108F4) = v338;
  v492 = v339;
  v340 = (int *)sub_14C8F9350(a1, v509, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v341 = *v340;
  *(_QWORD *)&v492 = "Aniso";
  v342 = v492;
  *(_DWORD *)(a1 + 0x10488) = v341;
  v492 = v342;
  v343 = (int *)sub_14C8F9350(a1, v510, &v492);
  DWORD2(v492) = 0x12;
  BYTE12(v492) = 0;
  v344 = *v343;
  *(_QWORD *)&v492 = "LightMapResolution";
  v345 = v492;
  *(_DWORD *)(a1 + 0x108F8) = v344;
  v492 = v345;
  v346 = (int *)sub_14C8F9350(a1, v511, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v347 = *v346;
  *(_QWORD *)&v492 = "UnGrouped";
  v348 = v492;
  *(_DWORD *)(a1 + 0x108FC) = v347;
  v492 = v348;
  v349 = (int *)sub_14C8F9350(a1, v512, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v350 = *v349;
  *(_QWORD *)&v492 = "VoiceChat";
  v351 = v492;
  *(_DWORD *)(a1 + 0x1091C) = v350;
  v492 = v351;
  v352 = (int *)sub_14C8F9350(a1, v513, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v353 = *v352;
  *(_QWORD *)&v492 = "Int8Property";
  v354 = v492;
  *(_DWORD *)(a1 + 0x10920) = v353;
  v492 = v354;
  v355 = (int *)sub_14C8F9350(a1, v514, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v356 = *v355;
  *(_QWORD *)&v492 = "Playing";
  *(_DWORD *)(a1 + 0x1049C) = v356;
  v357 = (int *)sub_14C8F9350(a1, v515, &v492);
  DWORD2(v492) = 0xA;
  BYTE12(v492) = 0;
  v358 = *v357;
  *(_QWORD *)&v492 = "Spectating";
  v359 = v492;
  *(_DWORD *)(a1 + 0x10940) = v358;
  v492 = v359;
  v360 = (int *)sub_14C8F9350(a1, v516, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v361 = *v360;
  *(_QWORD *)&v492 = "Inactive";
  v362 = v492;
  *(_DWORD *)(a1 + 0x10948) = v361;
  v492 = v362;
  v363 = (int *)sub_14C8F9350(a1, v517, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v364 = *v363;
  *(_QWORD *)&v492 = "ObjectProperty";
  v365 = v492;
  *(_DWORD *)(a1 + 0x10954) = v364;
  v492 = v365;
  v366 = (int *)sub_14C8F9350(a1, v518, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v367 = *v366;
  *(_QWORD *)&v492 = "PerfWarning";
  v368 = v492;
  *(_DWORD *)(a1 + 0x10454) = v367;
  v492 = v368;
  v369 = (int *)sub_14C8F9350(a1, v519, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v370 = *v369;
  *(_QWORD *)&v492 = "Info";
  v371 = v492;
  *(_DWORD *)(a1 + 0x109B8) = v370;
  v492 = v371;
  v372 = (int *)sub_14C8F9350(a1, v520, &v492);
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v373 = *v372;
  *(_QWORD *)&v492 = "Init";
  v374 = v492;
  *(_DWORD *)(a1 + 0x109BC) = v373;
  v492 = v374;
  *(_DWORD *)(a1 + 0x109C0) = *(_DWORD *)sub_14C8F9350(a1, v521, &v492);
  *(_QWORD *)&v492 = "Exit";
  DWORD2(v492) = 4;
  BYTE12(v492) = 0;
  v375 = (int *)sub_14C8F9350(a1, v522, &v492);
  DWORD2(v492) = 0xE;
  BYTE12(v492) = 0;
  v376 = *v375;
  *(_QWORD *)&v492 = "DoubleProperty";
  v377 = v492;
  *(_DWORD *)(a1 + 0x109C4) = v376;
  v492 = v377;
  v378 = (int *)sub_14C8F9350(a1, v523, &v492);
  DWORD2(v492) = 3;
  BYTE12(v492) = 0;
  v379 = *v378;
  *(_QWORD *)&v492 = &unk_151025CC8;
  v380 = v492;
  *(_DWORD *)(a1 + 0x10460) = v379;
  v492 = v380;
  v381 = (int *)sub_14C8F9350(a1, v524, &v492);
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v382 = *v381;
  *(_QWORD *)&v492 = "Warning";
  v383 = v492;
  *(_DWORD *)(a1 + 0x109C8) = v382;
  v492 = v383;
  v384 = (int *)sub_14C8F9350(a1, v525, &v492);
  DWORD2(v492) = 5;
  BYTE12(v492) = 0;
  v385 = *v384;
  *(_QWORD *)&v492 = "Error";
  v386 = v492;
  *(_DWORD *)(a1 + 0x109CC) = v385;
  v492 = v386;
  v387 = (int *)sub_14C8F9350(a1, v526, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v388 = *v387;
  *(_QWORD *)&v492 = "FontCharacter";
  v389 = v492;
  *(_DWORD *)(a1 + 0x109D0) = v388;
  v492 = v389;
  v390 = (int *)sub_14C8F9350(a1, v527, &v492);
  DWORD2(v492) = 0x13;
  BYTE12(v492) = 0;
  v391 = *v390;
  *(_QWORD *)&v492 = "InitChild2StartBone";
  v392 = v492;
  *(_DWORD *)(a1 + 0x10A80) = v391;
  v492 = v392;
  v393 = *(_DWORD *)sub_14C8F9350(a1, v528, &v492);
  DWORD2(v492) = 0x11;
  *(_QWORD *)&v492 = "SoundCueLocalized";
  BYTE12(v492) = 0;
  v394 = v492;
  *(_DWORD *)(a1 + 0x10A84) = v393;
  v492 = v394;
  v395 = (int *)sub_14C8F9350(a1, v529, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v396 = *v395;
  *(_QWORD *)&v492 = "SoundCue";
  v397 = v492;
  *(_DWORD *)(a1 + 0x10A88) = v396;
  v492 = v397;
  v398 = (int *)sub_14C8F9350(a1, v530, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v399 = *v398;
  *(_QWORD *)&v492 = "BoolProperty";
  v400 = v492;
  *(_DWORD *)(a1 + 0x10A8C) = v399;
  v492 = v400;
  v401 = (int *)sub_14C8F9350(a1, v531, &v492);
  DWORD2(v492) = 0x14;
  BYTE12(v492) = 0;
  v402 = *v401;
  *(_QWORD *)&v492 = "RawDistributionFloat";
  v403 = v492;
  *(_DWORD *)(a1 + 0x1044C) = v402;
  v492 = v403;
  v404 = (int *)sub_14C8F9350(a1, v532, &v492);
  DWORD2(v492) = 0x15;
  BYTE12(v492) = 0;
  v405 = *v404;
  *(_QWORD *)&v492 = "RawDistributionVector";
  v406 = v492;
  *(_DWORD *)(a1 + 0x10A90) = v405;
  v492 = v406;
  v407 = (int *)sub_14C8F9350(a1, v533, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v408 = *v407;
  *(_QWORD *)&v492 = "InterpCurveFloat";
  v409 = v492;
  *(_DWORD *)(a1 + 0x10A94) = v408;
  v492 = v409;
  v410 = (int *)sub_14C8F9350(a1, v534, &v492);
  DWORD2(v492) = 0x13;
  BYTE12(v492) = 0;
  v411 = *v410;
  *(_QWORD *)&v492 = "InterpCurveVector2D";
  *(_DWORD *)(a1 + 0x10A98) = v411;
  v412 = (int *)sub_14C8F9350(a1, v535, &v492);
  DWORD2(v492) = 0x11;
  BYTE12(v492) = 0;
  v413 = *v412;
  *(_QWORD *)&v492 = "InterpCurveVector";
  v414 = v492;
  *(_DWORD *)(a1 + 0x10A9C) = v413;
  v492 = v414;
  v415 = (int *)sub_14C8F9350(a1, v536, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v416 = *v415;
  *(_QWORD *)&v492 = "Int16Property";
  v417 = v492;
  *(_DWORD *)(a1 + 0x10AA0) = v416;
  v492 = v417;
  v418 = (int *)sub_14C8F9350(a1, v537, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v419 = *v418;
  *(_QWORD *)&v492 = "BeaconNetDriver";
  v420 = v492;
  *(_DWORD *)(a1 + 0x10498) = v419;
  v492 = v420;
  v421 = (int *)sub_14C8F9350(a1, v538, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v422 = *v421;
  *(_QWORD *)&v492 = "FlushNetDormancy";
  v423 = v492;
  *(_DWORD *)(a1 + 0x108B0) = v422;
  v492 = v423;
  v424 = (int *)sub_14C8F9350(a1, v539, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v425 = *v424;
  *(_QWORD *)&v492 = "DemoNetDriver";
  v426 = v492;
  *(_DWORD *)(a1 + 0x108B4) = v425;
  v492 = v426;
  v427 = (int *)sub_14C8F9350(a1, v540, &v492);
  DWORD2(v492) = 0xB;
  BYTE12(v492) = 0;
  v428 = *v427;
  *(_QWORD *)&v492 = "GameSession";
  v429 = v492;
  *(_DWORD *)(a1 + 0x108B8) = v428;
  v492 = v429;
  v430 = (int *)sub_14C8F9350(a1, v541, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v431 = *v430;
  *(_QWORD *)&v492 = "PartySession";
  *(_DWORD *)(a1 + 0x108BC) = v431;
  v432 = (int *)sub_14C8F9350(a1, v542, &v492);
  DWORD2(v492) = 8;
  BYTE12(v492) = 0;
  v433 = *v432;
  *(_QWORD *)&v492 = "GamePort";
  v434 = v492;
  *(_DWORD *)(a1 + 0x108C0) = v433;
  v492 = v434;
  v435 = (int *)sub_14C8F9350(a1, v543, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v436 = *v435;
  *(_QWORD *)&v492 = "DelegateProperty";
  v437 = v492;
  *(_DWORD *)(a1 + 0x108C4) = v436;
  v492 = v437;
  v438 = (int *)sub_14C8F9350(a1, v544, &v492);
  DWORD2(v492) = 0xA;
  BYTE12(v492) = 0;
  v439 = *v438;
  *(_QWORD *)&v492 = "BeaconPort";
  v440 = v492;
  *(_DWORD *)(a1 + 0x1045C) = v439;
  v492 = v440;
  v441 = (int *)sub_14C8F9350(a1, v545, &v492);
  DWORD2(v492) = 0x15;
  BYTE12(v492) = 0;
  v442 = *v441;
  *(_QWORD *)&v492 = "InterpCurveTwoVectors";
  v443 = v492;
  *(_DWORD *)(a1 + 0x108C8) = v442;
  v492 = v443;
  v444 = (int *)sub_14C8F9350(a1, v546, &v492);
  DWORD2(v492) = 0xF;
  BYTE12(v492) = 0;
  v445 = *v444;
  *(_QWORD *)&v492 = "InterpCurveQuat";
  v446 = v492;
  *(_DWORD *)(a1 + 0x10AA4) = v445;
  v492 = v446;
  v447 = (int *)sub_14C8F9350(a1, v547, &v492);
  DWORD2(v492) = 2;
  BYTE12(v492) = 0;
  v448 = *v447;
  *(_QWORD *)&v492 = "AI";
  v449 = v492;
  *(_DWORD *)(a1 + 0x10AA8) = v448;
  v492 = v449;
  *(_DWORD *)(a1 + 0x10B48) = *(_DWORD *)sub_14C8F9350(a1, v548, &v492);
  *(_QWORD *)&v492 = "NavMesh";
  DWORD2(v492) = 7;
  BYTE12(v492) = 0;
  v450 = (int *)sub_14C8F9350(a1, v549, &v492);
  DWORD2(v492) = 0x12;
  BYTE12(v492) = 0;
  v451 = *v450;
  *(_QWORD *)&v492 = "PerformanceCapture";
  v452 = v492;
  *(_DWORD *)(a1 + 0x10B4C) = v451;
  v492 = v452;
  v453 = (int *)sub_14C8F9350(a1, v550, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v454 = *v453;
  *(_QWORD *)&v492 = "d7b77f04e7309492";
  v455 = v492;
  *(_DWORD *)(a1 + 0x10C10) = v454;
  v492 = v455;
  v456 = (int *)sub_14C8F9350(a1, v551, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v457 = *v456;
  *(_QWORD *)&v492 = "00488f65e528cc02";
  v458 = v492;
  *(_DWORD *)(a1 + 0x104D4) = v457;
  v492 = v458;
  v459 = (int *)sub_14C8F9350(a1, v552, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v460 = *v459;
  *(_QWORD *)&v492 = "BytePr0perty";
  v461 = v492;
  *(_DWORD *)(a1 + 0x104D8) = v460;
  v492 = v461;
  v462 = (int *)sub_14C8F9350(a1, v553, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v463 = *v462;
  *(_QWORD *)&v492 = "ByteProperty";
  v464 = v492;
  *(_DWORD *)(a1 + 0x104CC) = v463;
  v492 = v464;
  v465 = (int *)sub_14C8F9350(a1, v554, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v466 = *v465;
  *(_QWORD *)&v492 = "ByteProqerty";
  v467 = v492;
  *(_DWORD *)(a1 + 0x10444) = v466;
  v492 = v467;
  v468 = *(_DWORD *)sub_14C8F9350(a1, v555, &v492);
  DWORD2(v492) = 0xC;
  *(_QWORD *)&v492 = "Byteqroperty";
  BYTE12(v492) = 0;
  v469 = v492;
  *(_DWORD *)(a1 + 0x104D0) = v468;
  v492 = v469;
  v470 = (int *)sub_14C8F9350(a1, v556, &v492);
  DWORD2(v492) = 0xC;
  BYTE12(v492) = 0;
  v471 = *v470;
  *(_QWORD *)&v492 = "EditorLayout";
  v472 = v492;
  *(_DWORD *)(a1 + 0x104DC) = v471;
  v492 = v472;
  v473 = (int *)sub_14C8F9350(a1, v557, &v492);
  DWORD2(v492) = 0x11;
  BYTE12(v492) = 0;
  v474 = *v473;
  *(_QWORD *)&v492 = "EditorKeyBindings";
  v475 = v492;
  *(_DWORD *)(a1 + 0x10DA0) = v474;
  v492 = v475;
  v476 = (int *)sub_14C8F9350(a1, v558, &v492);
  DWORD2(v492) = 0xD;
  BYTE12(v492) = 0;
  v477 = *v476;
  *(_QWORD *)&v492 = "ArrayProperty";
  v478 = v492;
  *(_DWORD *)(a1 + 0x10DA4) = v477;
  v492 = v478;
  v479 = (int *)sub_14C8F9350(a1, v559, &v492);
  DWORD2(v492) = 0x10;
  BYTE12(v492) = 0;
  v480 = *v479;
  *(_QWORD *)&v492 = "GameUserSettings";
  v481 = v492;
  *(_DWORD *)(a1 + 0x10464) = v480;
  v492 = v481;
  v482 = (int *)sub_14C8F9350(a1, v560, &v492);
  DWORD2(v492) = 0x17;
  BYTE12(v492) = 0;
  v483 = *v482;
  *(_QWORD *)&v492 = "EncryptedObjectProperty";
  v484 = v492;
  *(_DWORD *)(a1 + 0x10DA8) = v483;
  v492 = v484;
  v485 = (int *)sub_14C8F9350(a1, v561, &v492);
  DWORD2(v492) = 9;
  BYTE12(v492) = 0;
  v486 = *v485;
  *(_QWORD *)&v492 = "EncVector";
  *(_DWORD *)(a1 + 0x10DAC) = v486;
  v487 = 0;
  *(_QWORD *)(a1 + 0x10DB0) = *(unsigned int *)sub_14C8F9350(a1, v497, &v492);
  do
  {
    if ( !v487 || *v5 )
    {
      v494 = v487;
      sub_14C8D40B0(a1 + 0x10DB8, a1 + 4 * (v487 + 0x4110LL), &v494);
      v488 = *v5;
      if ( *(_DWORD *)(a1 + 0x10DB4) >= *v5 )
        v488 = *(_DWORD *)(a1 + 0x10DB4);
      *(_DWORD *)(a1 + 0x10DB4) = v488;
    }
    ++v487;
    ++v5;
  }
  while ( v487 < 0x25D );
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 0x10020), 0, 0) != *(_DWORD *)(a1 + 0x12DC0)
                                                                                     - *(_DWORD *)(a1 + 0x12E1C) )
  {
    v489 = sub_14C7AA270(v495, L"Duplicate hardcoded name", L"UnrealEd", L"DuplicatedHardcodedName");
    sub_14C883760(0LL, v489, 0LL);
    v490 = v496;
    if ( v496 )
    {
      if ( _InterlockedExchangeAdd(v496 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v490)(v490);
        if ( _InterlockedExchangeAdd(v490 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v490 + 8LL))(v490, 1LL);
      }
    }
    if ( (unsigned __int8)byte_1573D85C8 >= 6u )
      sub_14C829130(
        (unsigned int)"Unknown",
        0x50E,
        (unsigned int)&unk_1573D85CC,
        6,
        (__int64)L"FPlatformMisc::RequestExit(%i)");
    sub_14C88B010(L"Win RequestExit");
    sub_140A8BDE0(&unk_15684F238);
    MEMORY[0x20717F9A](0LL);
  }
  return a1;
}


```

---
Ex Asm
---
```asm

sub_14C8D5690
sub_14C8D5690                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D5690
sub_14C8D5690                                                      ; Attributes: bp-based frame fpd=0C0h
sub_14C8D5690
sub_14C8D5690                                                      ; __int64 __fastcall sub_14C8D5690(__int64)
sub_14C8D5690                                                      sub_14C8D5690   proc near               ; CODE XREF: sub_14C8D4230+6B↑p
sub_14C8D5690                                                                                              ; sub_14C8D43A0+6C↑p ...
sub_14C8D5690
sub_14C8D5690                                                      var_1A0         = qword ptr -1A0h
sub_14C8D5690                                                      var_198         = dword ptr -198h
sub_14C8D5690                                                      var_190         = xmmword ptr -190h
sub_14C8D5690                                                      var_180         = byte ptr -180h
sub_14C8D5690                                                      var_17C         = dword ptr -17Ch
sub_14C8D5690                                                      var_178         = byte ptr -178h
sub_14C8D5690                                                      var_170         = qword ptr -170h
sub_14C8D5690                                                      var_160         = byte ptr -160h
sub_14C8D5690                                                      var_15C         = byte ptr -15Ch
sub_14C8D5690                                                      var_158         = byte ptr -158h
sub_14C8D5690                                                      var_154         = byte ptr -154h
sub_14C8D5690                                                      var_150         = byte ptr -150h
sub_14C8D5690                                                      var_14C         = byte ptr -14Ch
sub_14C8D5690                                                      var_148         = byte ptr -148h
sub_14C8D5690                                                      var_144         = byte ptr -144h
sub_14C8D5690                                                      var_140         = byte ptr -140h
sub_14C8D5690                                                      var_13C         = byte ptr -13Ch
sub_14C8D5690                                                      var_138         = byte ptr -138h
sub_14C8D5690                                                      var_134         = byte ptr -134h
sub_14C8D5690                                                      var_130         = byte ptr -130h
sub_14C8D5690                                                      var_12C         = byte ptr -12Ch
sub_14C8D5690                                                      var_128         = byte ptr -128h
sub_14C8D5690                                                      var_124         = byte ptr -124h
sub_14C8D5690                                                      var_120         = byte ptr -120h
sub_14C8D5690                                                      var_11C         = byte ptr -11Ch
sub_14C8D5690                                                      var_118         = byte ptr -118h
sub_14C8D5690                                                      var_114         = byte ptr -114h
sub_14C8D5690                                                      var_110         = byte ptr -110h
sub_14C8D5690                                                      var_10C         = byte ptr -10Ch
sub_14C8D5690                                                      var_108         = byte ptr -108h
sub_14C8D5690                                                      var_104         = byte ptr -104h
sub_14C8D5690                                                      var_100         = byte ptr -100h
sub_14C8D5690                                                      var_FC          = byte ptr -0FCh
sub_14C8D5690                                                      var_F8          = byte ptr -0F8h
sub_14C8D5690                                                      var_F4          = byte ptr -0F4h
sub_14C8D5690                                                      var_F0          = byte ptr -0F0h
sub_14C8D5690                                                      var_EC          = byte ptr -0ECh
sub_14C8D5690                                                      var_E8          = byte ptr -0E8h
sub_14C8D5690                                                      var_E4          = byte ptr -0E4h
sub_14C8D5690                                                      var_E0          = byte ptr -0E0h
sub_14C8D5690                                                      var_DC          = byte ptr -0DCh
sub_14C8D5690                                                      var_D8          = byte ptr -0D8h
sub_14C8D5690                                                      var_D4          = byte ptr -0D4h
sub_14C8D5690                                                      var_D0          = byte ptr -0D0h
sub_14C8D5690                                                      var_CC          = byte ptr -0CCh
sub_14C8D5690                                                      var_C8          = byte ptr -0C8h
sub_14C8D5690                                                      var_C4          = byte ptr -0C4h
sub_14C8D5690                                                      var_C0          = byte ptr -0C0h
sub_14C8D5690                                                      var_BC          = byte ptr -0BCh
sub_14C8D5690                                                      var_B8          = byte ptr -0B8h
sub_14C8D5690                                                      var_B4          = byte ptr -0B4h
sub_14C8D5690                                                      var_B0          = byte ptr -0B0h
sub_14C8D5690                                                      var_AC          = byte ptr -0ACh
sub_14C8D5690                                                      var_A8          = byte ptr -0A8h
sub_14C8D5690                                                      var_A4          = byte ptr -0A4h
sub_14C8D5690                                                      var_A0          = byte ptr -0A0h
sub_14C8D5690                                                      var_9C          = byte ptr -9Ch
sub_14C8D5690                                                      var_98          = byte ptr -98h
sub_14C8D5690                                                      var_94          = byte ptr -94h
sub_14C8D5690                                                      var_90          = byte ptr -90h
sub_14C8D5690                                                      var_8C          = byte ptr -8Ch
sub_14C8D5690                                                      var_88          = byte ptr -88h
sub_14C8D5690                                                      var_84          = byte ptr -84h
sub_14C8D5690                                                      var_80          = byte ptr -80h
sub_14C8D5690                                                      var_7C          = byte ptr -7Ch
sub_14C8D5690                                                      var_78          = byte ptr -78h
sub_14C8D5690                                                      var_74          = byte ptr -74h
sub_14C8D5690                                                      var_70          = byte ptr -70h
sub_14C8D5690                                                      var_6C          = byte ptr -6Ch
sub_14C8D5690                                                      var_68          = byte ptr -68h
sub_14C8D5690                                                      var_64          = byte ptr -64h
sub_14C8D5690                                                      var_60          = byte ptr -60h
sub_14C8D5690                                                      var_5C          = byte ptr -5Ch
sub_14C8D5690                                                      var_58          = byte ptr -58h
sub_14C8D5690                                                      var_54          = byte ptr -54h
sub_14C8D5690                                                      var_50          = qword ptr -50h
sub_14C8D5690                                                      var_48          = dword ptr -48h
sub_14C8D5690                                                      var_44          = byte ptr -44h
sub_14C8D5690                                                      var_43          = word ptr -43h
sub_14C8D5690                                                      var_41          = byte ptr -41h
sub_14C8D5690                                                      var_40          = xmmword ptr -40h
sub_14C8D5690                                                      var_2C          = byte ptr -2Ch
sub_14C8D5690                                                      var_28          = qword ptr -28h
sub_14C8D5690                                                      var_20          = byte ptr -20h
sub_14C8D5690                                                      arg_8           = qword ptr  18h
sub_14C8D5690                                                      arg_10          = qword ptr  20h
sub_14C8D5690                                                      arg_18          = qword ptr  28h
sub_14C8D5690
sub_14C8D5690      48 89 5C 24 10                                                  mov     [rsp+10h], rbx
sub_14C8D5690+5    48 89 74 24 18                                                  mov     [rsp+18h], rsi
sub_14C8D5690+A    48 89 7C 24 20                                                  mov     [rsp+20h], rdi
sub_14C8D5690+F    55                                                              push    rbp
sub_14C8D5690+10   41 54                                                           push    r12
sub_14C8D5690+12   41 55                                                           push    r13
sub_14C8D5690+14   41 56                                                           push    r14
sub_14C8D5690+16   41 57                                                           push    r15
sub_14C8D5690+18   48 8D AC 24 60 FF FF FF                                         lea     rbp, [rsp-0A0h] ; Load Effective Address
sub_14C8D5690+20   48 81 EC A0 01 00 00                                            sub     rsp, 1A0h       ; Integer Subtraction
sub_14C8D5690+27   48 8B 05 82 FC 4E 0A                                            mov     rax, cs:off_156DC5340
sub_14C8D5690+2E   48 33 C4                                                        xor     rax, rsp        ; Logical Exclusive OR
sub_14C8D5690+31   48 89 85 98 00 00 00                                            mov     [rbp+98h], rax
sub_14C8D5690+38   48 8B D9                                                        mov     rbx, rcx
sub_14C8D5690+3B   FF 15 B7 5D CA 03                                               call    cs:qword_15057B488 ; Indirect Call Near Procedure
sub_14C8D5690+41   33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8D5690+43   48 8D 4B 08                                                     lea     rcx, [rbx+8]    ; Load Effective Address
sub_14C8D5690+47   41 B8 00 00 01 00                                               mov     r8d, 10000h
sub_14C8D5690+4D   E8 67 11 99 03                                                  call    sub_150266849   ; Call Procedure
sub_14C8D5690+52   45 33 E4                                                        xor     r12d, r12d      ; Logical Exclusive OR
sub_14C8D5690+55   4C 89 A3 08 00 01 00                                            mov     [rbx+10008h], r12
sub_14C8D5690+5C   4C 89 A3 10 00 01 00                                            mov     [rbx+10010h], r12
sub_14C8D5690+63   4C 89 A3 18 00 01 00                                            mov     [rbx+10018h], r12
sub_14C8D5690+6A   E8 11 E1 00 00                                                  call    sub_14C8E3810   ; Call Procedure
sub_14C8D5690+6F   B9 00 00 08 00                                                  mov     ecx, 80000h
sub_14C8D5690+74   8B 50 10                                                        mov     edx, [rax+10h]
sub_14C8D5690+77   E8 24 28 EE FF                                                  call    sub_14C7B7F30   ; Call Procedure
sub_14C8D5690+7C   48 89 43 08                                                     mov     [rbx+8], rax
sub_14C8D5690+80   48 8D B3 20 00 01 00                                            lea     rsi, [rbx+10020h] ; Load Effective Address
sub_14C8D5690+87   4C 8D B3 24 00 01 00                                            lea     r14, [rbx+10024h] ; Load Effective Address
sub_14C8D5690+8E   44 89 26                                                        mov     [rsi], r12d
sub_14C8D5690+91   4C 8D AB 40 00 01 00                                            lea     r13, [rbx+10040h] ; Load Effective Address
sub_14C8D5690+98   45 89 26                                                        mov     [r14], r12d
sub_14C8D5690+9B   49 8B FD                                                        mov     rdi, r13
sub_14C8D5690+9E   41 BF 10 00 00 00                                               mov     r15d, 10h
sub_14C8D5690+A4
sub_14C8D5690+A4                                                   loc_14C8D5734:                          ; CODE XREF: sub_14C8D5690+C1↓j
sub_14C8D5690+A4   48 8B CF                                                        mov     rcx, rdi
sub_14C8D5690+A7   FF 15 4B 5D CA 03                                               call    cs:qword_15057B488 ; Indirect Call Near Procedure
sub_14C8D5690+AD   4C 89 67 08                                                     mov     [rdi+8], r12
sub_14C8D5690+B1   4C 89 67 10                                                     mov     [rdi+10h], r12
sub_14C8D5690+B5   4C 89 67 18                                                     mov     [rdi+18h], r12
sub_14C8D5690+B9   48 83 C7 40                                                     add     rdi, 40h ; '@'  ; Add
sub_14C8D5690+BD   49 83 EF 01                                                     sub     r15, 1          ; Integer Subtraction
sub_14C8D5690+C1   75 E1                                                           jnz     short loc_14C8D5734 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+C3   4C 8D BB 40 04 01 00                                            lea     r15, [rbx+10440h] ; Load Effective Address
sub_14C8D5690+CA   33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8D5690+CC   49 8B CF                                                        mov     rcx, r15
sub_14C8D5690+CF   41 B8 74 09 00 00                                               mov     r8d, 974h
sub_14C8D5690+D5   E8 DF 10 99 03                                                  call    sub_150266849   ; Call Procedure
sub_14C8D5690+DA   4C 89 A3 B8 2D 01 00                                            mov     [rbx+12DB8h], r12
sub_14C8D5690+E1   48 8D BB 40 00 01 00                                            lea     rdi, [rbx+10040h] ; Load Effective Address
sub_14C8D5690+E8   4C 89 A3 C0 2D 01 00                                            mov     [rbx+12DC0h], r12
sub_14C8D5690+EF   33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_14C8D5690+F1   4C 89 A3 08 2E 01 00                                            mov     [rbx+12E08h], r12
sub_14C8D5690+F8   49 81 C5 00 04 00 00                                            add     r13, 400h       ; Add
sub_14C8D5690+FF   4C 89 A3 10 2E 01 00                                            mov     [rbx+12E10h], r12
sub_14C8D5690+106  41 BC FF FF FF FF                                               mov     r12d, 0FFFFFFFFh
sub_14C8D5690+10C  44 89 A3 18 2E 01 00                                            mov     [rbx+12E18h], r12d
sub_14C8D5690+113  89 83 1C 2E 01 00                                               mov     [rbx+12E1Ch], eax
sub_14C8D5690+119  48 89 83 20 32 01 00                                            mov     [rbx+13220h], rax
sub_14C8D5690+120  89 83 28 32 01 00                                               mov     [rbx+13228h], eax
sub_14C8D5690+126  49 3B FD                                                        cmp     rdi, r13        ; Compare Two Operands
sub_14C8D5690+129  74 3F                                                           jz      short loc_14C8D57FA ; Jump if Zero (ZF=1)
sub_14C8D5690+12B  48 83 C7 10                                                     add     rdi, 10h        ; Add
sub_14C8D5690+12F  90                                                              nop                     ; No Operation
sub_14C8D5690+130
sub_14C8D5690+130                                                  loc_14C8D57C0:                          ; CODE XREF: sub_14C8D5690+168↓j
sub_14C8D5690+130  BA 04 00 00 00                                                  mov     edx, 4
sub_14C8D5690+135  48 89 5F 08                                                     mov     [rdi+8], rbx
sub_14C8D5690+139  B9 00 04 00 00                                                  mov     ecx, 400h
sub_14C8D5690+13E  E8 5D 27 EE FF                                                  call    sub_14C7B7F30   ; Call Procedure
sub_14C8D5690+143  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8D5690+145  48 89 07                                                        mov     [rdi], rax
sub_14C8D5690+148  41 B8 00 04 00 00                                               mov     r8d, 400h
sub_14C8D5690+14E  48 8B C8                                                        mov     rcx, rax
sub_14C8D5690+151  E8 63 10 99 03                                                  call    sub_150266849   ; Call Procedure
sub_14C8D5690+156  C7 47 FC FF 00 00 00                                            mov     dword ptr [rdi-4], 0FFh
sub_14C8D5690+15D  48 8D 7F 40                                                     lea     rdi, [rdi+40h]  ; Load Effective Address
sub_14C8D5690+161  48 8D 47 F0                                                     lea     rax, [rdi-10h]  ; Load Effective Address
sub_14C8D5690+165  49 3B C5                                                        cmp     rax, r13        ; Compare Two Operands
sub_14C8D5690+168  75 C6                                                           jnz     short loc_14C8D57C0 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+16A
sub_14C8D5690+16A                                                  loc_14C8D57FA:                          ; CODE XREF: sub_14C8D5690+129↑j
sub_14C8D5690+16A  48 8D 15 3F 2A F4 03                                            lea     rdx, aNone_2    ; Load Effective Address
sub_14C8D5690+171  C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+179  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+17E  41 B8 04 00 00 00                                               mov     r8d, 4
sub_14C8D5690+184  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+189  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+18D  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+190  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+192  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+197  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+19B  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+1A0  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+1A3  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+1A8  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+1AD  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+1B1  C7 45 78 04 00 00 00                                            mov     dword ptr [rbp+78h], 4
sub_14C8D5690+1B8  75 0F                                                           jnz     short loc_14C8D5859 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+1BA  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+1BF  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+1C2  E8 29 ED FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+1C7  EB 0D                                                           jmp     short loc_14C8D5866 ; Jump
sub_14C8D5690+1C9                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+1C9
sub_14C8D5690+1C9                                                  loc_14C8D5859:                          ; CODE XREF: sub_14C8D5690+1B8↑j
sub_14C8D5690+1C9  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+1CE  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+1D1  E8 0A EE FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+1D6
sub_14C8D5690+1D6                                                  loc_14C8D5866:                          ; CODE XREF: sub_14C8D5690+1C7↑j
sub_14C8D5690+1D6  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+1D9  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+1DE  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+1E5  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+1E9  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+1ED  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1F2  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+1F9  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+200  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+204  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+207  E8 84 79 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+20C  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+211  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+214  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+218  48 8D 15 D5 60 CC 07                                            lea     rdx, aN0ne      ; Load Effective Address
sub_14C8D5690+21F  41 89 07                                                        mov     [r15], eax
sub_14C8D5690+222  41 B8 04 00 00 00                                               mov     r8d, 4
sub_14C8D5690+228  C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+230  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+235  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+23A  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+23E  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+241  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+243  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+248  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+24C  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+251  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+254  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+259  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+25E  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+262  C7 45 78 04 00 00 00                                            mov     dword ptr [rbp+78h], 4
sub_14C8D5690+269  75 0F                                                           jnz     short loc_14C8D590A ; Jump if Not Zero (ZF=0)
sub_14C8D5690+26B  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+270  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+273  E8 78 EC FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+278  EB 0D                                                           jmp     short loc_14C8D5917 ; Jump
sub_14C8D5690+27A                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+27A
sub_14C8D5690+27A                                                  loc_14C8D590A:                          ; CODE XREF: sub_14C8D5690+269↑j
sub_14C8D5690+27A  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+27F  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+282  E8 59 ED FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+287
sub_14C8D5690+287                                                  loc_14C8D5917:                          ; CODE XREF: sub_14C8D5690+278↑j
sub_14C8D5690+287  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+28A  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+28F  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+296  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+29A  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+29E  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2A3  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+2AA  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+2B1  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+2B5  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+2B8  E8 D3 78 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+2BD  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+2C2  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+2C5  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+2C9  48 8D 15 2C 60 CC 07                                            lea     rdx, aNome      ; Load Effective Address
sub_14C8D5690+2D0  89 83 60 05 01 00                                               mov     [rbx+10560h], eax
sub_14C8D5690+2D6  41 B8 04 00 00 00                                               mov     r8d, 4
sub_14C8D5690+2DC  C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+2E4  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2E9  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+2EE  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+2F2  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+2F5  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+2F7  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+2FC  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+300  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+305  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+308  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+30D  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+312  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+316  C7 45 78 04 00 00 00                                            mov     dword ptr [rbp+78h], 4
sub_14C8D5690+31D  75 0F                                                           jnz     short loc_14C8D59BE ; Jump if Not Zero (ZF=0)
sub_14C8D5690+31F  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+324  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+327  E8 C4 EB FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+32C  EB 0D                                                           jmp     short loc_14C8D59CB ; Jump
sub_14C8D5690+32E                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+32E
sub_14C8D5690+32E                                                  loc_14C8D59BE:                          ; CODE XREF: sub_14C8D5690+31D↑j
sub_14C8D5690+32E  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+333  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+336  E8 A5 EC FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+33B
sub_14C8D5690+33B                                                  loc_14C8D59CB:                          ; CODE XREF: sub_14C8D5690+32C↑j
sub_14C8D5690+33B  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+33E  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+343  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+34A  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+34E  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+352  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+357  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+35E  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+365  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+369  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+36C  E8 1F 78 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+371  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+376  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+379  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+37D  48 8D 15 84 5F CC 07                                            lea     rdx, a30949b77fd7e70 ; Load Effective Address
sub_14C8D5690+384  89 83 64 05 01 00                                               mov     [rbx+10564h], eax
sub_14C8D5690+38A  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+390  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+398  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+39D  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+3A2  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+3A6  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+3A9  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+3AB  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+3B0  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+3B4  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+3B9  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+3BC  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+3C1  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+3C6  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+3CA  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+3D1  75 0F                                                           jnz     short loc_14C8D5A72 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+3D3  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+3D8  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+3DB  E8 10 EB FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+3E0  EB 0D                                                           jmp     short loc_14C8D5A7F ; Jump
sub_14C8D5690+3E2                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+3E2
sub_14C8D5690+3E2                                                  loc_14C8D5A72:                          ; CODE XREF: sub_14C8D5690+3D1↑j
sub_14C8D5690+3E2  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+3E7  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+3EA  E8 F1 EB FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+3EF
sub_14C8D5690+3EF                                                  loc_14C8D5A7F:                          ; CODE XREF: sub_14C8D5690+3E0↑j
sub_14C8D5690+3EF  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+3F2  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+3F7  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+3FE  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+402  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+406  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+40B  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+412  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+419  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+41D  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+420  E8 6B 77 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+425  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+42A  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+42D  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+431  48 8D 15 E8 5E CC 07                                            lea     rdx, aShvector  ; Load Effective Address
sub_14C8D5690+438  89 83 48 04 01 00                                               mov     [rbx+10448h], eax
sub_14C8D5690+43E  41 B8 08 00 00 00                                               mov     r8d, 8
sub_14C8D5690+444  C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+44C  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+451  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+456  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+45A  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+45D  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+45F  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+464  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+468  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+46D  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+470  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+475  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+47A  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+47E  C7 45 78 08 00 00 00                                            mov     dword ptr [rbp+78h], 8
sub_14C8D5690+485  75 0F                                                           jnz     short loc_14C8D5B26 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+487  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+48C  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+48F  E8 5C EA FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+494  EB 0D                                                           jmp     short loc_14C8D5B33 ; Jump
sub_14C8D5690+496                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+496
sub_14C8D5690+496                                                  loc_14C8D5B26:                          ; CODE XREF: sub_14C8D5690+485↑j
sub_14C8D5690+496  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+49B  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+49E  E8 3D EB FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+4A3
sub_14C8D5690+4A3                                                  loc_14C8D5B33:                          ; CODE XREF: sub_14C8D5690+494↑j
sub_14C8D5690+4A3  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+4A6  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+4AB  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+4B2  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+4B6  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+4BA  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+4BF  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+4C6  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+4CD  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+4D1  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+4D4  E8 B7 76 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+4D9  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+4DE  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+4E1  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+4E5  48 8D 15 44 5E CC 07                                            lea     rdx, a992e7de5ca74c4 ; Load Effective Address
sub_14C8D5690+4EC  89 83 34 05 01 00                                               mov     [rbx+10534h], eax
sub_14C8D5690+4F2  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+4F8  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+500  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+505  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+50A  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+50E  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+511  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+513  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+518  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+51C  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+521  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+524  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+529  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+52E  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+532  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+539  75 0F                                                           jnz     short loc_14C8D5BDA ; Jump if Not Zero (ZF=0)
sub_14C8D5690+53B  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+540  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+543  E8 A8 E9 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+548  EB 0D                                                           jmp     short loc_14C8D5BE7 ; Jump
sub_14C8D5690+54A                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+54A
sub_14C8D5690+54A                                                  loc_14C8D5BDA:                          ; CODE XREF: sub_14C8D5690+539↑j
sub_14C8D5690+54A  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+54F  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+552  E8 89 EA FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+557
sub_14C8D5690+557                                                  loc_14C8D5BE7:                          ; CODE XREF: sub_14C8D5690+548↑j
sub_14C8D5690+557  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+55A  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+55F  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+566  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+56A  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+56E  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+573  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+57A  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+581  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+585  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+588  E8 03 76 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+58D  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+592  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+595  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+599  48 8D 15 30 BD EC 03                                            lea     rdx, aColor     ; Load Effective Address
sub_14C8D5690+5A0  89 83 50 04 01 00                                               mov     [rbx+10450h], eax
sub_14C8D5690+5A6  41 B8 05 00 00 00                                               mov     r8d, 5
sub_14C8D5690+5AC  C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+5B4  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+5B9  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+5BE  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+5C2  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+5C5  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+5C7  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+5CC  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+5D0  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+5D5  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+5D8  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+5DD  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+5E2  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+5E6  C7 45 78 05 00 00 00                                            mov     dword ptr [rbp+78h], 5
sub_14C8D5690+5ED  75 0F                                                           jnz     short loc_14C8D5C8E ; Jump if Not Zero (ZF=0)
sub_14C8D5690+5EF  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+5F4  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+5F7  E8 F4 E8 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+5FC  EB 0D                                                           jmp     short loc_14C8D5C9B ; Jump
sub_14C8D5690+5FE                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+5FE
sub_14C8D5690+5FE                                                  loc_14C8D5C8E:                          ; CODE XREF: sub_14C8D5690+5ED↑j
sub_14C8D5690+5FE  48 8D 4C 24 30                                                  lea     rcx, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+603  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+606  E8 D5 E9 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+60B
sub_14C8D5690+60B                                                  loc_14C8D5C9B:                          ; CODE XREF: sub_14C8D5690+5FC↑j
sub_14C8D5690+60B  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+60E  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+613  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+61A  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+61E  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+622  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+627  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+62E  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+635  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+639  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+63C  E8 4F 75 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+641  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+646  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+649  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+64D  48 8D 15 F4 5C CC 07                                            lea     rdx, aE80c4d39f32503 ; Load Effective Address
sub_14C8D5690+654  89 83 38 05 01 00                                               mov     [rbx+10538h], eax
sub_14C8D5690+65A  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+660  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+668  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+66D  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+672  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+676  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+679  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+67B  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+680  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+684  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+689  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+68C  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+691  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+696  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+69A  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+6A1  75 0F                                                           jnz     short loc_14C8D5D42 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+6A3  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+6A8  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+6AB  E8 40 E8 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+6B0  EB 0D                                                           jmp     short loc_14C8D5D4F ; Jump
sub_14C8D5690+6B2                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+6B2
sub_14C8D5690+6B2                                                  loc_14C8D5D42:                          ; CODE XREF: sub_14C8D5690+6A1↑j
sub_14C8D5690+6B2  48 8D 4C 24 30                                                  lea     rcx, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+6B7  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+6BA  E8 21 E9 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+6BF
sub_14C8D5690+6BF                                                  loc_14C8D5D4F:                          ; CODE XREF: sub_14C8D5690+6B0↑j
sub_14C8D5690+6BF  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+6C2  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+6C7  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+6CE  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+6D2  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+6D6  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+6DB  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+6E2  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+6E9  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+6ED  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+6F0  E8 9B 74 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+6F5  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+6FA  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+6FD  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+701  48 8D 15 D0 78 C6 07                                            lea     rdx, aPlane     ; Load Effective Address
sub_14C8D5690+708  89 83 7C 04 01 00                                               mov     [rbx+1047Ch], eax
sub_14C8D5690+70E  41 B8 05 00 00 00                                               mov     r8d, 5
sub_14C8D5690+714  C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+71C  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+721  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+726  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+72A  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+72D  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+72F  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+734  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+738  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+73D  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+740  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+745  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+74A  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+74E  C7 45 78 05 00 00 00                                            mov     dword ptr [rbp+78h], 5
sub_14C8D5690+755  75 0F                                                           jnz     short loc_14C8D5DF6 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+757  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+75C  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+75F  E8 8C E7 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+764  EB 0D                                                           jmp     short loc_14C8D5E03 ; Jump
sub_14C8D5690+766                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+766
sub_14C8D5690+766                                                  loc_14C8D5DF6:                          ; CODE XREF: sub_14C8D5690+755↑j
sub_14C8D5690+766  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+76B  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+76E  E8 6D E8 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+773
sub_14C8D5690+773                                                  loc_14C8D5E03:                          ; CODE XREF: sub_14C8D5690+764↑j
sub_14C8D5690+773  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+776  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+77B  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+782  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+786  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+78A  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+78F  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+796  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+79D  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+7A1  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+7A4  E8 E7 73 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+7A9  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+7AE  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+7B1  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+7B5  48 8D 15 A4 5B CC 07                                            lea     rdx, aF325031e27a4a2 ; Load Effective Address
sub_14C8D5690+7BC  89 83 3C 05 01 00                                               mov     [rbx+1053Ch], eax
sub_14C8D5690+7C2  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+7C8  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+7D0  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+7D5  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+7DA  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+7DE  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+7E1  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+7E3  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+7E8  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+7EC  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+7F1  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+7F4  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+7F9  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+7FE  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+802  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+809  75 0F                                                           jnz     short loc_14C8D5EAA ; Jump if Not Zero (ZF=0)
sub_14C8D5690+80B  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+810  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+813  E8 D8 E6 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+818  EB 0D                                                           jmp     short loc_14C8D5EB7 ; Jump
sub_14C8D5690+81A                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+81A
sub_14C8D5690+81A                                                  loc_14C8D5EAA:                          ; CODE XREF: sub_14C8D5690+809↑j
sub_14C8D5690+81A  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+81F  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+822  E8 B9 E7 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+827
sub_14C8D5690+827                                                  loc_14C8D5EB7:                          ; CODE XREF: sub_14C8D5690+818↑j
sub_14C8D5690+827  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+82A  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+82F  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+836  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+83A  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+83E  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+843  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+84A  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+851  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+855  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+858  E8 33 73 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+85D  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+862  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+865  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+869  48 8D 15 04 5B CC 07                                            lea     rdx, aMatrix    ; Load Effective Address
sub_14C8D5690+870  89 83 E0 04 01 00                                               mov     [rbx+104E0h], eax
sub_14C8D5690+876  41 B8 06 00 00 00                                               mov     r8d, 6
sub_14C8D5690+87C  C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+884  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+889  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+88E  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+892  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+895  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+897  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+89C  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+8A0  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+8A5  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+8A8  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+8AD  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+8B2  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+8B6  C7 45 78 06 00 00 00                                            mov     dword ptr [rbp+78h], 6
sub_14C8D5690+8BD  75 0F                                                           jnz     short loc_14C8D5F5E ; Jump if Not Zero (ZF=0)
sub_14C8D5690+8BF  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+8C4  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+8C7  E8 24 E6 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+8CC  EB 0D                                                           jmp     short loc_14C8D5F6B ; Jump
sub_14C8D5690+8CE                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+8CE
sub_14C8D5690+8CE                                                  loc_14C8D5F5E:                          ; CODE XREF: sub_14C8D5690+8BD↑j
sub_14C8D5690+8CE  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+8D3  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+8D6  E8 05 E7 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+8DB
sub_14C8D5690+8DB                                                  loc_14C8D5F6B:                          ; CODE XREF: sub_14C8D5690+8CC↑j
sub_14C8D5690+8DB  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+8DE  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+8E3  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+8EA  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+8EE  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+8F2  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+8F7  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+8FE  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+905  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+909  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+90C  E8 7F 72 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+911  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+916  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+919  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+91D  48 8D 15 5C 5A CC 07                                            lea     rdx, a1708c31e2528cc ; Load Effective Address
sub_14C8D5690+924  89 83 40 05 01 00                                               mov     [rbx+10540h], eax
sub_14C8D5690+92A  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+930  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+938  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+93D  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+942  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+946  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+949  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+94B  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+950  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+954  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+959  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+95C  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+961  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+966  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+96A  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+971  75 0F                                                           jnz     short loc_14C8D6012 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+973  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+978  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+97B  E8 70 E5 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+980  EB 0D                                                           jmp     short loc_14C8D601F ; Jump
sub_14C8D5690+982                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+982
sub_14C8D5690+982                                                  loc_14C8D6012:                          ; CODE XREF: sub_14C8D5690+971↑j
sub_14C8D5690+982  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+987  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+98A  E8 51 E6 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+98F
sub_14C8D5690+98F                                                  loc_14C8D601F:                          ; CODE XREF: sub_14C8D5690+980↑j
sub_14C8D5690+98F  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+992  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+997  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+99E  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+9A2  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+9A6  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+9AB  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+9B2  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+9B9  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+9BD  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+9C0  E8 CB 71 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+9C5  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+9CA  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+9CD  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+9D1  48 8D 15 80 03 A2 06                                            lea     rdx, aSphere    ; Load Effective Address
sub_14C8D5690+9D8  89 83 E4 04 01 00                                               mov     [rbx+104E4h], eax
sub_14C8D5690+9DE  41 B8 06 00 00 00                                               mov     r8d, 6
sub_14C8D5690+9E4  C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+9EC  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+9F1  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+9F6  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+9FA  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+9FD  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+9FF  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+A04  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+A08  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+A0D  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+A10  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+A15  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+A1A  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+A1E  C7 45 78 06 00 00 00                                            mov     dword ptr [rbp+78h], 6
sub_14C8D5690+A25  75 0F                                                           jnz     short loc_14C8D60C6 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+A27  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+A2C  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+A2F  E8 BC E4 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+A34  EB 0D                                                           jmp     short loc_14C8D60D3 ; Jump
sub_14C8D5690+A36                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+A36
sub_14C8D5690+A36                                                  loc_14C8D60C6:                          ; CODE XREF: sub_14C8D5690+A25↑j
sub_14C8D5690+A36  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+A3B  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+A3E  E8 9D E5 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+A43
sub_14C8D5690+A43                                                  loc_14C8D60D3:                          ; CODE XREF: sub_14C8D5690+A34↑j
sub_14C8D5690+A43  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+A46  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+A4B  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+A52  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+A56  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+A5A  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+A5F  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+A66  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+A6D  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+A71  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+A74  E8 17 71 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+A79  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+A7E  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+A81  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+A85  48 8D 15 0C 59 CC 07                                            lea     rdx, a08c31e27ac31e2 ; Load Effective Address
sub_14C8D5690+A8C  89 83 10 05 01 00                                               mov     [rbx+10510h], eax
sub_14C8D5690+A92  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+A98  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+AA0  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+AA5  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+AAA  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+AAE  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+AB1  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+AB3  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+AB8  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+ABC  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+AC1  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+AC4  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+AC9  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+ACE  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+AD2  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+AD9  75 0F                                                           jnz     short loc_14C8D617A ; Jump if Not Zero (ZF=0)
sub_14C8D5690+ADB  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+AE0  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+AE3  E8 08 E4 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+AE8  EB 0D                                                           jmp     short loc_14C8D6187 ; Jump
sub_14C8D5690+AEA                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+AEA
sub_14C8D5690+AEA                                                  loc_14C8D617A:                          ; CODE XREF: sub_14C8D5690+AD9↑j
sub_14C8D5690+AEA  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+AEF  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+AF2  E8 E9 E4 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+AF7
sub_14C8D5690+AF7                                                  loc_14C8D6187:                          ; CODE XREF: sub_14C8D5690+AE8↑j
sub_14C8D5690+AF7  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+AFA  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+AFF  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+B06  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+B0A  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+B0E  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+B13  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+B1A  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+B21  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+B25  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+B28  E8 63 70 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+B2D  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+B32  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+B35  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+B39  48 8D 15 A0 F2 E6 03                                            lea     rdx, dword_150745470 ; Load Effective Address
sub_14C8D5690+B40  89 83 E8 04 01 00                                               mov     [rbx+104E8h], eax
sub_14C8D5690+B46  41 B8 03 00 00 00                                               mov     r8d, 3
sub_14C8D5690+B4C  C7 44 24 38 03 00 00 00                                         mov     dword ptr [rsp+38h], 3
sub_14C8D5690+B54  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+B59  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+B5E  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+B62  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+B65  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+B67  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+B6C  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+B70  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+B75  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+B78  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+B7D  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+B82  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+B86  C7 45 78 03 00 00 00                                            mov     dword ptr [rbp+78h], 3
sub_14C8D5690+B8D  75 0F                                                           jnz     short loc_14C8D622E ; Jump if Not Zero (ZF=0)
sub_14C8D5690+B8F  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+B94  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+B97  E8 54 E3 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+B9C  EB 0D                                                           jmp     short loc_14C8D623B ; Jump
sub_14C8D5690+B9E                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+B9E
sub_14C8D5690+B9E                                                  loc_14C8D622E:                          ; CODE XREF: sub_14C8D5690+B8D↑j
sub_14C8D5690+B9E  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+BA3  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+BA6  E8 35 E4 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+BAB
sub_14C8D5690+BAB                                                  loc_14C8D623B:                          ; CODE XREF: sub_14C8D5690+B9C↑j
sub_14C8D5690+BAB  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+BAE  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+BB3  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+BBA  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+BBE  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+BC2  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+BC7  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+BCE  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+BD5  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+BD9  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+BDC  E8 AF 6F 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+BE1  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+BE6  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+BE9  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+BED  48 8D 15 BC 57 CC 07                                            lea     rdx, aC31e2c31e2528c ; Load Effective Address
sub_14C8D5690+BF4  89 83 14 05 01 00                                               mov     [rbx+10514h], eax
sub_14C8D5690+BFA  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+C00  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+C08  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+C0D  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+C12  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+C16  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+C19  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+C1B  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+C20  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+C24  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+C29  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+C2C  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+C31  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+C36  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+C3A  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+C41  75 0F                                                           jnz     short loc_14C8D62E2 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+C43  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+C48  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+C4B  E8 A0 E2 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+C50  EB 0D                                                           jmp     short loc_14C8D62EF ; Jump
sub_14C8D5690+C52                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+C52
sub_14C8D5690+C52                                                  loc_14C8D62E2:                          ; CODE XREF: sub_14C8D5690+C41↑j
sub_14C8D5690+C52  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+C57  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+C5A  E8 81 E3 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+C5F
sub_14C8D5690+C5F                                                  loc_14C8D62EF:                          ; CODE XREF: sub_14C8D5690+C50↑j
sub_14C8D5690+C5F  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+C62  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+C67  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+C6E  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+C72  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+C76  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+C7B  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+C82  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+C89  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+C8D  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+C90  E8 FB 6E 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+C95  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+C9A  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+C9D  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+CA1  48 8D 15 08 98 E7 03                                            lea     rdx, aVector2d  ; Load Effective Address
sub_14C8D5690+CA8  89 83 EC 04 01 00                                               mov     [rbx+104ECh], eax
sub_14C8D5690+CAE  41 B8 08 00 00 00                                               mov     r8d, 8
sub_14C8D5690+CB4  C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+CBC  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+CC1  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+CC6  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+CCA  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+CCD  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+CCF  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+CD4  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+CD8  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+CDD  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+CE0  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+CE5  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+CEA  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+CEE  C7 45 78 08 00 00 00                                            mov     dword ptr [rbp+78h], 8
sub_14C8D5690+CF5  75 0F                                                           jnz     short loc_14C8D6396 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+CF7  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+CFC  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+CFF  E8 EC E1 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+D04  EB 0D                                                           jmp     short loc_14C8D63A3 ; Jump
sub_14C8D5690+D06                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+D06
sub_14C8D5690+D06                                                  loc_14C8D6396:                          ; CODE XREF: sub_14C8D5690+CF5↑j
sub_14C8D5690+D06  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+D0B  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+D0E  E8 CD E2 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+D13
sub_14C8D5690+D13                                                  loc_14C8D63A3:                          ; CODE XREF: sub_14C8D5690+D04↑j
sub_14C8D5690+D13  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+D16  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+D1B  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+D22  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+D26  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+D2A  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+D2F  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+D36  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+D3D  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+D41  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+D44  E8 47 6E 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+D49  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+D4E  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+D51  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+D55  48 8D 15 6C 56 CC 07                                            lea     rdx, a31e27a1e27a4a2 ; Load Effective Address
sub_14C8D5690+D5C  89 83 18 05 01 00                                               mov     [rbx+10518h], eax
sub_14C8D5690+D62  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+D68  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+D70  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+D75  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+D7A  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+D7E  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+D81  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+D83  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+D88  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+D8C  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+D91  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+D94  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+D99  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+D9E  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+DA2  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+DA9  75 0F                                                           jnz     short loc_14C8D644A ; Jump if Not Zero (ZF=0)
sub_14C8D5690+DAB  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+DB0  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+DB3  E8 38 E1 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+DB8  EB 0D                                                           jmp     short loc_14C8D6457 ; Jump
sub_14C8D5690+DBA                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+DBA
sub_14C8D5690+DBA                                                  loc_14C8D644A:                          ; CODE XREF: sub_14C8D5690+DA9↑j
sub_14C8D5690+DBA  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+DBF  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+DC2  E8 19 E2 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+DC7
sub_14C8D5690+DC7                                                  loc_14C8D6457:                          ; CODE XREF: sub_14C8D5690+DB8↑j
sub_14C8D5690+DC7  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+DCA  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+DCF  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+DD6  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+DDA  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+DDE  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+DE3  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+DEA  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+DF1  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+DF5  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+DF8  E8 93 6D 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+DFD  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+E02  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+E05  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+E09  48 8D 15 D0 55 CC 07                                            lea     rdx, aIntrect   ; Load Effective Address
sub_14C8D5690+E10  89 83 F0 04 01 00                                               mov     [rbx+104F0h], eax
sub_14C8D5690+E16  41 B8 07 00 00 00                                               mov     r8d, 7
sub_14C8D5690+E1C  C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+E24  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+E29  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+E2E  48 C1 E8 20                                                     shr     rax, 20h ; ' '  ; Shift Logical Right
sub_14C8D5690+E32  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+E35  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+E37  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+E3C  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+E40  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+E45  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+E48  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+E4D  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+E52  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+E56  C7 45 78 07 00 00 00                                            mov     dword ptr [rbp+78h], 7
sub_14C8D5690+E5D  75 0F                                                           jnz     short loc_14C8D64FE ; Jump if Not Zero (ZF=0)
sub_14C8D5690+E5F  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+E64  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+E67  E8 84 E0 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+E6C  EB 0D                                                           jmp     short loc_14C8D650B ; Jump
sub_14C8D5690+E6E                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+E6E
sub_14C8D5690+E6E                                                  loc_14C8D64FE:                          ; CODE XREF: sub_14C8D5690+E5D↑j
sub_14C8D5690+E6E  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+E73  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+E76  E8 65 E1 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+E7B
sub_14C8D5690+E7B                                                  loc_14C8D650B:                          ; CODE XREF: sub_14C8D5690+E6C↑j
sub_14C8D5690+E7B  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+E7E  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+E83  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+E8A  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+E8E  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+E92  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+E97  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+E9E  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+EA5  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+EA9  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+EAC  E8 DF 6C 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+EB1  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+EB6  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+EB9  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+EBD  48 8D 15 24 55 CC 07                                            lea     rdx, aE2528ce2528cc0 ; Load Effective Address
sub_14C8D5690+EC4  89 83 1C 05 01 00                                               mov     [rbx+1051Ch], eax
sub_14C8D5690+ECA  41 B8 10 00 00 00                                               mov     r8d, 10h
sub_14C8D5690+ED0  C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+ED8  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+EDD  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+EE2  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+EE6  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+EE9  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+EEB  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+EF0  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+EF4  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+EF9  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+EFC  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+F01  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+F06  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+F0A  C7 45 78 10 00 00 00                                            mov     dword ptr [rbp+78h], 10h
sub_14C8D5690+F11  75 0F                                                           jnz     short loc_14C8D65B2 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+F13  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+F18  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+F1B  E8 D0 DF FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+F20  EB 0D                                                           jmp     short loc_14C8D65BF ; Jump
sub_14C8D5690+F22                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+F22
sub_14C8D5690+F22                                                  loc_14C8D65B2:                          ; CODE XREF: sub_14C8D5690+F11↑j
sub_14C8D5690+F22  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+F27  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+F2A  E8 B1 E0 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+F2F
sub_14C8D5690+F2F                                                  loc_14C8D65BF:                          ; CODE XREF: sub_14C8D5690+F20↑j
sub_14C8D5690+F2F  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+F32  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+F37  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+F3E  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+F42  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+F46  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+F4B  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+F52  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+F59  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+F5D  48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+F60  E8 2B 6C 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+F65  0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+F6A  F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+F6D  8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+F71  48 8D 15 68 AB 8B 04                                            lea     rdx, aIntpoint  ; Load Effective Address
sub_14C8D5690+F78  89 83 F4 04 01 00                                               mov     [rbx+104F4h], eax
sub_14C8D5690+F7E  41 B8 08 00 00 00                                               mov     r8d, 8
sub_14C8D5690+F84  C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+F8C  C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+F91  48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+F96  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+F9A  88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+F9D  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+F9F  0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+FA4  66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+FA8  0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+FAD  88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+FB0  48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+FB5  C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+FBA  48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+FBE  C7 45 78 08 00 00 00                                            mov     dword ptr [rbp+78h], 8
sub_14C8D5690+FC5  75 0F                                                           jnz     short loc_14C8D6666 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+FC7  48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+FCC  48 8B FE                                                        mov     rdi, rsi
sub_14C8D5690+FCF  E8 1C DF FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+FD4  EB 0D                                                           jmp     short loc_14C8D6673 ; Jump
sub_14C8D5690+FD6                                                  ; ---------------------------------------------------------------------------
sub_14C8D5690+FD6
sub_14C8D5690+FD6                                                  loc_14C8D6666:                          ; CODE XREF: sub_14C8D5690+FC5↑j
sub_14C8D5690+FD6  48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+FDB  49 8B FE                                                        mov     rdi, r14
sub_14C8D5690+FDE  E8 FD DF FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+FE3
sub_14C8D5690+FE3                                                  loc_14C8D6673:                          ; CODE XREF: sub_14C8D5690+FD4↑j
sub_14C8D5690+FE3  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+FE6  4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+FEB  C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+FF2  4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+FF6  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+FFA  48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+FFF  0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+1006 48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+100D 48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+1011 48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+1014 E8 77 6B 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+1019 0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+101E F0 01 07                                                        lock add [rdi], eax     ; Add
sub_14C8D5690+1021 8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+1025 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+102A C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+1032 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1037 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+103C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+103F 89 83 20 05 01 00                                               mov     [rbx+10520h], eax
sub_14C8D5690+1045 48 8D 05 B4 53 CC 07                                            lea     rax, a7ac31e257ac3e2 ; Load Effective Address
sub_14C8D5690+104C 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1051 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1056 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+105C E8 5F 2C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1061 C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+1069 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+106E C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1073 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1078 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+107A 48 8D 05 E7 80 8E 04                                            lea     rax, aVector4   ; Load Effective Address
sub_14C8D5690+1081 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1086 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+108B 89 8B F8 04 01 00                                               mov     [rbx+104F8h], ecx
sub_14C8D5690+1091 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1094 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+109A E8 21 2C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+109F C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+10A7 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+10AC C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+10B1 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+10B6 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+10B8 48 8D 05 59 53 CC 07                                            lea     rax, a8c31ec31e2528c ; Load Effective Address
sub_14C8D5690+10BF 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+10C4 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+10C9 89 8B 24 05 01 00                                               mov     [rbx+10524h], ecx
sub_14C8D5690+10CF 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+10D2 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+10D8 E8 E3 2B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+10DD C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+10E5 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+10EA C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+10EF 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+10F4 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+10F6 48 8D 05 6F 54 E1 03                                            lea     rax, aName_0    ; Load Effective Address
sub_14C8D5690+10FD 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1102 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1107 89 8B FC 04 01 00                                               mov     [rbx+104FCh], ecx
sub_14C8D5690+110D 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1110 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1116 E8 A5 2B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+111B C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+1123 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1128 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+112D 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1132 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1134 48 8D 05 F5 52 CC 07                                            lea     rax, aB77fd7e727a4a2 ; Load Effective Address
sub_14C8D5690+113B 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1140 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1145 89 8B 28 05 01 00                                               mov     [rbx+10528h], ecx
sub_14C8D5690+114B 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+114E 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1154 E8 67 2B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1159 C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+1161 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1166 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+116B 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1170 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1172 48 8D 05 D3 2F EA 03                                            lea     rax, aVector    ; Load Effective Address
sub_14C8D5690+1179 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+117E 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1183 89 8B 00 05 01 00                                               mov     [rbx+10500h], ecx
sub_14C8D5690+1189 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+118C 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1192 E8 29 2B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1197 C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+119F 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+11A4 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+11A9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+11AB 48 8D 05 96 52 CC 07                                            lea     rax, a27a4a292528cc0 ; Load Effective Address
sub_14C8D5690+11B2 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+11B7 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+11BC 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+11C2 89 8B 2C 05 01 00                                               mov     [rbx+1052Ch], ecx
sub_14C8D5690+11C8 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+11CD 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+11D0 E8 EB 2A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+11D5 C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+11DD 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+11E2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+11E7 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+11EC 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+11EE 48 8D 05 63 41 EA 03                                            lea     rax, aRotator   ; Load Effective Address
sub_14C8D5690+11F5 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+11FA 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+11FF 89 8B 04 05 01 00                                               mov     [rbx+10504h], ecx
sub_14C8D5690+1205 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1208 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+120E E8 AD 2A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1213 C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+38h], 0Bh
sub_14C8D5690+121B 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1220 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1225 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+122A 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+122C 48 8D 05 2D 52 CC 07                                            lea     rax, aStrproperty ; Load Effective Address
sub_14C8D5690+1233 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1238 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+123D 89 8B 30 05 01 00                                               mov     [rbx+10530h], ecx
sub_14C8D5690+1243 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1246 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+124C E8 6F 2A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1251 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+1259 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+125E C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1263 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1268 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+126A 48 8D 05 FF 51 CC 07                                            lea     rax, aObjectarchetyp ; Load Effective Address
sub_14C8D5690+1271 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1276 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+127B 89 8B 74 04 01 00                                               mov     [rbx+10474h], ecx
sub_14C8D5690+1281 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1284 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+128A E8 31 2A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+128F C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+1297 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+129C C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+12A1 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+12A6 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+12A8 48 8D 05 A5 7F DF 03                                            lea     rax, aClass     ; Load Effective Address
sub_14C8D5690+12AF 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+12B4 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+12B9 89 8B E0 05 01 00                                               mov     [rbx+105E0h], ecx
sub_14C8D5690+12BF 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+12C2 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+12C8 E8 F3 29 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+12CD C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+38h], 0Ch
sub_14C8D5690+12D5 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+12DA C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+12DF 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+12E4 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+12E6 48 8D 05 9B 74 94 04                                            lea     rax, aScriptstruct ; Load Effective Address
sub_14C8D5690+12ED 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+12F2 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+12F7 89 8B E4 05 01 00                                               mov     [rbx+105E4h], ecx
sub_14C8D5690+12FD 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1300 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1306 E8 B5 29 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+130B C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+1313 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1318 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+131D 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1322 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1324 48 8D 05 F5 F3 E7 03                                            lea     rax, aFunction  ; Load Effective Address
sub_14C8D5690+132B 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1330 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1335 89 8B E8 05 01 00                                               mov     [rbx+105E8h], ecx
sub_14C8D5690+133B 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+133E 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1344 E8 77 29 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1349 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+1351 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1356 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1358 48 8D 05 5D A1 E5 03                                            lea     rax, aState     ; Load Effective Address
sub_14C8D5690+135F 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1364 89 8B EC 05 01 00                                               mov     [rbx+105ECh], ecx
sub_14C8D5690+136A 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+136F 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1374 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1379 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+137F 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1382 E8 39 29 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1387 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+138F 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1394 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1399 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+139E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+13A0 48 8D 05 65 72 55 04                                            lea     rax, aTrue_4    ; Load Effective Address
sub_14C8D5690+13A7 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+13AC 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+13B1 89 8B 60 07 01 00                                               mov     [rbx+10760h], ecx
sub_14C8D5690+13B7 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+13BA 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+13C0 E8 FB 28 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+13C5 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+13CD 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+13D2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+13D7 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+13DC 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+13DE 48 8D 05 2F 72 55 04                                            lea     rax, aFalse_4   ; Load Effective Address
sub_14C8D5690+13E5 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+13EA 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+13EF 89 8B 64 07 01 00                                               mov     [rbx+10764h], ecx
sub_14C8D5690+13F5 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+13F8 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+13FE E8 BD 28 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1403 C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+140B 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1410 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1415 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+141A 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+141C 48 8D 05 5D 50 CC 07                                            lea     rax, aUint16property ; Load Effective Address
sub_14C8D5690+1423 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1428 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+142D 89 8B 68 07 01 00                                               mov     [rbx+10768h], ecx
sub_14C8D5690+1433 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1436 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+143C E8 7F 28 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1441 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+1449 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+144E C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1453 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1458 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+145A 48 8D 05 2F 50 CC 07                                            lea     rax, aEnum      ; Load Effective Address
sub_14C8D5690+1461 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1466 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+146B 89 8B A8 04 01 00                                               mov     [rbx+104A8h], ecx
sub_14C8D5690+1471 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1474 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+147A E8 41 28 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+147F C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+1487 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+148C C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1491 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1496 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1498 48 8D 05 E1 22 F4 03                                            lea     rax, aDefault_0 ; Load Effective Address
sub_14C8D5690+149F 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+14A4 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+14A9 89 8B 6C 07 01 00                                               mov     [rbx+1076Ch], ecx
sub_14C8D5690+14AF 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+14B2 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+14B8 E8 03 28 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+14BD C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+14C5 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+14CA C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+14CF 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+14D4 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+14D6 48 8D 05 CB FE BE 07                                            lea     rax, aSkip      ; Load Effective Address
sub_14C8D5690+14DD 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+14E2 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+14E7 89 8B 70 07 01 00                                               mov     [rbx+10770h], ecx
sub_14C8D5690+14ED 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+14F0 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+14F6 E8 C5 27 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+14FB 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+14FD 48 8D 05 BC 14 43 04                                            lea     rax, aInput     ; Load Effective Address
sub_14C8D5690+1504 89 8B 74 07 01 00                                               mov     [rbx+10774h], ecx
sub_14C8D5690+150A 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+150F 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1514 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+151C 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1521 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1526 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1529 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+152E 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1534 E8 87 27 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1539 C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+1541 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1546 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+154B 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1550 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1552 48 8D 05 3F 4F CC 07                                            lea     rax, aPackage   ; Load Effective Address
sub_14C8D5690+1559 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+155E 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1563 89 8B 78 07 01 00                                               mov     [rbx+10778h], ecx
sub_14C8D5690+1569 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+156C 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1572 E8 49 27 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1577 C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+157F 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1584 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1589 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+158E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1590 48 8D 05 19 33 EE 03                                            lea     rax, aGroups    ; Load Effective Address
sub_14C8D5690+1597 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+159C 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+15A1 89 8B 7C 07 01 00                                               mov     [rbx+1077Ch], ecx
sub_14C8D5690+15A7 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+15AA 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+15B0 E8 0B 27 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+15B5 C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+38h], 9
sub_14C8D5690+15BD 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+15C2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+15C7 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+15CC 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+15CE 48 8D 05 CB 4E CC 07                                            lea     rax, aInterface ; Load Effective Address
sub_14C8D5690+15D5 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+15DA 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+15DF 89 8B 80 07 01 00                                               mov     [rbx+10780h], ecx
sub_14C8D5690+15E5 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+15E8 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+15EE E8 CD 26 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+15F3 48 8D 15 B6 4E CC 07                                            lea     rdx, aVectorproperty ; Load Effective Address
sub_14C8D5690+15FA C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+1602 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1607 41 B8 0E 00 00 00                                               mov     r8d, 0Eh
sub_14C8D5690+160D 48 89 54 24 30                                                  mov     [rsp+30h], rdx
sub_14C8D5690+1612 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1614 48 8B 44 24 38                                                  mov     rax, [rsp+38h]
sub_14C8D5690+1619 48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8D5690+161D 88 45 7C                                                        mov     [rbp+7Ch], al
sub_14C8D5690+1620 84 C0                                                           test    al, al          ; Logical Compare
sub_14C8D5690+1622 0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
sub_14C8D5690+1627 66 89 45 7D                                                     mov     [rbp+7Dh], ax
sub_14C8D5690+162B 0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
sub_14C8D5690+1630 88 45 7F                                                        mov     [rbp+7Fh], al
sub_14C8D5690+1633 89 8B 84 07 01 00                                               mov     [rbx+10784h], ecx
sub_14C8D5690+1639 C6 44 24 40 00                                                  mov     byte ptr [rsp+40h], 0
sub_14C8D5690+163E 48 89 55 70                                                     mov     [rbp+70h], rdx
sub_14C8D5690+1642 C7 45 78 0E 00 00 00                                            mov     dword ptr [rbp+78h], 0Eh
sub_14C8D5690+1649 75 0C                                                           jnz     short loc_14C8D6CE7 ; Jump if Not Zero (ZF=0)
sub_14C8D5690+164B 48 8D 4C 24 48                                                  lea     rcx, [rsp+48h]  ; Load Effective Address
sub_14C8D5690+1650 E8 9B D8 FF FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8D5690+1655 EB 0D                                                           jmp     short loc_14C8D6CF4 ; Jump
sub_14C8D5690+1657                                                 ; ---------------------------------------------------------------------------
sub_14C8D5690+1657
sub_14C8D5690+1657                                                 loc_14C8D6CE7:                          ; CODE XREF: sub_14C8D5690+1649↑j
sub_14C8D5690+1657 48 8D 4C 24 30                                                  lea     rcx, [rsp+30h]  ; Load Effective Address
sub_14C8D5690+165C 49 8B F6                                                        mov     rsi, r14
sub_14C8D5690+165F E8 7C D9 FF FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8D5690+1664
sub_14C8D5690+1664                                                 loc_14C8D6CF4:                          ; CODE XREF: sub_14C8D5690+1655↑j
sub_14C8D5690+1664 0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+1667 4C 8D 4C 24 40                                                  lea     r9, [rsp+40h]   ; Load Effective Address
sub_14C8D5690+166C C6 85 94 00 00 00 00                                            mov     byte ptr [rbp+94h], 0
sub_14C8D5690+1673 4C 8D 45 70                                                     lea     r8, [rbp+70h]   ; Load Effective Address
sub_14C8D5690+1677 66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8D5690+167B 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1680 0F 11 85 80 00 00 00                                            movups  xmmword ptr [rbp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8D5690+1687 48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8D5690+168E 48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8D5690+1692 48 03 CB                                                        add     rcx, rbx        ; Add
sub_14C8D5690+1695 E8 F6 64 01 00                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8D5690+169A 0F B6 44 24 40                                                  movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
sub_14C8D5690+169F F0 01 06                                                        lock add [rsi], eax     ; Add
sub_14C8D5690+16A2 8B 44 24 44                                                     mov     eax, [rsp+44h]
sub_14C8D5690+16A6 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+16AB C7 44 24 38 0A 00 00 00                                         mov     dword ptr [rsp+38h], 0Ah
sub_14C8D5690+16B3 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+16B8 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+16BD 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+16C0 89 83 6C 04 01 00                                               mov     [rbx+1046Ch], eax
sub_14C8D5690+16C6 48 8D 05 0B 8D ED 03                                            lea     rax, aComponents ; Load Effective Address
sub_14C8D5690+16CD 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+16D2 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+16D7 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+16DD E8 DE 25 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+16E2 C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+16EA 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+16EF C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+16F4 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+16F9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+16FB 48 8D 05 5E 55 E0 03                                            lea     rax, aGlobal_0  ; Load Effective Address
sub_14C8D5690+1702 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1707 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+170C 89 8B 88 07 01 00                                               mov     [rbx+10788h], ecx
sub_14C8D5690+1712 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1715 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+171B E8 A0 25 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1720 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+1728 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+172D C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1732 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1737 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1739 48 8D 05 80 4D CC 07                                            lea     rax, aPackagemetadat ; Load Effective Address
sub_14C8D5690+1740 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1745 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+174A 89 8B 8C 07 01 00                                               mov     [rbx+1078Ch], ecx
sub_14C8D5690+1750 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1753 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1759 E8 62 25 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+175E C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+38h], 0Ch
sub_14C8D5690+1766 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+176B C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1770 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1775 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1777 48 8D 05 82 A1 6B 04                                            lea     rax, aInitialstate ; Load Effective Address
sub_14C8D5690+177E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1783 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1788 89 8B AC 07 01 00                                               mov     [rbx+107ACh], ecx
sub_14C8D5690+178E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1791 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1797 E8 24 25 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+179C C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+17A4 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+17A9 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+17AE 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+17B3 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+17B5 48 8D 05 6C 5F E2 03                                            lea     rax, aGame_3    ; Load Effective Address
sub_14C8D5690+17BC 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+17C1 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+17C6 89 8B B0 07 01 00                                               mov     [rbx+107B0h], ecx
sub_14C8D5690+17CC 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+17CF 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+17D5 E8 E6 24 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+17DA C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+38h], 0Bh
sub_14C8D5690+17E2 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+17E7 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+17EC 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+17F1 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+17F3 48 8D 05 8E AF 8B 04                                            lea     rax, aLinearcolor ; Load Effective Address
sub_14C8D5690+17FA 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+17FF 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1804 89 8B B4 07 01 00                                               mov     [rbx+107B4h], ecx
sub_14C8D5690+180A 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+180D 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1813 E8 A8 24 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1818 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+38h], 0Ch
sub_14C8D5690+1820 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1825 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+182A 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+182C 48 8D 05 9D 4C CC 07                                            lea     rax, aAdvanceframe ; Load Effective Address
sub_14C8D5690+1833 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1838 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+183D 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1843 89 8B 44 05 01 00                                               mov     [rbx+10544h], ecx
sub_14C8D5690+1849 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+184E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1851 E8 6A 24 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1856 C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+185E 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1863 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1868 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+186D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+186F 48 8D 05 82 C7 9A 05                                            lea     rax, aPointer   ; Load Effective Address
sub_14C8D5690+1876 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+187B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1880 89 8B 48 05 01 00                                               mov     [rbx+10548h], ecx
sub_14C8D5690+1886 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1889 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+188F E8 2C 24 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1894 C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+189C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+18A1 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+18A6 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+18AB 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+18AD 48 8D 05 2C 4C CC 07                                            lea     rax, aDouble    ; Load Effective Address
sub_14C8D5690+18B4 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+18B9 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+18BE 89 8B 4C 05 01 00                                               mov     [rbx+1054Ch], ecx
sub_14C8D5690+18C4 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+18C7 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+18CD E8 EE 23 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+18D2 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+18DA 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+18DF C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+18E4 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+18E9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+18EB 48 8D 05 CE B9 8B 04                                            lea     rax, aQuat      ; Load Effective Address
sub_14C8D5690+18F2 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+18F7 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+18FC 89 8B 50 05 01 00                                               mov     [rbx+10550h], ecx
sub_14C8D5690+1902 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1905 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+190B E8 B0 23 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1910 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+1918 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+191D C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1922 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1927 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1929 48 8D 05 E4 91 B1 05                                            lea     rax, aSelf      ; Load Effective Address
sub_14C8D5690+1930 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1935 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+193A 89 8B 54 05 01 00                                               mov     [rbx+10554h], ecx
sub_14C8D5690+1940 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1943 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1949 E8 72 23 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+194E C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+38h], 9
sub_14C8D5690+1956 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+195B C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1960 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1965 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1967 48 8D 05 62 E6 ED 03                                            lea     rax, aTransform ; Load Effective Address
sub_14C8D5690+196E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1973 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1978 89 8B 58 05 01 00                                               mov     [rbx+10558h], ecx
sub_14C8D5690+197E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1981 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1987 E8 34 23 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+198C C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+1994 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1999 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+199E 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+19A3 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+19A5 48 8D 05 30 7F DF 03                                            lea     rax, aObject    ; Load Effective Address
sub_14C8D5690+19AC 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+19B1 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+19B6 89 8B 5C 05 01 00                                               mov     [rbx+1055Ch], ecx
sub_14C8D5690+19BC 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+19BF 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+19C5 E8 F6 22 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+19CA C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+38h], 6
sub_14C8D5690+19D2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+19D7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+19D9 48 8D 05 CC 97 B3 04                                            lea     rax, aCamera    ; Load Effective Address
sub_14C8D5690+19E0 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+19E5 89 8B D0 05 01 00                                               mov     [rbx+105D0h], ecx
sub_14C8D5690+19EB 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+19F0 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+19F5 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+19FA 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1A00 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1A03 E8 B8 22 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1A08 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+1A10 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1A15 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1A1A 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1A1F 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1A21 48 8D 05 08 FA E2 03                                            lea     rax, aActor     ; Load Effective Address
sub_14C8D5690+1A28 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1A2D 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1A32 89 8B D4 05 01 00                                               mov     [rbx+105D4h], ecx
sub_14C8D5690+1A38 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1A3B 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1A41 E8 7A 22 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1A46 C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+1A4E 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1A53 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1A58 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1A5D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1A5F 48 8D 05 82 4A CC 07                                            lea     rax, aObjectredirect ; Load Effective Address
sub_14C8D5690+1A66 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1A6B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1A70 89 8B D8 05 01 00                                               mov     [rbx+105D8h], ecx
sub_14C8D5690+1A76 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1A79 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1A7F E8 3C 22 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1A84 C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+38h], 0Bh
sub_14C8D5690+1A8C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1A91 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1A96 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1A9B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1A9D 48 8D 05 5C 4A CC 07                                            lea     rax, aMapproperty ; Load Effective Address
sub_14C8D5690+1AA4 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1AA9 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1AAE 89 8B DC 05 01 00                                               mov     [rbx+105DCh], ecx
sub_14C8D5690+1AB4 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1AB7 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1ABD E8 FE 21 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1AC2 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+1ACA 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1ACF C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1AD4 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1AD9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1ADB 48 8D 05 A6 5A 68 04                                            lea     rax, aCylinder  ; Load Effective Address
sub_14C8D5690+1AE2 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1AE7 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1AEC 89 8B B0 04 01 00                                               mov     [rbx+104B0h], ecx
sub_14C8D5690+1AF2 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1AF5 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1AFB E8 C0 21 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1B00 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+1B08 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1B0D C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1B12 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1B17 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1B19 48 8D 05 28 FA C6 07                                            lea     rax, aBoxspherebound ; Load Effective Address
sub_14C8D5690+1B20 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1B25 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1B2A 89 8B 08 05 01 00                                               mov     [rbx+10508h], ecx
sub_14C8D5690+1B30 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1B33 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1B39 E8 82 21 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1B3E C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+1B46 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1B4B C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1B50 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1B55 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1B57 48 8D 05 FA 33 4F 04                                            lea     rax, aSelectioncolor ; Load Effective Address
sub_14C8D5690+1B5E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1B63 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1B68 89 8B 0C 05 01 00                                               mov     [rbx+1050Ch], ecx
sub_14C8D5690+1B6E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1B71 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1B77 E8 44 21 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1B7C 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1B7E 48 8D 05 93 53 64 04                                            lea     rax, unk_150F1C5A8 ; Load Effective Address
sub_14C8D5690+1B85 89 8B B8 07 01 00                                               mov     [rbx+107B8h], ecx
sub_14C8D5690+1B8B 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1B90 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1B95 C7 44 24 38 02 00 00 00                                         mov     dword ptr [rsp+38h], 2
sub_14C8D5690+1B9D 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1BA2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1BA7 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1BAA 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1BAF 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1BB5 E8 06 21 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1BBA C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+38h], 10h
sub_14C8D5690+1BC2 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1BC7 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1BCC 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1BD1 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1BD3 48 8D 05 36 49 CC 07                                            lea     rax, aExecuteubergra ; Load Effective Address
sub_14C8D5690+1BDA 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1BDF 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1BE4 89 8B BC 07 01 00                                               mov     [rbx+107BCh], ecx
sub_14C8D5690+1BEA 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1BED 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1BF3 E8 C8 20 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1BF8 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+1C00 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1C05 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1C0A 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1C0F 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1C11 48 8D 05 B0 EC 66 04                                            lea     rax, aDeviceid  ; Load Effective Address
sub_14C8D5690+1C18 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1C1D 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1C22 89 8B C0 07 01 00                                               mov     [rbx+107C0h], ecx
sub_14C8D5690+1C28 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1C2B 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1C31 E8 8A 20 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1C36 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+1C3E 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1C43 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1C48 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1C4D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1C4F 48 8D 05 D2 48 CC 07                                            lea     rax, aRootstat  ; Load Effective Address
sub_14C8D5690+1C56 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1C5B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1C60 89 8B C4 07 01 00                                               mov     [rbx+107C4h], ecx
sub_14C8D5690+1C66 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1C69 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1C6F E8 4C 20 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1C74 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+38h], 0Ch
sub_14C8D5690+1C7C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1C81 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1C86 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1C8B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1C8D 48 8D 05 A4 48 CC 07                                            lea     rax, aNameproperty ; Load Effective Address
sub_14C8D5690+1C94 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1C99 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1C9E 89 8B C8 07 01 00                                               mov     [rbx+107C8h], ecx
sub_14C8D5690+1CA4 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1CA7 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1CAD E8 0E 20 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1CB2 C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+38h], 9
sub_14C8D5690+1CBA 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1CBF C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1CC4 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1CC9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1CCB 48 8D 05 96 9D 7E 04                                            lea     rax, aMoveactor ; Load Effective Address
sub_14C8D5690+1CD2 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1CD7 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1CDC 89 8B 58 04 01 00                                               mov     [rbx+10458h], ecx
sub_14C8D5690+1CE2 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1CE5 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1CEB E8 D0 1F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1CF0 C7 44 24 38 03 00 00 00                                         mov     dword ptr [rsp+38h], 3
sub_14C8D5690+1CF8 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1CFD C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1D02 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1D07 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1D09 48 8D 05 80 69 EA 03                                            lea     rax, aAll_3     ; Load Effective Address
sub_14C8D5690+1D10 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1D15 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1D1A 89 8B CC 07 01 00                                               mov     [rbx+107CCh], ecx
sub_14C8D5690+1D20 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1D23 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1D29 E8 92 1F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1D2E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1D30 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1D35 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+1D3D 48 8D 05 04 48 CC 07                                            lea     rax, aExpressioninpu ; Load Effective Address
sub_14C8D5690+1D44 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1D49 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1D4E C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1D53 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1D58 89 8B D8 07 01 00                                               mov     [rbx+107D8h], ecx
sub_14C8D5690+1D5E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1D61 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1D67 E8 54 1F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1D6C C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+1D74 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1D79 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1D7E 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1D83 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1D85 48 8D 05 84 41 5F 05                                            lea     rax, aUntitled  ; Load Effective Address
sub_14C8D5690+1D8C 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1D91 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1D96 89 8B F8 07 01 00                                               mov     [rbx+107F8h], ecx
sub_14C8D5690+1D9C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1D9F 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1DA5 E8 16 1F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1DAA C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+1DB2 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1DB7 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1DBC 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1DC1 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1DC3 48 8D 05 9A B5 80 04                                            lea     rax, aTimer     ; Load Effective Address
sub_14C8D5690+1DCA 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1DCF 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1DD4 89 8B FC 07 01 00                                               mov     [rbx+107FCh], ecx
sub_14C8D5690+1DDA 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1DDD 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1DE3 E8 D8 1E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1DE8 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+1DF0 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1DF5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1DFA 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1DFF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1E01 48 8D 05 30 2F 3E 04                                            lea     rax, aTeam      ; Load Effective Address
sub_14C8D5690+1E08 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1E0D 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1E12 89 8B 00 08 01 00                                               mov     [rbx+10800h], ecx
sub_14C8D5690+1E18 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1E1B 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1E21 E8 9A 1E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1E26 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+1E2E 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1E33 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1E38 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1E3D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1E3F 48 8D 05 EE 7F EA 03                                            lea     rax, aSuper     ; Load Effective Address
sub_14C8D5690+1E46 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1E4B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1E50 89 8B 04 08 01 00                                               mov     [rbx+10804h], ecx
sub_14C8D5690+1E56 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1E59 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1E5F E8 5C 1E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1E64 C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+1E6C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1E71 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1E76 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1E7B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1E7D 48 8D 05 D4 46 CC 07                                            lea     rax, aUint32property ; Load Effective Address
sub_14C8D5690+1E84 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1E89 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1E8E 89 8B 90 07 01 00                                               mov     [rbx+10790h], ecx
sub_14C8D5690+1E94 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1E97 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1E9D E8 1E 1E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1EA2 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+1EAA 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1EAF C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1EB4 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1EB6 48 8D 05 7B A4 F6 03                                            lea     rax, aOuter     ; Load Effective Address
sub_14C8D5690+1EBD 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1EC2 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1EC7 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1ECD 89 8B A4 04 01 00                                               mov     [rbx+104A4h], ecx
sub_14C8D5690+1ED3 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1ED8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1EDB E8 E0 1D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1EE0 C7 44 24 38 03 00 00 00                                         mov     dword ptr [rsp+38h], 3
sub_14C8D5690+1EE8 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1EED C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1EF2 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1EF7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1EF9 48 8D 05 A4 A2 E8 03                                            lea     rax, aMap_0     ; Load Effective Address
sub_14C8D5690+1F00 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1F05 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1F0A 89 8B 94 07 01 00                                               mov     [rbx+10794h], ecx
sub_14C8D5690+1F10 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1F13 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1F19 E8 A2 1D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1F1E C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+1F26 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1F2B C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1F30 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1F35 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1F37 48 8D 05 2A 46 CC 07                                            lea     rax, aRotatorpropert ; Load Effective Address
sub_14C8D5690+1F3E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1F43 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1F48 89 8B 98 07 01 00                                               mov     [rbx+10798h], ecx
sub_14C8D5690+1F4E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1F51 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1F57 E8 64 1D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1F5C C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+1F64 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1F69 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1F6E 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1F73 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1F75 48 8D 05 20 B5 DA 04                                            lea     rax, aRole_0    ; Load Effective Address
sub_14C8D5690+1F7C 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1F81 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1F86 89 8B 70 04 01 00                                               mov     [rbx+10470h], ecx
sub_14C8D5690+1F8C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1F8F 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1F95 E8 26 1D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1F9A C7 44 24 38 0A 00 00 00                                         mov     dword ptr [rsp+38h], 0Ah
sub_14C8D5690+1FA2 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1FA7 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1FAC 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1FB1 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1FB3 48 8D 05 BE 45 CC 07                                            lea     rax, aRemoterole ; Load Effective Address
sub_14C8D5690+1FBA 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1FBF 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+1FC4 89 8B 9C 07 01 00                                               mov     [rbx+1079Ch], ecx
sub_14C8D5690+1FCA 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+1FCD 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+1FD3 E8 E8 1C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+1FD8 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+1FE0 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+1FE5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+1FEA 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+1FEF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+1FF1 48 8D 05 90 45 CC 07                                            lea     rax, aPersistentleve ; Load Effective Address
sub_14C8D5690+1FF8 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+1FFD 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2002 89 8B A0 07 01 00                                               mov     [rbx+107A0h], ecx
sub_14C8D5690+2008 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+200B 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2011 E8 AA 1C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2016 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+201E 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2023 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2028 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+202D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+202F 48 8D 05 62 45 CC 07                                            lea     rax, aTheworld  ; Load Effective Address
sub_14C8D5690+2036 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+203B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2040 89 8B A4 07 01 00                                               mov     [rbx+107A4h], ecx
sub_14C8D5690+2046 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2049 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+204F E8 6C 1C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2054 C7 44 24 38 03 00 00 00                                         mov     dword ptr [rsp+38h], 3
sub_14C8D5690+205C C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2061 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2063 48 8D 05 DE 60 89 04                                            lea     rax, aLow_0     ; Load Effective Address
sub_14C8D5690+206A 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+206F 89 8B A8 07 01 00                                               mov     [rbx+107A8h], ecx
sub_14C8D5690+2075 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+207A 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+207F 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2084 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+208A 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+208D E8 2E 1C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2092 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+209A 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+209F C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+20A4 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+20A9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+20AB 48 8D 05 8A 60 89 04                                            lea     rax, aHigh      ; Load Effective Address
sub_14C8D5690+20B2 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+20B7 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+20BC 89 8B 08 08 01 00                                               mov     [rbx+10808h], ecx
sub_14C8D5690+20C2 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+20C5 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+20CB E8 F0 1B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+20D0 C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+38h], 0Bh
sub_14C8D5690+20D8 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+20DD C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+20E2 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+20E7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+20E9 48 8D 05 20 85 F7 04                                            lea     rax, aNetworkguid ; Load Effective Address
sub_14C8D5690+20F0 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+20F5 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+20FA 89 8B 0C 08 01 00                                               mov     [rbx+1080Ch], ecx
sub_14C8D5690+2100 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2103 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2109 E8 B2 1B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+210E C7 44 24 38 0A 00 00 00                                         mov     dword ptr [rsp+38h], 0Ah
sub_14C8D5690+2116 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+211B C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2120 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2125 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2127 48 8D 05 7A 44 CC 07                                            lea     rax, aGamethread_0 ; Load Effective Address
sub_14C8D5690+212E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2133 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2138 89 8B 10 08 01 00                                               mov     [rbx+10810h], ecx
sub_14C8D5690+213E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2141 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2147 E8 74 1B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+214C C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+38h], 0Ch
sub_14C8D5690+2154 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2159 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+215E 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2163 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2165 48 8D 05 4C 44 CC 07                                            lea     rax, aRenderthread_0 ; Load Effective Address
sub_14C8D5690+216C 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2171 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2176 89 8B 14 08 01 00                                               mov     [rbx+10814h], ecx
sub_14C8D5690+217C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+217F 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2185 E8 36 1B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+218A C7 44 24 38 19 00 00 00                                         mov     dword ptr [rsp+38h], 19h
sub_14C8D5690+2192 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2197 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+219C 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+21A1 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+21A3 48 8D 05 1E 44 CC 07                                            lea     rax, aMulticastdeleg ; Load Effective Address
sub_14C8D5690+21AA 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+21AF 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+21B4 89 8B 18 08 01 00                                               mov     [rbx+10818h], ecx
sub_14C8D5690+21BA 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+21BD 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+21C3 E8 F8 1A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+21C8 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+38h], 0Dh
sub_14C8D5690+21D0 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+21D5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+21DA 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+21DF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+21E1 48 8D 05 00 44 CC 07                                            lea     rax, aOtherchildren ; Load Effective Address
sub_14C8D5690+21E8 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+21ED 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+21F2 89 8B 80 04 01 00                                               mov     [rbx+10480h], ecx
sub_14C8D5690+21F8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+21FB 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2201 E8 BA 1A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2206 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2208 48 8D 05 E9 9E E6 03                                            lea     rax, aLocation  ; Load Effective Address
sub_14C8D5690+220F 89 8B 1C 08 01 00                                               mov     [rbx+1081Ch], ecx
sub_14C8D5690+2215 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+221A 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+221F C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+2227 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+222C C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2231 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2234 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2239 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+223F E8 7C 1A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2244 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+224C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2251 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2256 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+225B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+225D 48 8D 05 34 50 EA 03                                            lea     rax, aRotation  ; Load Effective Address
sub_14C8D5690+2264 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2269 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+226E 89 8B 20 08 01 00                                               mov     [rbx+10820h], ecx
sub_14C8D5690+2274 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2277 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+227D E8 3E 1A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2282 C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+228A 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+228F C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2294 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2299 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+229B 48 8D 05 56 43 CC 07                                            lea     rax, aUint64property ; Load Effective Address
sub_14C8D5690+22A2 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+22A7 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+22AC 89 8B 24 08 01 00                                               mov     [rbx+10824h], ecx
sub_14C8D5690+22B2 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+22B5 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+22BB E8 00 1A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+22C0 C7 44 24 38 03 00 00 00                                         mov     dword ptr [rsp+38h], 3
sub_14C8D5690+22C8 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+22CD C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+22D2 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+22D7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+22D9 48 8D 05 28 43 CC 07                                            lea     rax, aBsp       ; Load Effective Address
sub_14C8D5690+22E0 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+22E5 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+22EA 89 8B A0 04 01 00                                               mov     [rbx+104A0h], ecx
sub_14C8D5690+22F0 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+22F3 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+22F9 E8 C2 19 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+22FE C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+2306 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+230B C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2310 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2315 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2317 48 8D 05 82 41 83 05                                            lea     rax, aStructproperty ; Load Effective Address
sub_14C8D5690+231E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2323 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2328 89 8B 28 08 01 00                                               mov     [rbx+10828h], ecx
sub_14C8D5690+232E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2331 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2337 E8 84 19 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+233C C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+38h], 0Eh
sub_14C8D5690+2344 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2349 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+234E 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2353 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2355 48 8D 05 B4 42 CC 07                                            lea     rax, aEditorsettings ; Load Effective Address
sub_14C8D5690+235C 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2361 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2366 89 8B 68 04 01 00                                               mov     [rbx+10468h], ecx
sub_14C8D5690+236C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+236F 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2375 E8 46 19 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+237A C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+38h], 0Bh
sub_14C8D5690+2382 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2387 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+238C 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2391 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2393 48 8D 05 86 42 CC 07                                            lea     rax, aAudiothread ; Load Effective Address
sub_14C8D5690+239A 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+239F 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+23A4 89 8B 2C 08 01 00                                               mov     [rbx+1082Ch], ecx
sub_14C8D5690+23AA 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+23AD 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+23B3 E8 08 19 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+23B8 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+23BA 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+23BF C7 44 24 38 02 00 00 00                                         mov     dword ptr [rsp+38h], 2
sub_14C8D5690+23C7 48 8D 05 26 DF 42 04                                            lea     rax, unk_150D05984 ; Load Effective Address
sub_14C8D5690+23CE 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+23D3 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+23D8 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+23DD 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+23E2 89 8B 30 08 01 00                                               mov     [rbx+10830h], ecx
sub_14C8D5690+23E8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+23EB 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+23F1 E8 CA 18 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+23F6 C7 44 24 38 11 00 00 00                                         mov     dword ptr [rsp+38h], 11h
sub_14C8D5690+23FE 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2403 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2408 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+240D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+240F 48 8D 05 1A 42 CC 07                                            lea     rax, aStructrefprope ; Load Effective Address
sub_14C8D5690+2416 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+241B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2420 89 8B 34 08 01 00                                               mov     [rbx+10834h], ecx
sub_14C8D5690+2426 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2429 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+242F E8 8C 18 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2434 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+38h], 0Fh
sub_14C8D5690+243C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2441 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2446 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+244B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+244D 48 8D 05 F4 41 CC 07                                            lea     rax, aUserdefinedenu ; Load Effective Address
sub_14C8D5690+2454 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2459 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+245E 89 8B 84 04 01 00                                               mov     [rbx+10484h], ecx
sub_14C8D5690+2464 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2467 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+246D E8 4E 18 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2472 C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+38h], 7
sub_14C8D5690+247A 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+247F C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2484 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2489 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+248B 48 8D 05 06 64 A6 05                                            lea     rax, aControl   ; Load Effective Address
sub_14C8D5690+2492 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2497 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+249C 89 8B 38 08 01 00                                               mov     [rbx+10838h], ecx
sub_14C8D5690+24A2 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+24A5 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+24AB E8 10 18 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+24B0 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+38h], 5
sub_14C8D5690+24B8 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+24BD C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+24C2 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+24C7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+24C9 48 8D 05 4C 4A 64 04                                            lea     rax, aVoice_0   ; Load Effective Address
sub_14C8D5690+24D0 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+24D5 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+24DA 89 8B 3C 08 01 00                                               mov     [rbx+1083Ch], ecx
sub_14C8D5690+24E0 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+24E3 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+24E9 E8 D2 17 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+24EE C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+24F6 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+24FB C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2500 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2505 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2507 48 8D 05 4A 41 CC 07                                            lea     rax, aZlib      ; Load Effective Address
sub_14C8D5690+250E 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2513 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2518 89 8B 40 08 01 00                                               mov     [rbx+10840h], ecx
sub_14C8D5690+251E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2521 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2527 E8 94 17 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+252C C7 44 24 38 12 00 00 00                                         mov     dword ptr [rsp+38h], 12h
sub_14C8D5690+2534 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2539 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+253E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2540 48 8D 05 19 41 CC 07                                            lea     rax, aSoftobjectprop ; Load Effective Address
sub_14C8D5690+2547 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+254C 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2551 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2557 89 8B 44 08 01 00                                               mov     [rbx+10844h], ecx
sub_14C8D5690+255D 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2562 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2565 E8 56 17 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+256A C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+2572 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2577 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+257C 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2581 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2583 48 8D 05 EA 40 CC 07                                            lea     rax, aGzip      ; Load Effective Address
sub_14C8D5690+258A 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+258F 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2594 89 8B 8C 04 01 00                                               mov     [rbx+1048Ch], ecx
sub_14C8D5690+259A 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+259D 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+25A3 E8 18 17 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+25A8 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+38h], 4
sub_14C8D5690+25B0 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+25B5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+25BA 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+25BF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+25C1 48 8D 05 B4 40 CC 07                                            lea     rax, aZstd      ; Load Effective Address
sub_14C8D5690+25C8 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+25CD 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+25D2 89 8B 48 08 01 00                                               mov     [rbx+10848h], ecx
sub_14C8D5690+25D8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+25DB 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+25E1 E8 DA 16 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+25E6 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+38h], 0Ch
sub_14C8D5690+25EE 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+25F3 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+25F8 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+25FD 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+25FF 48 8D 05 82 40 CC 07                                            lea     rax, aTextproperty ; Load Effective Address
sub_14C8D5690+2606 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+260B 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2610 89 8B 4C 08 01 00                                               mov     [rbx+1084Ch], ecx
sub_14C8D5690+2616 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2619 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+261F E8 9C 16 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2624 C7 44 24 38 16 00 00 00                                         mov     dword ptr [rsp+38h], 16h
sub_14C8D5690+262C 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2631 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2636 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+263B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+263D 48 8D 05 54 40 CC 07                                            lea     rax, aMeshemitterver ; Load Effective Address
sub_14C8D5690+2644 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2649 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+264E 89 8B 78 04 01 00                                               mov     [rbx+10478h], ecx
sub_14C8D5690+2654 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2657 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+265D E8 5E 16 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2662 C7 44 24 38 16 00 00 00                                         mov     dword ptr [rsp+38h], 16h
sub_14C8D5690+266A 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+266F C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+2674 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2679 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+267B 48 8D 05 2E 40 CC 07                                            lea     rax, aTextureoffsetp ; Load Effective Address
sub_14C8D5690+2682 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2687 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+268C 89 8B DC 07 01 00                                               mov     [rbx+107DCh], ecx
sub_14C8D5690+2692 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2695 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+269B E8 20 16 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+26A0 C7 44 24 38 15 00 00 00                                         mov     dword ptr [rsp+38h], 15h
sub_14C8D5690+26A8 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+26AD C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+26B2 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+26B7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+26B9 48 8D 05 08 40 CC 07                                            lea     rax, aTexturescalepa ; Load Effective Address
sub_14C8D5690+26C0 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+26C5 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+26CA 89 8B E0 07 01 00                                               mov     [rbx+107E0h], ecx
sub_14C8D5690+26D0 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+26D3 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+26D9 E8 E2 15 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+26DE C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+38h], 9
sub_14C8D5690+26E6 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+26EB 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+26ED 48 8D 05 EC 3F CC 07                                            lea     rax, aImpactvel ; Load Effective Address
sub_14C8D5690+26F4 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+26F9 89 8B E4 07 01 00                                               mov     [rbx+107E4h], ecx
sub_14C8D5690+26FF 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2704 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2709 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+270E 66 0F 7F 44 24 30                                              movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2714 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2717 E8 A4 15 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+271C C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+38h], 0Dh
sub_14C8D5690+2724 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2729 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+272E 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2733 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2735 48 8D 05 B4 3F CC 07                                            lea     rax, aInt32property ; Load Effective Address
sub_14C8D5690+273C 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+2741 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2746 89 8B E8 07 01 00                                               mov     [rbx+107E8h], ecx
sub_14C8D5690+274C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+274F 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2755 E8 66 15 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+275A C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+38h], 8
sub_14C8D5690+2762 4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_14C8D5690+2767 C6 44 24 3C 00                                                  mov     byte ptr [rsp+3Ch], 0
sub_14C8D5690+276C 48 8D 54 24 44                                                  lea     rdx, [rsp+44h]  ; Load Effective Address
sub_14C8D5690+2771 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2773 48 8D 05 86 3F CC 07                                            lea     rax, aSlidevel  ; Load Effective Address
sub_14C8D5690+277A 48 89 44 24 30                                                  mov     [rsp+30h], rax
sub_14C8D5690+277F 0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2784 89 8B 94 04 01 00                                               mov     [rbx+10494h], ecx
sub_14C8D5690+278A 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+278D 66 0F 7F 44 24 30                                               movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2793 E8 28 15 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2798 C7 44 24 38 17 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 17h
sub_14C8D5690+27A0 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+27A5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+27AA 48 8D 54 24 44                                                  lea     rdx, [rsp+1C0h+var_17C] ; Load Effective Address
sub_14C8D5690+27AF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+27B1 48 8D 05 58 3F CC 07                                            lea     rax, aTextureoffset1 ; Load Effective Address
sub_14C8D5690+27B8 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+27BD 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+27C2 89 8B EC 07 01 00                                               mov     [rbx+107ECh], ecx
sub_14C8D5690+27C8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+27CB 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+27D1 E8 EA 14 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+27D6 C7 44 24 38 1B 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 1Bh
sub_14C8D5690+27DE 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+27E3 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+27E8 48 8D 54 24 44                                                  lea     rdx, [rsp+1C0h+var_17C] ; Load Effective Address
sub_14C8D5690+27ED 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+27EF 48 8D 05 32 3F CC 07                                            lea     rax, aMeshemitterdyn ; Load Effective Address
sub_14C8D5690+27F6 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+27FB 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2800 89 8B F0 07 01 00                                               mov     [rbx+107F0h], ecx
sub_14C8D5690+2806 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2809 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+280F E8 AC 14 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2814 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 5
sub_14C8D5690+281C 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2821 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2826 48 8D 54 24 44                                                  lea     rdx, [rsp+1C0h+var_17C] ; Load Effective Address
sub_14C8D5690+282B 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+282D 48 8D 05 08 B0 A3 04                                            lea     rax, aDgram     ; Load Effective Address
sub_14C8D5690+2834 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2839 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+283E 89 8B F4 07 01 00                                               mov     [rbx+107F4h], ecx
sub_14C8D5690+2844 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2847 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+284D E8 6E 14 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2852 C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 6
sub_14C8D5690+285A 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+285F C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2864 48 8D 54 24 44                                                  lea     rdx, [rsp+1C0h+var_17C] ; Load Effective Address
sub_14C8D5690+2869 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+286B 48 8D 05 D2 3E CC 07                                            lea     rax, aStream    ; Load Effective Address
sub_14C8D5690+2872 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2877 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+287C 89 8B A0 08 01 00                                               mov     [rbx+108A0h], ecx
sub_14C8D5690+2882 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2885 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+288B E8 30 14 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2890 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2892 48 8D 05 B7 3E CC 07                                            lea     rax, aInt64property ; Load Effective Address
sub_14C8D5690+2899 89 8B A4 08 01 00                                               mov     [rbx+108A4h], ecx
sub_14C8D5690+289F 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+28A4 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+28A9 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+28B1 48 8D 55 64                                                     lea     rdx, [rbp+0C0h+var_5C] ; Load Effective Address
sub_14C8D5690+28B5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+28BA 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+28BD 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+28C2 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+28C8 E8 F3 13 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+28CD C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+28D5 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+28DA C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+28DF 48 8D 55 68                                                     lea     rdx, [rbp+0C0h+var_58] ; Load Effective Address
sub_14C8D5690+28E3 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+28E5 48 8D 05 74 3E CC 07                                            lea     rax, aGamenetdriver ; Load Effective Address
sub_14C8D5690+28EC 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+28F1 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+28F6 89 8B 90 04 01 00                                               mov     [rbx+10490h], ecx
sub_14C8D5690+28FC 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+28FF 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2905 E8 B6 13 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+290A C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+2912 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2917 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+291C 48 8D 55 6C                                                     lea     rdx, [rbp+0C0h+var_54] ; Load Effective Address
sub_14C8D5690+2920 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2922 48 8D 05 47 3E CC 07                                            lea     rax, aPendingnetdriv ; Load Effective Address
sub_14C8D5690+2929 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+292E 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2933 89 8B A8 08 01 00                                               mov     [rbx+108A8h], ecx
sub_14C8D5690+2939 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+293C 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2942 E8 79 13 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2947 C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Bh
sub_14C8D5690+294F 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2954 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2959 48 8D 54 24 64                                                  lea     rdx, [rsp+1C0h+var_15C] ; Load Effective Address
sub_14C8D5690+295E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2960 48 8D 05 21 3E CC 07                                            lea     rax, aSetproperty ; Load Effective Address
sub_14C8D5690+2967 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+296C 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2971 89 8B AC 08 01 00                                               mov     [rbx+108ACh], ecx
sub_14C8D5690+2977 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+297A 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2980 E8 3B 13 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2985 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 8
sub_14C8D5690+298D 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2992 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2997 48 8D 54 24 68                                                  lea     rdx, [rsp+1C0h+var_158] ; Load Effective Address
sub_14C8D5690+299C 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+299E 48 8D 05 F3 3D CC 07                                            lea     rax, aMeshport  ; Load Effective Address
sub_14C8D5690+29A5 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+29AA 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+29AF 89 8B B4 04 01 00                                               mov     [rbx+104B4h], ecx
sub_14C8D5690+29B5 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+29B8 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+29BE E8 FD 12 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+29C3 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+29CB 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+29D0 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+29D5 48 8D 54 24 6C                                                  lea     rdx, [rsp+1C0h+var_154] ; Load Effective Address
sub_14C8D5690+29DA 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+29DC 48 8D 05 C5 3D CC 07                                            lea     rax, aMeshnetdriver ; Load Effective Address
sub_14C8D5690+29E3 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+29E8 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+29ED 89 8B CC 08 01 00                                               mov     [rbx+108CCh], ecx
sub_14C8D5690+29F3 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+29F6 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+29FC E8 BF 12 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2A01 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Fh
sub_14C8D5690+2A09 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2A0E C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2A13 48 8D 54 24 70                                                  lea     rdx, [rsp+1C0h+var_150] ; Load Effective Address
sub_14C8D5690+2A18 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2A1A 48 8D 05 97 3D CC 07                                            lea     rax, aLivestreamvoic ; Load Effective Address
sub_14C8D5690+2A21 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2A26 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2A2B 89 8B D0 08 01 00                                               mov     [rbx+108D0h], ecx
sub_14C8D5690+2A31 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2A34 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2A3A E8 81 12 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2A3F 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2A41 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2A46 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 4
sub_14C8D5690+2A4E 48 8D 05 73 3D CC 07                                            lea     rax, aCore_0    ; Load Effective Address
sub_14C8D5690+2A55 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2A5A 48 8D 54 24 74                                                  lea     rdx, [rsp+1C0h+var_14C] ; Load Effective Address
sub_14C8D5690+2A5F C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2A64 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2A69 89 8B D4 08 01 00                                               mov     [rbx+108D4h], ecx
sub_14C8D5690+2A6F 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2A72 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2A78 E8 43 12 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2A7D C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 6
sub_14C8D5690+2A85 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2A8A C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2A8F 48 8D 54 24 78                                                  lea     rdx, [rsp+1C0h+var_148] ; Load Effective Address
sub_14C8D5690+2A94 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2A96 48 8D 05 5B 18 E3 03                                            lea     rax, aEngine_2  ; Load Effective Address
sub_14C8D5690+2A9D 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2AA2 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2AA7 89 8B B8 04 01 00                                               mov     [rbx+104B8h], ecx
sub_14C8D5690+2AAD 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2AB0 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2AB6 E8 05 12 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2ABB C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 6
sub_14C8D5690+2AC3 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2AC8 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2ACD 48 8D 54 24 7C                                                  lea     rdx, [rsp+1C0h+var_144] ; Load Effective Address
sub_14C8D5690+2AD2 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2AD4 48 8D 05 35 44 43 04                                            lea     rax, aEditor    ; Load Effective Address
sub_14C8D5690+2ADB 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2AE0 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2AE5 89 8B BC 04 01 00                                               mov     [rbx+104BCh], ecx
sub_14C8D5690+2AEB 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2AEE 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2AF4 E8 C7 11 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2AF9 C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Bh
sub_14C8D5690+2B01 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2B06 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2B0B 48 8D 55 80                                                     lea     rdx, [rbp+0C0h+var_140] ; Load Effective Address
sub_14C8D5690+2B0F 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2B11 48 8D 05 B8 3C CC 07                                            lea     rax, aCoreuobject ; Load Effective Address
sub_14C8D5690+2B18 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2B1D 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2B22 89 8B C0 04 01 00                                               mov     [rbx+104C0h], ecx
sub_14C8D5690+2B28 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2B2B 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2B31 E8 8A 11 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2B36 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+2B3E 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2B43 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2B48 48 8D 55 84                                                     lea     rdx, [rbp+0C0h+var_13C] ; Load Effective Address
sub_14C8D5690+2B4C 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2B4E 48 8D 05 8B 3C CC 07                                            lea     rax, aEnumproperty ; Load Effective Address
sub_14C8D5690+2B55 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2B5A 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2B5F 89 8B C4 04 01 00                                               mov     [rbx+104C4h], ecx
sub_14C8D5690+2B65 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2B68 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2B6E E8 4D 11 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2B73 C7 44 24 38 06 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 6
sub_14C8D5690+2B7B 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2B80 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2B85 48 8D 55 88                                                     lea     rdx, [rbp+0C0h+var_138] ; Load Effective Address
sub_14C8D5690+2B89 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2B8B 48 8D 05 D6 28 40 04                                            lea     rax, aLinear    ; Load Effective Address
sub_14C8D5690+2B92 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2B97 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2B9C 89 8B C8 04 01 00                                               mov     [rbx+104C8h], ecx
sub_14C8D5690+2BA2 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2BA5 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2BAB E8 10 11 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2BB0 C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 5
sub_14C8D5690+2BB8 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2BBD C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2BC2 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2BC4 48 8D 05 25 53 EC 03                                            lea     rax, aPoint     ; Load Effective Address
sub_14C8D5690+2BCB 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2BD0 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2BD5 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2BDB 89 8B F0 08 01 00                                               mov     [rbx+108F0h], ecx
sub_14C8D5690+2BE1 48 8D 55 8C                                                     lea     rdx, [rbp+0C0h+var_134] ; Load Effective Address
sub_14C8D5690+2BE5 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2BE8 E8 D3 10 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2BED C7 44 24 38 12 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 12h
sub_14C8D5690+2BF5 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2BFA C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2BFF 48 8D 55 90                                                     lea     rdx, [rbp+0C0h+var_130] ; Load Effective Address
sub_14C8D5690+2C03 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2C05 48 8D 05 E4 3B CC 07                                            lea     rax, aLazyobjectprop ; Load Effective Address
sub_14C8D5690+2C0C 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2C11 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2C16 89 8B F4 08 01 00                                               mov     [rbx+108F4h], ecx
sub_14C8D5690+2C1C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2C1F 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2C25 E8 96 10 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2C2A C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 5
sub_14C8D5690+2C32 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2C37 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2C3C 48 8D 55 94                                                     lea     rdx, [rbp+0C0h+var_12C] ; Load Effective Address
sub_14C8D5690+2C40 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2C42 48 8D 05 BB 3B CC 07                                            lea     rax, aAniso     ; Load Effective Address
sub_14C8D5690+2C49 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2C4E 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2C53 89 8B 88 04 01 00                                               mov     [rbx+10488h], ecx
sub_14C8D5690+2C59 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2C5C 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2C62 E8 59 10 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2C67 C7 44 24 38 12 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 12h
sub_14C8D5690+2C6F 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2C74 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2C79 48 8D 55 98                                                     lea     rdx, [rbp+0C0h+var_128] ; Load Effective Address
sub_14C8D5690+2C7D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2C7F 48 8D 05 8A 3B CC 07                                            lea     rax, aLightmapresolu ; Load Effective Address
sub_14C8D5690+2C86 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2C8B 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2C90 89 8B F8 08 01 00                                               mov     [rbx+108F8h], ecx
sub_14C8D5690+2C96 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2C99 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2C9F E8 1C 10 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2CA4 C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 9
sub_14C8D5690+2CAC 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2CB1 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2CB6 48 8D 55 9C                                                     lea     rdx, [rbp+0C0h+var_124] ; Load Effective Address
sub_14C8D5690+2CBA 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2CBC 48 8D 05 65 3B CC 07                                            lea     rax, aUngrouped ; Load Effective Address
sub_14C8D5690+2CC3 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2CC8 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2CCD 89 8B FC 08 01 00                                               mov     [rbx+108FCh], ecx
sub_14C8D5690+2CD3 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2CD6 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2CDC E8 DF 0F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2CE1 C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 9
sub_14C8D5690+2CE9 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2CEE C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2CF3 48 8D 55 A0                                                     lea     rdx, [rbp+0C0h+var_120] ; Load Effective Address
sub_14C8D5690+2CF7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2CF9 48 8D 05 38 3B CC 07                                            lea     rax, aVoicechat ; Load Effective Address
sub_14C8D5690+2D00 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2D05 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2D0A 89 8B 1C 09 01 00                                               mov     [rbx+1091Ch], ecx
sub_14C8D5690+2D10 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2D13 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2D19 E8 A2 0F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2D1E C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+2D26 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2D2B C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2D30 48 8D 55 A4                                                     lea     rdx, [rbp+0C0h+var_11C] ; Load Effective Address
sub_14C8D5690+2D34 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2D36 48 8D 05 0B 3B CC 07                                            lea     rax, aInt8property ; Load Effective Address
sub_14C8D5690+2D3D 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2D42 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2D47 89 8B 20 09 01 00                                               mov     [rbx+10920h], ecx
sub_14C8D5690+2D4D 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2D50 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2D56 E8 65 0F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2D5B C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 7
sub_14C8D5690+2D63 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2D68 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2D6A 48 8D 05 67 20 03 05                                            lea     rax, aPlaying   ; Load Effective Address
sub_14C8D5690+2D71 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2D76 89 8B 9C 04 01 00                                               mov     [rbx+1049Ch], ecx
sub_14C8D5690+2D7C 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2D81 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2D86 48 8D 55 A8                                                     lea     rdx, [rbp+0C0h+var_118] ; Load Effective Address
sub_14C8D5690+2D8A 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2D90 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2D93 E8 28 0F 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2D98 C7 44 24 38 0A 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ah
sub_14C8D5690+2DA0 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2DA5 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2DAA 48 8D 55 AC                                                     lea     rdx, [rbp+0C0h+var_114] ; Load Effective Address
sub_14C8D5690+2DAE 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2DB0 48 8D 05 A1 3A CC 07                                            lea     rax, aSpectating ; Load Effective Address
sub_14C8D5690+2DB7 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2DBC 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2DC1 89 8B 40 09 01 00                                               mov     [rbx+10940h], ecx
sub_14C8D5690+2DC7 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2DCA 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2DD0 E8 EB 0E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2DD5 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 8
sub_14C8D5690+2DDD 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2DE2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2DE7 48 8D 55 B0                                                     lea     rdx, [rbp+0C0h+var_110] ; Load Effective Address
sub_14C8D5690+2DEB 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2DED 48 8D 05 54 85 E2 04                                            lea     rax, aInactive_0 ; Load Effective Address
sub_14C8D5690+2DF4 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2DF9 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2DFE 89 8B 48 09 01 00                                               mov     [rbx+10948h], ecx
sub_14C8D5690+2E04 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2E07 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2E0D E8 AE 0E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2E12 C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Eh
sub_14C8D5690+2E1A 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2E1F C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2E24 48 8D 55 B4                                                     lea     rdx, [rbp+0C0h+var_10C] ; Load Effective Address
sub_14C8D5690+2E28 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2E2A 48 8D 05 37 3A CC 07                                            lea     rax, aObjectproperty ; Load Effective Address
sub_14C8D5690+2E31 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2E36 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2E3B 89 8B 54 09 01 00                                               mov     [rbx+10954h], ecx
sub_14C8D5690+2E41 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2E44 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2E4A E8 71 0E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2E4F C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Bh
sub_14C8D5690+2E57 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2E5C C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2E61 48 8D 55 B8                                                     lea     rdx, [rbp+0C0h+var_108] ; Load Effective Address
sub_14C8D5690+2E65 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2E67 48 8D 05 0A 3A CC 07                                            lea     rax, aPerfwarning ; Load Effective Address
sub_14C8D5690+2E6E 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2E73 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2E78 89 8B 54 04 01 00                                               mov     [rbx+10454h], ecx
sub_14C8D5690+2E7E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2E81 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2E87 E8 34 0E 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2E8C C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 4
sub_14C8D5690+2E94 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2E99 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2E9E 48 8D 55 BC                                                     lea     rdx, [rbp+0C0h+var_104] ; Load Effective Address
sub_14C8D5690+2EA2 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2EA4 48 8D 05 ED 74 3B 04                                            lea     rax, aInfo      ; Load Effective Address
sub_14C8D5690+2EAB 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2EB0 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2EB5 89 8B B8 09 01 00                                               mov     [rbx+109B8h], ecx
sub_14C8D5690+2EBB 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2EBE 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2EC4 E8 F7 0D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2EC9 C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 4
sub_14C8D5690+2ED1 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2ED6 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2EDB 48 8D 55 C0                                                     lea     rdx, [rbp+0C0h+var_100] ; Load Effective Address
sub_14C8D5690+2EDF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2EE1 48 8D 05 AC BF E1 03                                            lea     rax, aInit      ; Load Effective Address
sub_14C8D5690+2EE8 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2EED 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2EF2 89 8B BC 09 01 00                                               mov     [rbx+109BCh], ecx
sub_14C8D5690+2EF8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2EFB 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2F01 E8 BA 0D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2F06 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2F08 48 8D 05 C1 78 E5 03                                            lea     rax, aExit      ; Load Effective Address
sub_14C8D5690+2F0F 89 8B C0 09 01 00                                               mov     [rbx+109C0h], ecx
sub_14C8D5690+2F15 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2F1A 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2F1F C7 44 24 38 04 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 4
sub_14C8D5690+2F27 48 8D 55 C4                                                     lea     rdx, [rbp+0C0h+var_FC] ; Load Effective Address
sub_14C8D5690+2F2B C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2F30 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2F33 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2F38 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2F3E E8 7D 0D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2F43 C7 44 24 38 0E 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Eh
sub_14C8D5690+2F4B 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2F50 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2F55 48 8D 55 C8                                                     lea     rdx, [rbp+0C0h+var_F8] ; Load Effective Address
sub_14C8D5690+2F59 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2F5B 48 8D 05 26 39 CC 07                                            lea     rax, aDoubleproperty ; Load Effective Address
sub_14C8D5690+2F62 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2F67 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2F6C 89 8B C4 09 01 00                                               mov     [rbx+109C4h], ecx
sub_14C8D5690+2F72 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2F75 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2F7B E8 40 0D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2F80 C7 44 24 38 03 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 3
sub_14C8D5690+2F88 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2F8D C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2F92 48 8D 55 CC                                                     lea     rdx, [rbp+0C0h+var_F4] ; Load Effective Address
sub_14C8D5690+2F96 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2F98 48 8D 05 99 D6 74 04                                            lea     rax, unk_151025CC8 ; Load Effective Address
sub_14C8D5690+2F9F 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2FA4 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2FA9 89 8B 60 04 01 00                                               mov     [rbx+10460h], ecx
sub_14C8D5690+2FAF 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2FB2 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2FB8 E8 03 0D 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2FBD C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 7
sub_14C8D5690+2FC5 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+2FCA C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+2FCF 48 8D 55 D0                                                     lea     rdx, [rbp+0C0h+var_F0] ; Load Effective Address
sub_14C8D5690+2FD3 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+2FD5 48 8D 05 A4 A5 99 04                                            lea     rax, aWarning   ; Load Effective Address
sub_14C8D5690+2FDC 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+2FE1 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+2FE6 89 8B C8 09 01 00                                               mov     [rbx+109C8h], ecx
sub_14C8D5690+2FEC 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+2FEF 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+2FF5 E8 C6 0C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+2FFA C7 44 24 38 05 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 5
sub_14C8D5690+3002 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3007 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+300C 48 8D 55 D4                                                     lea     rdx, [rbp+0C0h+var_EC] ; Load Effective Address
sub_14C8D5690+3010 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3012 48 8D 05 A3 68 EA 03                                            lea     rax, aError     ; Load Effective Address
sub_14C8D5690+3019 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+301E 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3023 89 8B CC 09 01 00                                               mov     [rbx+109CCh], ecx
sub_14C8D5690+3029 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+302C 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3032 E8 89 0C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3037 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+303F 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3044 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3049 48 8D 55 D8                                                     lea     rdx, [rbp+0C0h+var_E8] ; Load Effective Address
sub_14C8D5690+304D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+304F 48 8D 05 42 38 CC 07                                            lea     rax, aFontcharacter ; Load Effective Address
sub_14C8D5690+3056 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+305B 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3060 89 8B D0 09 01 00                                               mov     [rbx+109D0h], ecx
sub_14C8D5690+3066 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3069 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+306F E8 4C 0C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3074 C7 44 24 38 13 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 13h
sub_14C8D5690+307C 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3081 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3086 48 8D 55 DC                                                     lea     rdx, [rbp+0C0h+var_E4] ; Load Effective Address
sub_14C8D5690+308A 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+308C 48 8D 05 15 38 CC 07                                            lea     rax, aInitchild2star ; Load Effective Address
sub_14C8D5690+3093 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3098 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+309D 89 8B 80 0A 01 00                                               mov     [rbx+10A80h], ecx
sub_14C8D5690+30A3 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+30A6 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+30AC E8 0F 0C 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+30B1 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+30B3 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+30B8 C7 44 24 38 11 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 11h
sub_14C8D5690+30C0 48 8D 05 F9 37 CC 07                                            lea     rax, aSoundcuelocali ; Load Effective Address
sub_14C8D5690+30C7 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+30CC 48 8D 55 E0                                                     lea     rdx, [rbp+0C0h+var_E0] ; Load Effective Address
sub_14C8D5690+30D0 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+30D5 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+30DA 89 8B 84 0A 01 00                                               mov     [rbx+10A84h], ecx
sub_14C8D5690+30E0 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+30E3 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+30E9 E8 D2 0B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+30EE C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 8
sub_14C8D5690+30F6 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+30FB C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3100 48 8D 55 E4                                                     lea     rdx, [rbp+0C0h+var_DC] ; Load Effective Address
sub_14C8D5690+3104 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3106 48 8D 05 CB 37 CC 07                                            lea     rax, aSoundcue  ; Load Effective Address
sub_14C8D5690+310D 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3112 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3117 89 8B 88 0A 01 00                                               mov     [rbx+10A88h], ecx
sub_14C8D5690+311D 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3120 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3126 E8 95 0B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+312B C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+3133 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3138 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+313D 48 8D 55 E8                                                     lea     rdx, [rbp+0C0h+var_D8] ; Load Effective Address
sub_14C8D5690+3141 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3143 48 8D 05 9E 37 CC 07                                            lea     rax, aBoolproperty ; Load Effective Address
sub_14C8D5690+314A 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+314F 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3154 89 8B 8C 0A 01 00                                               mov     [rbx+10A8Ch], ecx
sub_14C8D5690+315A 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+315D 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3163 E8 58 0B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3168 C7 44 24 38 14 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 14h
sub_14C8D5690+3170 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3175 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+317A 48 8D 55 EC                                                     lea     rdx, [rbp+0C0h+var_D4] ; Load Effective Address
sub_14C8D5690+317E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3180 48 8D 05 71 37 CC 07                                            lea     rax, aRawdistributio ; Load Effective Address
sub_14C8D5690+3187 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+318C 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3191 89 8B 4C 04 01 00                                               mov     [rbx+1044Ch], ecx
sub_14C8D5690+3197 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+319A 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+31A0 E8 1B 0B 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+31A5 C7 44 24 38 15 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 15h
sub_14C8D5690+31AD 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+31B2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+31B7 48 8D 55 F0                                                     lea     rdx, [rbp+0C0h+var_D0] ; Load Effective Address
sub_14C8D5690+31BB 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+31BD 48 8D 05 4C 37 CC 07                                            lea     rax, aRawdistributio_0 ; Load Effective Address
sub_14C8D5690+31C4 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+31C9 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+31CE 89 8B 90 0A 01 00                                               mov     [rbx+10A90h], ecx
sub_14C8D5690+31D4 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+31D7 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+31DD E8 DE 0A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+31E2 C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+31EA 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+31EF C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+31F4 48 8D 55 F4                                                     lea     rdx, [rbp+0C0h+var_CC] ; Load Effective Address
sub_14C8D5690+31F8 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+31FA 48 8D 05 27 37 CC 07                                            lea     rax, aInterpcurveflo ; Load Effective Address
sub_14C8D5690+3201 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3206 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+320B 89 8B 94 0A 01 00                                               mov     [rbx+10A94h], ecx
sub_14C8D5690+3211 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3214 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+321A E8 A1 0A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+321F C7 44 24 38 13 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 13h
sub_14C8D5690+3227 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+322C C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3231 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3233 48 8D 05 06 37 CC 07                                            lea     rax, aInterpcurvevec ; Load Effective Address
sub_14C8D5690+323A 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+323F 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3244 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+324A 89 8B 98 0A 01 00                                               mov     [rbx+10A98h], ecx
sub_14C8D5690+3250 48 8D 55 F8                                                     lea     rdx, [rbp+0C0h+var_C8] ; Load Effective Address
sub_14C8D5690+3254 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3257 E8 64 0A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+325C C7 44 24 38 11 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 11h
sub_14C8D5690+3264 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3269 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+326E 48 8D 55 FC                                                     lea     rdx, [rbp+0C0h+var_C4] ; Load Effective Address
sub_14C8D5690+3272 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3274 48 8D 05 DD 36 CC 07                                            lea     rax, aInterpcurvevec_0 ; Load Effective Address
sub_14C8D5690+327B 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3280 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3285 89 8B 9C 0A 01 00                                               mov     [rbx+10A9Ch], ecx
sub_14C8D5690+328B 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+328E 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3294 E8 27 0A 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3299 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+32A1 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+32A6 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+32AB 48 8D 55 00                                                     lea     rdx, [rbp+0C0h+var_C0] ; Load Effective Address
sub_14C8D5690+32AF 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+32B1 48 8D 05 B8 36 CC 07                                            lea     rax, aInt16property ; Load Effective Address
sub_14C8D5690+32B8 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+32BD 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+32C2 89 8B A0 0A 01 00                                               mov     [rbx+10AA0h], ecx
sub_14C8D5690+32C8 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+32CB 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+32D1 E8 EA 09 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+32D6 C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Fh
sub_14C8D5690+32DE 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+32E3 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+32E8 48 8D 55 04                                                     lea     rdx, [rbp+0C0h+var_BC] ; Load Effective Address
sub_14C8D5690+32EC 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+32EE 48 8D 05 8B 36 CC 07                                            lea     rax, aBeaconnetdrive ; Load Effective Address
sub_14C8D5690+32F5 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+32FA 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+32FF 89 8B 98 04 01 00                                               mov     [rbx+10498h], ecx
sub_14C8D5690+3305 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3308 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+330E E8 AD 09 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3313 C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+331B 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3320 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3325 48 8D 55 08                                                     lea     rdx, [rbp+0C0h+var_B8] ; Load Effective Address
sub_14C8D5690+3329 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+332B 48 8D 05 76 D3 F4 03                                            lea     rax, aFlushnetdorman ; Load Effective Address
sub_14C8D5690+3332 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3337 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+333C 89 8B B0 08 01 00                                               mov     [rbx+108B0h], ecx
sub_14C8D5690+3342 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3345 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+334B E8 70 09 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3350 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+3358 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+335D C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3362 48 8D 55 0C                                                     lea     rdx, [rbp+0C0h+var_B4] ; Load Effective Address
sub_14C8D5690+3366 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3368 48 8D 05 21 36 CC 07                                            lea     rax, aDemonetdriver ; Load Effective Address
sub_14C8D5690+336F 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3374 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3379 89 8B B4 08 01 00                                               mov     [rbx+108B4h], ecx
sub_14C8D5690+337F 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3382 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3388 E8 33 09 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+338D C7 44 24 38 0B 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Bh
sub_14C8D5690+3395 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+339A C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+339F 48 8D 55 10                                                     lea     rdx, [rbp+0C0h+var_B0] ; Load Effective Address
sub_14C8D5690+33A3 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+33A5 48 8D 05 F4 35 CC 07                                            lea     rax, aGamesession ; Load Effective Address
sub_14C8D5690+33AC 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+33B1 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+33B6 89 8B B8 08 01 00                                               mov     [rbx+108B8h], ecx
sub_14C8D5690+33BC 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+33BF 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+33C5 E8 F6 08 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+33CA C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+33D2 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+33D7 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+33D9 48 8D 05 D0 35 CC 07                                            lea     rax, aPartysession ; Load Effective Address
sub_14C8D5690+33E0 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+33E5 89 8B BC 08 01 00                                               mov     [rbx+108BCh], ecx
sub_14C8D5690+33EB 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+33F0 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+33F5 48 8D 55 14                                                     lea     rdx, [rbp+0C0h+var_AC] ; Load Effective Address
sub_14C8D5690+33F9 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+33FF 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3402 E8 B9 08 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3407 C7 44 24 38 08 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 8
sub_14C8D5690+340F 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3414 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3419 48 8D 55 18                                                     lea     rdx, [rbp+0C0h+var_A8] ; Load Effective Address
sub_14C8D5690+341D 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+341F 48 8D 05 9A 35 CC 07                                            lea     rax, aGameport  ; Load Effective Address
sub_14C8D5690+3426 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+342B 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3430 89 8B C0 08 01 00                                               mov     [rbx+108C0h], ecx
sub_14C8D5690+3436 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3439 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+343F E8 7C 08 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3444 C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+344C 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3451 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3456 48 8D 55 1C                                                     lea     rdx, [rbp+0C0h+var_A4] ; Load Effective Address
sub_14C8D5690+345A 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+345C 48 8D 05 6D 35 CC 07                                            lea     rax, aDelegateproper ; Load Effective Address
sub_14C8D5690+3463 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3468 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+346D 89 8B C4 08 01 00                                               mov     [rbx+108C4h], ecx
sub_14C8D5690+3473 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3476 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+347C E8 3F 08 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3481 C7 44 24 38 0A 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ah
sub_14C8D5690+3489 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+348E C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3493 48 8D 55 20                                                     lea     rdx, [rbp+0C0h+var_A0] ; Load Effective Address
sub_14C8D5690+3497 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3499 48 8D 05 48 35 CC 07                                            lea     rax, aBeaconport ; Load Effective Address
sub_14C8D5690+34A0 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+34A5 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+34AA 89 8B 5C 04 01 00                                               mov     [rbx+1045Ch], ecx
sub_14C8D5690+34B0 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+34B3 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+34B9 E8 02 08 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+34BE C7 44 24 38 15 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 15h
sub_14C8D5690+34C6 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+34CB C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+34D0 48 8D 55 24                                                     lea     rdx, [rbp+0C0h+var_9C] ; Load Effective Address
sub_14C8D5690+34D4 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+34D6 48 8D 05 1B 35 CC 07                                            lea     rax, aInterpcurvetwo ; Load Effective Address
sub_14C8D5690+34DD 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+34E2 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+34E7 89 8B C8 08 01 00                                               mov     [rbx+108C8h], ecx
sub_14C8D5690+34ED 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+34F0 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+34F6 E8 C5 07 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+34FB C7 44 24 38 0F 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Fh
sub_14C8D5690+3503 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3508 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+350D 48 8D 55 28                                                     lea     rdx, [rbp+0C0h+var_98] ; Load Effective Address
sub_14C8D5690+3511 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3513 48 8D 05 F6 34 CC 07                                            lea     rax, aInterpcurvequa ; Load Effective Address
sub_14C8D5690+351A 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+351F 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3524 89 8B A4 0A 01 00                                               mov     [rbx+10AA4h], ecx
sub_14C8D5690+352A 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+352D 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3533 E8 88 07 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3538 C7 44 24 38 02 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 2
sub_14C8D5690+3540 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3545 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+354A 48 8D 55 2C                                                     lea     rdx, [rbp+0C0h+var_94] ; Load Effective Address
sub_14C8D5690+354E 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3550 48 8D 05 39 B1 BB 04                                            lea     rax, aAi_0      ; Load Effective Address
sub_14C8D5690+3557 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+355C 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3561 89 8B A8 0A 01 00                                               mov     [rbx+10AA8h], ecx
sub_14C8D5690+3567 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+356A 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3570 E8 4B 07 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3575 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3577 48 8D 05 D2 73 8E 06                                            lea     rax, aNavmesh   ; Load Effective Address
sub_14C8D5690+357E 89 8B 48 0B 01 00                                               mov     [rbx+10B48h], ecx
sub_14C8D5690+3584 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3589 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+358E C7 44 24 38 07 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 7
sub_14C8D5690+3596 48 8D 55 30                                                     lea     rdx, [rbp+0C0h+var_90] ; Load Effective Address
sub_14C8D5690+359A C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+359F 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+35A2 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+35A7 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+35AD E8 0E 07 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+35B2 C7 44 24 38 12 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 12h
sub_14C8D5690+35BA 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+35BF C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+35C4 48 8D 55 34                                                     lea     rdx, [rbp+0C0h+var_8C] ; Load Effective Address
sub_14C8D5690+35C8 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+35CA 48 8D 05 4F 34 CC 07                                            lea     rax, aPerformancecap ; Load Effective Address
sub_14C8D5690+35D1 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+35D6 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+35DB 89 8B 4C 0B 01 00                                               mov     [rbx+10B4Ch], ecx
sub_14C8D5690+35E1 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+35E4 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+35EA E8 D1 06 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+35EF C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+35F7 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+35FC C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3601 48 8D 55 38                                                     lea     rdx, [rbp+0C0h+var_88] ; Load Effective Address
sub_14C8D5690+3605 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3607 48 8D 05 2A 34 CC 07                                            lea     rax, aD7b77f04e73094 ; Load Effective Address
sub_14C8D5690+360E 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3613 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3618 89 8B 10 0C 01 00                                               mov     [rbx+10C10h], ecx
sub_14C8D5690+361E 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3621 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3627 E8 94 06 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+362C C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+3634 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3639 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+363E 48 8D 55 3C                                                     lea     rdx, [rbp+0C0h+var_84] ; Load Effective Address
sub_14C8D5690+3642 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3644 48 8D 05 05 34 CC 07                                            lea     rax, a00488f65e528cc ; Load Effective Address
sub_14C8D5690+364B 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3650 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3655 89 8B D4 04 01 00                                               mov     [rbx+104D4h], ecx
sub_14C8D5690+365B 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+365E 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3664 E8 57 06 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3669 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+3671 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3676 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+367B 48 8D 55 40                                                     lea     rdx, [rbp+0C0h+var_80] ; Load Effective Address
sub_14C8D5690+367F 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3681 48 8D 05 E0 33 CC 07                                            lea     rax, aBytepr0perty ; Load Effective Address
sub_14C8D5690+3688 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+368D 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3692 89 8B D8 04 01 00                                               mov     [rbx+104D8h], ecx
sub_14C8D5690+3698 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+369B 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+36A1 E8 1A 06 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+36A6 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+36AE 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+36B3 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+36B8 48 8D 55 44                                                     lea     rdx, [rbp+0C0h+var_7C] ; Load Effective Address
sub_14C8D5690+36BC 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+36BE 48 8D 05 B3 33 CC 07                                            lea     rax, aByteproperty ; Load Effective Address
sub_14C8D5690+36C5 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+36CA 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+36CF 89 8B CC 04 01 00                                               mov     [rbx+104CCh], ecx
sub_14C8D5690+36D5 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+36D8 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+36DE E8 DD 05 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+36E3 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+36EB 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+36F0 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+36F5 48 8D 55 48                                                     lea     rdx, [rbp+0C0h+var_78] ; Load Effective Address
sub_14C8D5690+36F9 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+36FB 48 8D 05 86 33 CC 07                                            lea     rax, aByteproqerty ; Load Effective Address
sub_14C8D5690+3702 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3707 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+370C 89 8B 44 04 01 00                                               mov     [rbx+10444h], ecx
sub_14C8D5690+3712 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3715 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+371B E8 A0 05 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3720 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3722 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3727 C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+372F 48 8D 05 62 33 CC 07                                            lea     rax, aByteqroperty ; Load Effective Address
sub_14C8D5690+3736 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+373B 48 8D 55 4C                                                     lea     rdx, [rbp+0C0h+var_74] ; Load Effective Address
sub_14C8D5690+373F C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3744 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3749 89 8B D0 04 01 00                                               mov     [rbx+104D0h], ecx
sub_14C8D5690+374F 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3752 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3758 E8 63 05 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+375D C7 44 24 38 0C 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Ch
sub_14C8D5690+3765 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+376A C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+376F 48 8D 55 50                                                     lea     rdx, [rbp+0C0h+var_70] ; Load Effective Address
sub_14C8D5690+3773 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3775 48 8D 05 2C 33 CC 07                                            lea     rax, aEditorlayout ; Load Effective Address
sub_14C8D5690+377C 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3781 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3786 89 8B DC 04 01 00                                               mov     [rbx+104DCh], ecx
sub_14C8D5690+378C 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+378F 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3795 E8 26 05 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+379A C7 44 24 38 11 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 11h
sub_14C8D5690+37A2 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+37A7 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+37AC 48 8D 55 54                                                     lea     rdx, [rbp+0C0h+var_6C] ; Load Effective Address
sub_14C8D5690+37B0 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+37B2 48 8D 05 FF 32 CC 07                                            lea     rax, aEditorkeybindi ; Load Effective Address
sub_14C8D5690+37B9 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+37BE 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+37C3 89 8B A0 0D 01 00                                               mov     [rbx+10DA0h], ecx
sub_14C8D5690+37C9 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+37CC 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+37D2 E8 E9 04 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+37D7 C7 44 24 38 0D 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 0Dh
sub_14C8D5690+37DF 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+37E4 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+37E9 48 8D 55 58                                                     lea     rdx, [rbp+0C0h+var_68] ; Load Effective Address
sub_14C8D5690+37ED 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+37EF 48 8D 05 DA 32 CC 07                                            lea     rax, aArrayproperty ; Load Effective Address
sub_14C8D5690+37F6 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+37FB 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+3800 89 8B A4 0D 01 00                                               mov     [rbx+10DA4h], ecx
sub_14C8D5690+3806 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3809 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+380F E8 AC 04 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3814 C7 44 24 38 10 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 10h
sub_14C8D5690+381C 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+3821 C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3826 48 8D 55 5C                                                     lea     rdx, [rbp+0C0h+var_64] ; Load Effective Address
sub_14C8D5690+382A 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+382C 48 8D 05 05 8F 47 04                                            lea     rax, aGameusersettin ; Load Effective Address
sub_14C8D5690+3833 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3838 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+383D 89 8B 64 04 01 00                                               mov     [rbx+10464h], ecx
sub_14C8D5690+3843 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3846 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+384C E8 6F 04 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+3851 C7 44 24 38 17 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 17h
sub_14C8D5690+3859 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+385E C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+3863 48 8D 55 60                                                     lea     rdx, [rbp+0C0h+var_60] ; Load Effective Address
sub_14C8D5690+3867 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+3869 48 8D 05 70 32 CC 07                                            lea     rax, aEncryptedobjec ; Load Effective Address
sub_14C8D5690+3870 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+3875 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+387A 89 8B A8 0D 01 00                                               mov     [rbx+10DA8h], ecx
sub_14C8D5690+3880 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+3883 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+3889 E8 32 04 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+388E C7 44 24 38 09 00 00 00                                         mov     dword ptr [rsp+1C0h+var_190+8], 9
sub_14C8D5690+3896 4C 8D 44 24 30                                                  lea     r8, [rsp+1C0h+var_190] ; Load Effective Address
sub_14C8D5690+389B C6 44 24 3C 00                                                  mov     byte ptr [rsp+1C0h+var_190+0Ch], 0
sub_14C8D5690+38A0 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+38A2 48 8D 05 4F 32 CC 07                                            lea     rax, aEncvector ; Load Effective Address
sub_14C8D5690+38A9 48 89 44 24 30                                                  mov     qword ptr [rsp+1C0h+var_190], rax
sub_14C8D5690+38AE 0F 28 44 24 30                                                  movaps  xmm0, [rsp+1C0h+var_190] ; Move Aligned Four Packed Single-FP
sub_14C8D5690+38B3 66 0F 7F 44 24 30                                               movdqa  [rsp+1C0h+var_190], xmm0 ; Move Aligned Double Quadword
sub_14C8D5690+38B9 89 8B AC 0D 01 00                                               mov     [rbx+10DACh], ecx
sub_14C8D5690+38BF 48 8D 54 24 60                                                  lea     rdx, [rsp+1C0h+var_160] ; Load Effective Address
sub_14C8D5690+38C4 48 8B CB                                                        mov     rcx, rbx
sub_14C8D5690+38C7 E8 F4 03 02 00                                                  call    sub_14C8F9350   ; Call Procedure
sub_14C8D5690+38CC 45 33 F6                                                        xor     r14d, r14d      ; Logical Exclusive OR
sub_14C8D5690+38CF 41 8B FE                                                        mov     edi, r14d
sub_14C8D5690+38D2 8B 08                                                           mov     ecx, [rax]
sub_14C8D5690+38D4 89 8B B0 0D 01 00                                               mov     [rbx+10DB0h], ecx
sub_14C8D5690+38DA 44 89 B3 B4 0D 01 00                                            mov     [rbx+10DB4h], r14d
sub_14C8D5690+38E1
sub_14C8D5690+38E1                                                 loc_14C8D8F71:                          ; CODE XREF: sub_14C8D5690+392B↓j
sub_14C8D5690+38E1 85 FF                                                           test    edi, edi        ; Logical Compare
sub_14C8D5690+38E3 74 05                                                           jz      short loc_14C8D8F7A ; Jump if Zero (ZF=1)
sub_14C8D5690+38E5 45 39 37                                                        cmp     [r15], r14d     ; Compare Two Operands
sub_14C8D5690+38E8 74 35                                                           jz      short loc_14C8D8FAF ; Jump if Zero (ZF=1)
sub_14C8D5690+38EA
sub_14C8D5690+38EA                                                 loc_14C8D8F7A:                          ; CODE XREF: sub_14C8D5690+38E3↑j
sub_14C8D5690+38EA 8B C7                                                           mov     eax, edi
sub_14C8D5690+38EC 4C 8D 44 24 44                                                  lea     r8, [rsp+1C0h+var_17C] ; Load Effective Address
sub_14C8D5690+38F1 48 05 10 41 00 00                                               add     rax, 4110h      ; Add
sub_14C8D5690+38F7 89 7C 24 44                                                     mov     [rsp+1C0h+var_17C], edi
sub_14C8D5690+38FB 48 8D 8B B8 0D 01 00                                            lea     rcx, [rbx+10DB8h] ; Load Effective Address
sub_14C8D5690+3902 48 8D 14 83                                                     lea     rdx, [rbx+rax*4] ; Load Effective Address
sub_14C8D5690+3906 E8 15 B1 FF FF                                                  call    sub_14C8D40B0   ; Call Procedure
sub_14C8D5690+390B 41 8B 0F                                                        mov     ecx, [r15]
sub_14C8D5690+390E 8B 83 B4 0D 01 00                                               mov     eax, [rbx+10DB4h]
sub_14C8D5690+3914 3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8D5690+3916 0F 43 C8                                                        cmovnb  ecx, eax        ; Move if Not Below (CF=0)
sub_14C8D5690+3919 89 8B B4 0D 01 00                                               mov     [rbx+10DB4h], ecx
sub_14C8D5690+391F
sub_14C8D5690+391F                                                 loc_14C8D8FAF:                          ; CODE XREF: sub_14C8D5690+38E8↑j
sub_14C8D5690+391F FF C7                                                           inc     edi             ; Increment by 1
sub_14C8D5690+3921 49 83 C7 04                                                     add     r15, 4          ; Add
sub_14C8D5690+3925 81 FF 5D 02 00 00                                               cmp     edi, 25Dh       ; Compare Two Operands
sub_14C8D5690+392B 72 B4                                                           jb      short loc_14C8D8F71 ; Jump if Below (CF=1)
sub_14C8D5690+392D 33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_14C8D5690+392F F0 44 0F B1 B3 20 00 01 00                                      lock cmpxchg [rbx+10020h], r14d ; Compare and Exchange
sub_14C8D5690+3938 8B 8B C0 2D 01 00                                               mov     ecx, [rbx+12DC0h]
sub_14C8D5690+393E 2B 8B 1C 2E 01 00                                               sub     ecx, [rbx+12E1Ch] ; Integer Subtraction
sub_14C8D5690+3944 3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8D5690+3946 0F 84 BB 00 00 00                                               jz      loc_14C8D9097   ; Jump if Zero (ZF=1)
sub_14C8D5690+394C 4C 8D 0D B5 31 CC 07                                            lea     r9, aDuplicatedhard ; Load Effective Address
sub_14C8D5690+3953 4C 8D 05 AE 3B CB 07                                            lea     r8, aUnrealed   ; Load Effective Address
sub_14C8D5690+395A 48 8D 15 D7 31 CC 07                                            lea     rdx, aDuplicateHardc ; Load Effective Address
sub_14C8D5690+3961 48 8D 4C 24 48                                                  lea     rcx, [rsp+1C0h+var_178] ; Load Effective Address
sub_14C8D5690+3966 E8 75 12 ED FF                                                  call    sub_14C7AA270   ; Call Procedure
sub_14C8D5690+396B 48 8B D0                                                        mov     rdx, rax
sub_14C8D5690+396E 45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8D5690+3971 33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
sub_14C8D5690+3973 E8 58 A7 FA FF                                                  call    sub_14C883760   ; Call Procedure
sub_14C8D5690+3978 48 8B 7C 24 50                                                  mov     rdi, [rsp+1C0h+var_170]
sub_14C8D5690+397D 48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8D5690+3980 74 2D                                                           jz      short loc_14C8D903F ; Jump if Zero (ZF=1)
sub_14C8D5690+3982 41 8B C4                                                        mov     eax, r12d
sub_14C8D5690+3985 F0 0F C1 47 08                                                  lock xadd [rdi+8], eax  ; t<-dest; dest<-src+dest; src<-t
sub_14C8D5690+398A 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8D5690+398D 75 20                                                           jnz     short loc_14C8D903F ; Jump if Not Zero (ZF=0)
sub_14C8D5690+398F 48 8B 07                                                        mov     rax, [rdi]
sub_14C8D5690+3992 48 8B CF                                                        mov     rcx, rdi
sub_14C8D5690+3995 FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_14C8D5690+3997 F0 44 0F C1 67 0C                                               lock xadd [rdi+0Ch], r12d ; t<-dest; dest<-src+dest; src<-t
sub_14C8D5690+399D 41 83 FC 01                                                     cmp     r12d, 1         ; Compare Two Operands
sub_14C8D5690+39A1 75 0C                                                           jnz     short loc_14C8D903F ; Jump if Not Zero (ZF=0)
sub_14C8D5690+39A3 48 8B 07                                                        mov     rax, [rdi]
sub_14C8D5690+39A6 41 8B D4                                                        mov     edx, r12d
sub_14C8D5690+39A9 48 8B CF                                                        mov     rcx, rdi
sub_14C8D5690+39AC FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_14C8D5690+39AF
sub_14C8D5690+39AF                                                 loc_14C8D903F:                          ; CODE XREF: sub_14C8D5690+3980↑j
sub_14C8D5690+39AF                                                                                         ; sub_14C8D5690+398D↑j ...
sub_14C8D5690+39AF 80 3D 82 F5 AF 0A 06                                            cmp     cs:byte_1573D85C8, 6 ; Compare Two Operands
sub_14C8D5690+39B6 72 2F                                                           jb      short loc_14C8D9077 ; Jump if Below (CF=1)
sub_14C8D5690+39B8 48 8D 05 C9 6D C9 07                                            lea     rax, aFplatformmiscR ; Load Effective Address
sub_14C8D5690+39BF 44 89 74 24 28                                                  mov     [rsp+1C0h+var_198], r14d
sub_14C8D5690+39C4 41 B9 06 00 00 00                                               mov     r9d, 6
sub_14C8D5690+39CA 48 89 44 24 20                                                  mov     [rsp+1C0h+var_1A0], rax
sub_14C8D5690+39CF 4C 8D 05 66 F5 AF 0A                                            lea     r8, unk_1573D85CC ; Load Effective Address
sub_14C8D5690+39D6 BA 0E 05 00 00                                                  mov     edx, 50Eh
sub_14C8D5690+39DB 48 8D 0D EE F6 DE 03                                            lea     rcx, aUnknown   ; Load Effective Address
sub_14C8D5690+39E2 E8 B9 00 F5 FF                                                  call    sub_14C829130   ; Call Procedure
sub_14C8D5690+39E7
sub_14C8D5690+39E7                                                 loc_14C8D9077:                          ; CODE XREF: sub_14C8D5690+39B6↑j
sub_14C8D5690+39E7 48 8D 0D 02 63 CC 07                                            lea     rcx, aWinRequestexit ; Load Effective Address
sub_14C8D5690+39EE E8 8D 1F FB FF                                                  call    sub_14C88B010   ; Call Procedure
sub_14C8D5690+39F3 48 8D 0D AE 61 F7 09                                            lea     rcx, unk_15684F238 ; Load Effective Address
sub_14C8D5690+39FA E8 51 2D 1B F4                                                  call    sub_140A8BDE0   ; Call Procedure
sub_14C8D5690+39FF 33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
sub_14C8D5690+3A01 FF 15 81 2E CA 03                                               call    cs:qword_15057BF18 ; Indirect Call Near Procedure
sub_14C8D5690+3A07
sub_14C8D5690+3A07                                                 loc_14C8D9097:                          ; CODE XREF: sub_14C8D5690+3946↑j
sub_14C8D5690+3A07 48 8B C3                                                        mov     rax, rbx
sub_14C8D5690+3A0A 48 8B 8D 98 00 00 00                                            mov     rcx, [rbp+0C0h+var_28]
sub_14C8D5690+3A11 48 33 CC                                                        xor     rcx, rsp        ; StackCookie
sub_14C8D5690+3A14 E8 B7 6D 98 03                                                  call    __security_check_cookie ; Call Procedure
sub_14C8D5690+3A19 4C 8D 9C 24 A0 01 00 00                                         lea     r11, [rsp+1C0h+var_20] ; Load Effective Address
sub_14C8D5690+3A21 49 8B 5B 38                                                     mov     rbx, [r11+38h]
sub_14C8D5690+3A25 49 8B 73 40                                                     mov     rsi, [r11+40h]
sub_14C8D5690+3A29 49 8B 7B 48                                                     mov     rdi, [r11+48h]
sub_14C8D5690+3A2D 49 8B E3                                                        mov     rsp, r11
sub_14C8D5690+3A30 41 5F                                                           pop     r15
sub_14C8D5690+3A32 41 5E                                                           pop     r14
sub_14C8D5690+3A34 41 5D                                                           pop     r13
sub_14C8D5690+3A36 41 5C                                                           pop     r12
sub_14C8D5690+3A38 5D                                                              pop     rbp
sub_14C8D5690+3A39 C3                                                              retn                    ; Return Near from Procedure
sub_14C8D5690+3A39                                                 sub_14C8D5690   endp
sub_14C8D5690+3A39
sub_14C8D5690+3A39                                                 ; ---------------------------------------------------------------------------
.text:000000014C8D90CA CC CC CC CC CC CC                                               align 10h
sub_14C8D90D0
sub_14C8D90D0                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D90D0
sub_14C8D90D0
sub_14C8D90D0                                                      sub_14C8D90D0   proc near               ; CODE XREF: sub_14CCA7F70+55↓p
sub_14C8D90D0      48 8D 05 71 33 CC 07                                            lea     rax, unk_15459C448 ; Load Effective Address
sub_14C8D90D0+7    66 C7 41 08 00 01                                               mov     word ptr [rcx+8], 100h
sub_14C8D90D0+D    48 89 01                                                        mov     [rcx], rax
sub_14C8D90D0+10   48 8B C1                                                        mov     rax, rcx
sub_14C8D90D0+13   C3                                                              retn                    ; Return Near from Procedure
sub_14C8D90D0+13                                                   sub_14C8D90D0   endp
sub_14C8D90D0+13
sub_14C8D90D0+13                                                   ; ---------------------------------------------------------------------------
.text:000000014C8D90E4 CC CC CC CC CC CC CC CC CC CC CC CC                             align 10h
sub_14C8D90F0
sub_14C8D90F0                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D90F0
sub_14C8D90F0
sub_14C8D90F0                                                      sub_14C8D90F0   proc near               ; CODE XREF: sub_14E3D1390+51↓p
sub_14C8D90F0
sub_14C8D90F0                                                      var_248         = qword ptr -248h
sub_14C8D90F0                                                      var_240         = dword ptr -240h
sub_14C8D90F0                                                      var_23C         = dword ptr -23Ch
sub_14C8D90F0                                                      var_238         = word ptr -238h
sub_14C8D90F0                                                      var_236         = byte ptr -236h
sub_14C8D90F0                                                      var_28          = qword ptr -28h
sub_14C8D90F0                                                      var_18          = byte ptr -18h
sub_14C8D90F0                                                      arg_10          = qword ptr  18h
sub_14C8D90F0                                                      arg_18          = qword ptr  20h
sub_14C8D90F0
sub_14C8D90F0      48 89 5C 24 18                                                  mov     [rsp+arg_10], rbx
sub_14C8D90F0+5    48 89 6C 24 20                                                  mov     [rsp+arg_18], rbp
sub_14C8D90F0+A    56                                                              push    rsi
sub_14C8D90F0+B    57                                                              push    rdi
sub_14C8D90F0+C    41 56                                                           push    r14
sub_14C8D90F0+E    48 81 EC 50 02 00 00                                            sub     rsp, 250h       ; Integer Subtraction
sub_14C8D90F0+15   48 8B 05 34 C2 4E 0A                                            mov     rax, cs:off_156DC5340
sub_14C8D90F0+1C   48 33 C4                                                        xor     rax, rsp        ; Logical Exclusive OR
sub_14C8D90F0+1F   48 89 84 24 40 02 00 00                                         mov     [rsp+268h+var_28], rax
sub_14C8D90F0+27   48 8B F1                                                        mov     rsi, rcx
sub_14C8D90F0+2A   45 33 F6                                                        xor     r14d, r14d      ; Logical Exclusive OR
sub_14C8D90F0+2D   48 8B CA                                                        mov     rcx, rdx
sub_14C8D90F0+30   4C 89 74 24 20                                                  mov     [rsp+268h+var_248], r14
sub_14C8D90F0+35   49 8B D8                                                        mov     rbx, r8
sub_14C8D90F0+38   48 8B FA                                                        mov     rdi, rdx
sub_14C8D90F0+3B   FF 15 3F 16 F7 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8D90F0+41   48 63 7F 08                                                     movsxd  rdi, dword ptr [rdi+8] ; Move with Sign-Extend Doubleword
sub_14C8D90F0+45   48 8B E8                                                        mov     rbp, rax
sub_14C8D90F0+48   89 7C 24 28                                                     mov     [rsp+268h+var_240], edi
sub_14C8D90F0+4C   85 FF                                                           test    edi, edi        ; Logical Compare
sub_14C8D90F0+4E   75 07                                                           jnz     short loc_14C8D9147 ; Jump if Not Zero (ZF=0)
sub_14C8D90F0+50   44 89 74 24 2C                                                  mov     [rsp+268h+var_23C], r14d
sub_14C8D90F0+55   EB 2B                                                           jmp     short loc_14C8D9172 ; Jump
sub_14C8D90F0+57                                                   ; ---------------------------------------------------------------------------
sub_14C8D90F0+57
sub_14C8D90F0+57                                                   loc_14C8D9147:                          ; CODE XREF: sub_14C8D90F0+4E↑j
sub_14C8D90F0+57   45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8D90F0+5A   48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+5F   8B D7                                                           mov     edx, edi
sub_14C8D90F0+61   E8 DA EC 1E F4                                                  call    sub_140AC7E30   ; Call Procedure
sub_14C8D90F0+66   48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+6B   FF 15 0F 16 F7 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8D90F0+71   4C 8B C7                                                        mov     r8, rdi
sub_14C8D90F0+74   48 8B D5                                                        mov     rdx, rbp
sub_14C8D90F0+77   4D 03 C0                                                        add     r8, r8          ; Add
sub_14C8D90F0+7A   48 8B C8                                                        mov     rcx, rax
sub_14C8D90F0+7D   E8 CB D6 98 03                                                  call    sub_15026683D   ; Call Procedure
sub_14C8D90F0+82
sub_14C8D90F0+82                                                   loc_14C8D9172:                          ; CODE XREF: sub_14C8D90F0+55↑j
sub_14C8D90F0+82   41 B9 01 00 00 00                                               mov     r9d, 1
sub_14C8D90F0+88   4C 8D 05 F9 94 DF 03                                            lea     r8, asc_1506D2678 ; Load Effective Address
sub_14C8D90F0+8F   48 8D 15 2A 99 DF 03                                            lea     rdx, asc_1506D2AB0 ; Load Effective Address
sub_14C8D90F0+96   48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+9B   E8 00 67 E9 FF                                                  call    sub_14C76F890   ; Call Procedure
sub_14C8D90F0+A0   33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8D90F0+A2   66 44 89 74 24 30                                               mov     [rsp+268h+var_238], r14w
sub_14C8D90F0+A8   41 B8 06 02 00 00                                               mov     r8d, 206h
sub_14C8D90F0+AE   48 8D 4C 24 32                                                  lea     rcx, [rsp+268h+var_236] ; Load Effective Address
sub_14C8D90F0+B3   E8 A1 D6 98 03                                                  call    sub_150266849   ; Call Procedure
sub_14C8D90F0+B8   44 39 74 24 28                                                  cmp     [rsp+268h+var_240], r14d ; Compare Two Operands
sub_14C8D90F0+BD   74 10                                                           jz      short loc_14C8D91BF ; Jump if Zero (ZF=1)
sub_14C8D90F0+BF   48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+C4   FF 15 B6 15 F7 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8D90F0+CA   48 8B C8                                                        mov     rcx, rax
sub_14C8D90F0+CD   EB 07                                                           jmp     short loc_14C8D91C6 ; Jump
sub_14C8D90F0+CF                                                   ; ---------------------------------------------------------------------------
sub_14C8D90F0+CF
sub_14C8D90F0+CF                                                   loc_14C8D91BF:                          ; CODE XREF: sub_14C8D90F0+BD↑j
sub_14C8D90F0+CF   48 8D 0D 92 EF DE 03                                            lea     rcx, word_1506C8158 ; Load Effective Address
sub_14C8D90F0+D6
sub_14C8D90F0+D6                                                   loc_14C8D91C6:                          ; CODE XREF: sub_14C8D90F0+CD↑j
sub_14C8D90F0+D6   4C 8D 44 24 30                                                  lea     r8, [rsp+268h+var_238] ; Load Effective Address
sub_14C8D90F0+DB   4C 2B C1                                                        sub     r8, rcx         ; Integer Subtraction
sub_14C8D90F0+DE   66 90                                                           xchg    ax, ax          ; Exchange Register/Memory with Register
sub_14C8D90F0+E0
sub_14C8D90F0+E0                                                   loc_14C8D91D0:                          ; CODE XREF: sub_14C8D90F0+EF↓j
sub_14C8D90F0+E0   0F B7 01                                                        movzx   eax, word ptr [rcx] ; Move with Zero-Extend
sub_14C8D90F0+E3   66 42 89 04 01                                                  mov     [rcx+r8], ax
sub_14C8D90F0+E8   48 8D 49 02                                                     lea     rcx, [rcx+2]    ; Load Effective Address
sub_14C8D90F0+EC   66 85 C0                                                        test    ax, ax          ; Logical Compare
sub_14C8D90F0+EF   75 EF                                                           jnz     short loc_14C8D91D0 ; Jump if Not Zero (ZF=0)
sub_14C8D90F0+F1   4C 8D 44 24 30                                                  lea     r8, [rsp+268h+var_238] ; Load Effective Address
sub_14C8D90F0+F6   BA 01 00 00 00                                                  mov     edx, 1
sub_14C8D90F0+FB   33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
sub_14C8D90F0+FD   FF 15 2D 1D CA 03                                               call    cs:qword_15057AF20 ; Indirect Call Near Procedure
sub_14C8D90F0+103  48 89 06                                                        mov     [rsi], rax
sub_14C8D90F0+106  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8D90F0+109  74 46                                                           jz      short loc_14C8D9241 ; Jump if Zero (ZF=1)
sub_14C8D90F0+10B  FF 15 07 1D CA 03                                               call    cs:qword_15057AF08 ; Indirect Call Near Procedure
sub_14C8D90F0+111  3D B7 00 00 00                                                  cmp     eax, 0B7h       ; Compare Two Operands
sub_14C8D90F0+116  75 39                                                           jnz     short loc_14C8D9241 ; Jump if Not Zero (ZF=0)
sub_14C8D90F0+118  48 85 DB                                                        test    rbx, rbx        ; Logical Compare
sub_14C8D90F0+11B  74 28                                                           jz      short loc_14C8D9235 ; Jump if Zero (ZF=1)
sub_14C8D90F0+11D  48 8B 0E                                                        mov     rcx, [rsi]
sub_14C8D90F0+120  0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
sub_14C8D90F0+123  F2 48 0F 2A C3                                                  cvtsi2sd xmm0, rbx      ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
sub_14C8D90F0+128  F2 0F 59 05 10 52 E5 03                                         mulsd   xmm0, cs:qword_15072E430 ; Multiply Scalar Double-Precision Floating-Point Values
sub_14C8D90F0+130  66 0F 5A C8                                                     cvtpd2ps xmm1, xmm0     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
sub_14C8D90F0+134  F3 0F 2C D1                                                     cvttss2si edx, xmm1     ; Scalar Single-FP to signed INT32 conversion (truncate)
sub_14C8D90F0+138  FF 15 AA 22 CA 03                                               call    cs:qword_15057B4D8 ; Indirect Call Near Procedure
sub_14C8D90F0+13E  A9 7F FF FF FF                                                  test    eax, 0FFFFFF7Fh ; Logical Compare
sub_14C8D90F0+143  74 0C                                                           jz      short loc_14C8D9241 ; Jump if Zero (ZF=1)
sub_14C8D90F0+145
sub_14C8D90F0+145                                                  loc_14C8D9235:                          ; CODE XREF: sub_14C8D90F0+11B↑j
sub_14C8D90F0+145  48 8B 0E                                                        mov     rcx, [rsi]
sub_14C8D90F0+148  FF 15 4A 1D CA 03                                               call    cs:qword_15057AF88 ; Indirect Call Near Procedure
sub_14C8D90F0+14E  4C 89 36                                                        mov     [rsi], r14
sub_14C8D90F0+151
sub_14C8D90F0+151                                                  loc_14C8D9241:                          ; CODE XREF: sub_14C8D90F0+109↑j
sub_14C8D90F0+151                                                                                          ; sub_14C8D90F0+116↑j ...
sub_14C8D90F0+151  48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+156  FF 15 24 15 F7 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8D90F0+15C  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8D90F0+15E  48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+163  E8 88 94 1A F4                                                  call    sub_140A826E0   ; Call Procedure
sub_14C8D90F0+168  48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+16D  FF 15 0D 15 F7 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8D90F0+173  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8D90F0+176  74 13                                                           jz      short loc_14C8D927B ; Jump if Zero (ZF=1)
sub_14C8D90F0+178  48 8D 4C 24 20                                                  lea     rcx, [rsp+268h+var_248] ; Load Effective Address
sub_14C8D90F0+17D  FF 15 FD 14 F7 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8D90F0+183  48 8B C8                                                        mov     rcx, rax
sub_14C8D90F0+186  E8 55 1D ED FF                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_14C8D90F0+18B
sub_14C8D90F0+18B                                                  loc_14C8D927B:                          ; CODE XREF: sub_14C8D90F0+176↑j
sub_14C8D90F0+18B  48 8B C6                                                        mov     rax, rsi
sub_14C8D90F0+18E  48 8B 8C 24 40 02 00 00                                         mov     rcx, [rsp+268h+var_28]
sub_14C8D90F0+196  48 33 CC                                                        xor     rcx, rsp        ; StackCookie
sub_14C8D90F0+199  E8 D2 6B 98 03                                                  call    __security_check_cookie ; Call Procedure
sub_14C8D90F0+19E  4C 8D 9C 24 50 02 00 00                                         lea     r11, [rsp+268h+var_18] ; Load Effective Address
sub_14C8D90F0+1A6  49 8B 5B 30                                                     mov     rbx, [r11+30h]
sub_14C8D90F0+1AA  49 8B 6B 38                                                     mov     rbp, [r11+38h]
sub_14C8D90F0+1AE  49 8B E3                                                        mov     rsp, r11
sub_14C8D90F0+1B1  41 5E                                                           pop     r14
sub_14C8D90F0+1B3  5F                                                              pop     rdi
sub_14C8D90F0+1B4  5E                                                              pop     rsi
sub_14C8D90F0+1B5  C3                                                              retn                    ; Return Near from Procedure
sub_14C8D90F0+1B5                                                  sub_14C8D90F0   endp
sub_14C8D90F0+1B5
sub_14C8D90F0+1B5                                                  ; ---------------------------------------------------------------------------
.text:000000014C8D92A6 CC CC CC CC CC CC CC CC CC CC                                   align 10h
sub_14C8D92B0
sub_14C8D92B0                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D92B0
sub_14C8D92B0
sub_14C8D92B0                                                      sub_14C8D92B0   proc near               ; CODE XREF: sub_1504E93E0+71↓p
sub_14C8D92B0      40 53                                                           push    rbx
sub_14C8D92B0+2    48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
sub_14C8D92B0+6    48 8B D9                                                        mov     rbx, rcx
sub_14C8D92B0+9    48 8B 09                                                        mov     rcx, [rcx]
sub_14C8D92B0+C    48 85 C9                                                        test    rcx, rcx        ; Logical Compare
sub_14C8D92B0+F    74 5D                                                           jz      short loc_14C8D931E ; Jump if Zero (ZF=1)
sub_14C8D92B0+11   48 8B 53 10                                                     mov     rdx, [rbx+10h]
sub_14C8D92B0+15   48 B8 67 66 66 66 66 66 66 66                                   mov     rax, 6666666666666667h
sub_14C8D92B0+1F   48 2B D1                                                        sub     rdx, rcx        ; Integer Subtraction
sub_14C8D92B0+22   48 F7 EA                                                        imul    rdx             ; Signed Multiply
sub_14C8D92B0+25   48 C1 FA 04                                                     sar     rdx, 4          ; Shift Arithmetic Right
sub_14C8D92B0+29   48 8B C2                                                        mov     rax, rdx
sub_14C8D92B0+2C   48 C1 E8 3F                                                     shr     rax, 3Fh        ; Shift Logical Right
sub_14C8D92B0+30   48 03 D0                                                        add     rdx, rax        ; Add
sub_14C8D92B0+33   48 8D 14 92                                                     lea     rdx, [rdx+rdx*4] ; Load Effective Address
sub_14C8D92B0+37   48 C1 E2 03                                                     shl     rdx, 3          ; Shift Logical Left
sub_14C8D92B0+3B   48 81 FA 00 10 00 00                                            cmp     rdx, 1000h      ; Compare Two Operands
sub_14C8D92B0+42   72 18                                                           jb      short loc_14C8D930C ; Jump if Below (CF=1)
sub_14C8D92B0+44   4C 8B 41 F8                                                     mov     r8, [rcx-8]
sub_14C8D92B0+48   48 83 C2 27                                                     add     rdx, 27h ; '''  ; Add
sub_14C8D92B0+4C   49 2B C8                                                        sub     rcx, r8         ; Integer Subtraction
sub_14C8D92B0+4F   48 8D 41 F8                                                     lea     rax, [rcx-8]    ; Load Effective Address
sub_14C8D92B0+53   48 83 F8 1F                                                     cmp     rax, 1Fh        ; Compare Two Operands
sub_14C8D92B0+57   77 1B                                                           ja      short loc_14C8D9324 ; Jump if Above (CF=0 & ZF=0)
sub_14C8D92B0+59   49 8B C8                                                        mov     rcx, r8         ; _QWORD
sub_14C8D92B0+5C
sub_14C8D92B0+5C                                                   loc_14C8D930C:                          ; CODE XREF: sub_14C8D92B0+42↑j
sub_14C8D92B0+5C   E8 2F 6E 81 F4                                                  call    sub_1410F0140   ; Call Procedure
sub_14C8D92B0+61   33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_14C8D92B0+63   48 89 03                                                        mov     [rbx], rax
sub_14C8D92B0+66   48 89 43 08                                                     mov     [rbx+8], rax
sub_14C8D92B0+6A   48 89 43 10                                                     mov     [rbx+10h], rax
sub_14C8D92B0+6E
sub_14C8D92B0+6E                                                   loc_14C8D931E:                          ; CODE XREF: sub_14C8D92B0+F↑j
sub_14C8D92B0+6E   48 83 C4 20                                                     add     rsp, 20h        ; Add
sub_14C8D92B0+72   5B                                                              pop     rbx
sub_14C8D92B0+73   C3                                                              retn                    ; Return Near from Procedure
sub_14C8D92B0+74                                                   ; ---------------------------------------------------------------------------
sub_14C8D92B0+74
sub_14C8D92B0+74                                                   loc_14C8D9324:                          ; CODE XREF: sub_14C8D92B0+57↑j
sub_14C8D92B0+74   FF 15 BE 36 CA 03                                               call    cs:qword_15057C9E8 ; Indirect Call Near Procedure
sub_14C8D92B0+74                                                   sub_14C8D92B0   endp
sub_14C8D92B0+74
sub_14C8D92B0+74                                                   ; ---------------------------------------------------------------------------
.text:000000014C8D932A CC CC CC CC CC CC                                               align 10h
sub_14C8D9330
sub_14C8D9330                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D9330
sub_14C8D9330
sub_14C8D9330                                                      sub_14C8D9330   proc near               ; CODE XREF: sub_1504E93E0+65↓p
sub_14C8D9330      40 53                                                           push    rbx
sub_14C8D9330+2    48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
sub_14C8D9330+6    48 8B D9                                                        mov     rbx, rcx
sub_14C8D9330+9    48 8B 09                                                        mov     rcx, [rcx]
sub_14C8D9330+C    48 85 C9                                                        test    rcx, rcx        ; Logical Compare
sub_14C8D9330+F    74 59                                                           jz      short loc_14C8D939A ; Jump if Zero (ZF=1)
sub_14C8D9330+11   48 8B 53 10                                                     mov     rdx, [rbx+10h]
sub_14C8D9330+15   48 B8 C5 4E EC C4 4E EC C4 4E                                   mov     rax, 4EC4EC4EC4EC4EC5h
sub_14C8D9330+1F   48 2B D1                                                        sub     rdx, rcx        ; Integer Subtraction
sub_14C8D9330+22   48 F7 EA                                                        imul    rdx             ; Signed Multiply
sub_14C8D9330+25   48 C1 FA 05                                                     sar     rdx, 5          ; Shift Arithmetic Right
sub_14C8D9330+29   48 8B C2                                                        mov     rax, rdx
sub_14C8D9330+2C   48 C1 E8 3F                                                     shr     rax, 3Fh        ; Shift Logical Right
sub_14C8D9330+30   48 03 D0                                                        add     rdx, rax        ; Add
sub_14C8D9330+33   48 6B D2 68                                                     imul    rdx, 68h ; 'h'  ; Signed Multiply
sub_14C8D9330+37   48 81 FA 00 10 00 00                                            cmp     rdx, 1000h      ; Compare Two Operands
sub_14C8D9330+3E   72 18                                                           jb      short loc_14C8D9388 ; Jump if Below (CF=1)
sub_14C8D9330+40   4C 8B 41 F8                                                     mov     r8, [rcx-8]
sub_14C8D9330+44   48 83 C2 27                                                     add     rdx, 27h ; '''  ; Add
sub_14C8D9330+48   49 2B C8                                                        sub     rcx, r8         ; Integer Subtraction
sub_14C8D9330+4B   48 8D 41 F8                                                     lea     rax, [rcx-8]    ; Load Effective Address
sub_14C8D9330+4F   48 83 F8 1F                                                     cmp     rax, 1Fh        ; Compare Two Operands
sub_14C8D9330+53   77 1B                                                           ja      short loc_14C8D93A0 ; Jump if Above (CF=0 & ZF=0)
sub_14C8D9330+55   49 8B C8                                                        mov     rcx, r8         ; _QWORD
sub_14C8D9330+58
sub_14C8D9330+58                                                   loc_14C8D9388:                          ; CODE XREF: sub_14C8D9330+3E↑j
sub_14C8D9330+58   E8 B3 6D 81 F4                                                  call    sub_1410F0140   ; Call Procedure
sub_14C8D9330+5D   33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_14C8D9330+5F   48 89 03                                                        mov     [rbx], rax
sub_14C8D9330+62   48 89 43 08                                                     mov     [rbx+8], rax
sub_14C8D9330+66   48 89 43 10                                                     mov     [rbx+10h], rax
sub_14C8D9330+6A
sub_14C8D9330+6A                                                   loc_14C8D939A:                          ; CODE XREF: sub_14C8D9330+F↑j
sub_14C8D9330+6A   48 83 C4 20                                                     add     rsp, 20h        ; Add
sub_14C8D9330+6E   5B                                                              pop     rbx
sub_14C8D9330+6F   C3                                                              retn                    ; Return Near from Procedure
sub_14C8D9330+70                                                   ; ---------------------------------------------------------------------------
sub_14C8D9330+70
sub_14C8D9330+70                                                   loc_14C8D93A0:                          ; CODE XREF: sub_14C8D9330+53↑j
sub_14C8D9330+70   FF 15 42 36 CA 03                                               call    cs:qword_15057C9E8 ; Indirect Call Near Procedure
sub_14C8D9330+70                                                   sub_14C8D9330   endp
sub_14C8D9330+70
sub_14C8D9330+70                                                   ; ---------------------------------------------------------------------------
.text:000000014C8D93A6 CC CC CC CC CC CC CC CC CC CC                                   align 10h
sub_14C8D93B0
sub_14C8D93B0                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D93B0
sub_14C8D93B0
sub_14C8D93B0                                                      sub_14C8D93B0   proc near               ; CODE XREF: sub_14E3D1390+389↓p
sub_14C8D93B0      40 53                                                           push    rbx
sub_14C8D93B0+2    48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
sub_14C8D93B0+6    48 8B D9                                                        mov     rbx, rcx
sub_14C8D93B0+9    48 8B 09                                                        mov     rcx, [rcx]
sub_14C8D93B0+C    48 85 C9                                                        test    rcx, rcx        ; Logical Compare
sub_14C8D93B0+F    74 16                                                           jz      short loc_14C8D93D7 ; Jump if Zero (ZF=1)
sub_14C8D93B0+11   FF 15 51 1B CA 03                                               call    cs:qword_15057AF18 ; Indirect Call Near Procedure
sub_14C8D93B0+17   48 8B 0B                                                        mov     rcx, [rbx]
sub_14C8D93B0+1A   FF 15 B8 1B CA 03                                               call    cs:qword_15057AF88 ; Indirect Call Near Procedure
sub_14C8D93B0+20   48 C7 03 00 00 00 00                                            mov     qword ptr [rbx], 0
sub_14C8D93B0+27
sub_14C8D93B0+27                                                   loc_14C8D93D7:                          ; CODE XREF: sub_14C8D93B0+F↑j
sub_14C8D93B0+27   48 83 C4 20                                                     add     rsp, 20h        ; Add
sub_14C8D93B0+2B   5B                                                              pop     rbx
sub_14C8D93B0+2C   C3                                                              retn                    ; Return Near from Procedure
sub_14C8D93B0+2C                                                   sub_14C8D93B0   endp
sub_14C8D93B0+2C
sub_14C8D93B0+2C                                                   ; ---------------------------------------------------------------------------
.text:000000014C8D93DD CC CC CC                                                        align 20h
sub_14C8D93E0
sub_14C8D93E0                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8D93E0
sub_14C8D93E0
sub_14C8D93E0                                                      sub_14C8D93E0   proc near               ; CODE XREF: sub_14C8E4860+2DC↓p
sub_14C8D93E0                                                                                              ; sub_14C8E4860+BF4↓p
sub_14C8D93E0
sub_14C8D93E0                                                      arg_0           = qword ptr  8
sub_14C8D93E0
sub_14C8D93E0      48 89 5C 24 08                                                  mov     [rsp+arg_0], rbx
sub_14C8D93E0+5    57                                                              push    rdi
sub_14C8D93E0+6    48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
sub_14C8D93E0+A    8B 02                                                           mov     eax, [rdx]
sub_14C8D93E0+C    48 8B DA                                                        mov     rbx, rdx
sub_14C8D93E0+F    89 01                                                           mov     [rcx], eax
sub_14C8D93E0+11   48 8B F9                                                        mov     rdi, rcx
sub_14C8D93E0+14   48 83 C1 08                                                     add     rcx, 8          ; Add
sub_14C8D93E0+18   48 83 C2 08                                                     add     rdx, 8          ; Add
sub_14C8D93E0+1C   E8 4F 6D 20 F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8D93E0+21   48 8D 53 18                                                     lea     rdx, [rbx+18h]  ; Load Effective Address
sub_14C8D93E0+25   48 8D 4F 18                                                     lea     rcx, [rdi+18h]  ; Load Effective Address
sub_14C8D93E0+29   E8 42 6D 20 F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8D93E0+2E   48 8D 53 28                                                     lea     rdx, [rbx+28h]  ; Load Effective Address
sub_14C8D93E0+32   48 8D 4F 28                                                     lea     rcx, [rdi+28h]  ; Load Effective Address
sub_14C8D93E0+36   E8 35 6D 20 F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8D93E0+3B   48 8D 53 38                                                     lea     rdx, [rbx+38h]  ; Load Effective Address
sub_14C8D93E0+3F   48 8D 4F 38                                                     lea     rcx, [rdi+38h]  ; Load Effective Address
sub_14C8D93E0+43   E8 28 6D 20 F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8D93E0+48   48 8D 53 48                                                     lea     rdx, [rbx+48h]  ; Load Effective Address
sub_14C8D93E0+4C   48 8D 4F 48                                                     lea     rcx, [rdi+48h]  ; Load Effective Address
sub_14C8D93E0+50   E8 1B 6D 20 F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8D93E0+55   48 8B 5C 24 30                                                  mov     rbx, [rsp+28h+arg_0]
sub_14C8D93E0+5A   48 8B C7                                                        mov     rax, rdi
sub_14C8D93E0+5D   48 83 C4 20                                                     add     rsp, 20h        ; Add
sub_14C8D93E0+61   5F                                                              pop     rdi
sub_14C8D93E0+62   C3                                                              retn                    ; Return Near from Procedure
sub_14C8D93E0+62                                                   sub_14C8D93E0   endp
sub_14C8D93E0+62
sub_14C8D93E0+62                                                   ; ---------------------------------------------------------------------------
.text:000000014C8D9443 CC CC CC CC CC CC CC CC CC CC CC CC CC                          align 10h

 


```
