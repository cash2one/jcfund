<?php
function litimgurls($imgid=0)
{
    global $lit_imglist,$dsql;
    //获取附加表
    $row = $dsql->GetOne("SELECT c.addtable FROM #@__archives AS a LEFT JOIN #@__channeltype AS c 
                                                            ON a.channel=c.id where a.id='$imgid'");
    $addtable = trim($row['addtable']);
    
    //获取图片附加表imgurls字段内容进行处理
    $row = $dsql->GetOne("Select imgurls From `$addtable` where aid='$imgid'");
    
    //调用inc_channel_unit.php中ChannelUnit类
    $ChannelUnit = new ChannelUnit(2,$imgid);
    
    //调用ChannelUnit类中GetlitImgLinks方法处理缩略图
    $lit_imglist = $ChannelUnit->GetlitImgLinks($row['imgurls']);
    
    //返回结果
    return $lit_imglist;
}

// Diy自定在栏目页调用顶级栏目
function GetTopTypename($id)
{
    global $dsql;
    $row = $dsql->GetOne("SELECT typename,topid FROM dede_arctype WHERE id= $id");
    if ($row['topid'] == '0')
    {
        return $row['typename'];
    }
    else
    {
        $row1 = $dsql->GetOne("SELECT typename FROM dede_arctype WHERE id= $row[topid]");
        return $row1['typename'];
    }
}
function GetTopTypenameen($id)
{
    global $dsql;
    $row = $dsql->GetOne("SELECT typenameen,topid FROM dede_arctype WHERE id= $id");
    if ($row['topid'] == '0')
    {
        return $row['typenameen'];
    }
    else
    {
        $row1 = $dsql->GetOne("SELECT typenameen FROM dede_arctype WHERE id= $row[topid]");
        return $row1['typenameen'];
    }
}