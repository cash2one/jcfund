<?php
$z[0]=Array("field","",256,275);
$z[0][4]['name']="title";
$z[1]=Array("global","",276,302);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",343,365);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",405,456);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",474,506);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",575,607);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",672,704);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("global","",793,825);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("global","",897,929);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("global","",1010,1042);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",1123,1155);
$z[10][4]['name']="cfg_templets_skin";
$z[11]=Array("include","",2042,2077);
$z[11][4]['filename']="head.htm";
$z[12]=Array("global","",2124,2156);
$z[12][4]['name']="cfg_templets_skin";
$z[13]=Array("field","",2284,2345);
$z[13][4]['name']="typeid";
$z[13][4]['function']="GetTopTypenameen(@me)";
$z[14]=Array("field","",2375,2434);
$z[14][4]['name']="typeid";
$z[14][4]['function']="GetTopTypename(@me)";
$z[15]=Array("field","",2506,2535);
$z[15][4]['name']="position";
$z[16]=Array("include","",2566,2601);
$z[16][4]['filename']="left.htm";
$z[17]=Array("field","",2733,2792);
$z[17][4]['name']="typeid";
$z[17][4]['function']="GetTopTypename(@me)";
$z[18]=Array("channel","\r\n    <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n",2807,2985);
$z[18][4]['type']="son";
$z[18][4]['currentstyle']="<li class='lis'><a href='~typelink~'>~typename~</a></li>";
$z[19]=Array("field","",3144,3163);
$z[19][4]['name']="title";
$z[20]=Array("tag"," [field:tag /] ",3218,3276);
$z[20][4]['sort']="new";
$z[20][4]['getall']="0";
$z[21]=Array("field","",3301,3321);
$z[21][4]['name']="writer";
$z[22]=Array("field","",3346,3373);
$z[22][4]['name']="phpurl";
$z[23]=Array("field","",3397,3420);
$z[23][4]['name']="id";
$z[24]=Array("field","",3425,3449);
$z[24][4]['name']="mid";
$z[25]=Array("field","",3517,3537);
$z[25][4]['name']="source";
$z[26]=Array("field","",3604,3652);
$z[26][4]['name']="pubdate";
$z[26][4]['function']="MyDate('d',@me)";
$z[27]=Array("field","",3684,3732);
$z[27][4]['name']="pubdate";
$z[27][4]['function']="MyDate('M',@me)";
$z[28]=Array("field","",3738,3786);
$z[28][4]['name']="pubdate";
$z[28][4]['function']="MyDate('Y',@me)";
$z[29]=Array("field","",3860,3878);
$z[29][4]['name']="body";
$z[30]=Array("prenext","",3932,3958);
$z[30][4]['get']="next";
$z[31]=Array("likearticle","				\r\n				<li [field:global name=autoindex runphp=\"yes\"](@me==1)?@me=\"class='lis'\":@me=\"\";[/field:global]><a href=\"[field:arcurl/]\" title=\"[field:title /]\">[field:title /]</a>\r\n				<div class=\"img\"><a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" border=\"0\" onerror=\"this.src='/include/noPic.jpg'\"/></a></div>\r\n				<div class=\"coms\">[field:description function='cn_substr(@me,58)'/]...</div>\r\n				\r\n				</li>\r\n             ",4120,4603);
$z[31][4]['row']="6";
$z[31][4]['typeid']="4";
$z[32]=Array("channel","\r\n     | <a href=\"[field:typeurl/]\">[field:typename/]</a>\r\n  ",5114,5223);
$z[32][4]['type']="top";
$z[32][4]['row']="6";
$z[33]=Array("include","",5259,5296);
$z[33][4]['filename']="footer.htm";

?>