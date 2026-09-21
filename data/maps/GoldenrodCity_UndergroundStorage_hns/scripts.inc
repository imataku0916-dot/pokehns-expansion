GoldenrodCity_UndergroundStorage_hns_MapScripts::
	.byte 0

GoldenrodCity_UndergroundStorage_EventScript_Director::
    lock
    faceplayer
    checkitem ITEM_CARD_KEY
    goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_UndergroundStorage_EventScript_Director2
    msgbox RadioTowerBasement_Text_DirectorIntro, MSGBOX_DEFAULT
    closemessage
    giveitem ITEM_CARD_KEY
    msgbox RadioTowerBasement_Text_DirectorCardKey, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Director2::
    msgbox RadioTowerBasement_Text_DirectorAfter, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Grunt19::
    trainerbattle_single TRAINER_GRUNT_19_HNS, RadioTowerBasement_Text_GruntM24Seen, RadioTowerBasement_Text_GruntM24Beaten
	msgbox RadioTowerBasement_Text_GruntM24After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Grunt12::
    trainerbattle_single TRAINER_GRUNT_12_HNS, RadioTowerBasement_Text_GruntM14Seen, RadioTowerBasement_Text_GruntM14Beaten
	msgbox RadioTowerBasement_Text_GruntM14After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Eto::
    trainerbattle_single TRAINER_ETO_3_HNS, RadioTowerBasement_Text_GruntM15Seen, RadioTowerBasement_Text_GruntM15Beaten
	msgbox RadioTowerBasement_Text_GruntM15After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_TM_CALM_MIND::
    finditem ITEM_TM_CALM_MIND
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_MaxEther::
    finditem ITEM_MAX_ETHER
    end

RadioTowerBasement_Text_GruntM24Seen:
    .string "{JPN}どうやってここまできたんだ？\p"
    .string "しかたないな。おまえをしまつしてや\n"
    .string "る。$"

RadioTowerBasement_Text_GruntM24Beaten:
    .string "{JPN}やられてしまった……$"

RadioTowerBasement_Text_GruntM24After:
    .string "{JPN}ロケットだんはサカキのきかんをまち\n"
    .string "つづけながらかつどうをつづける。\p"
    .string "どんなしゅだんをつかってもやる。$"

RadioTowerBasement_Text_GruntM14Seen:
    .string "{JPN}これいじょうさきへはいかせないぞ！\p"
    .string "てきにはようしゃしない。ガキだって\n"
    .string "れいがいじゃない！$"

RadioTowerBasement_Text_GruntM14Beaten:
    .string "{JPN}ちっ！$"

RadioTowerBasement_Text_GruntM14After:
    .string "{JPN}まけてしまった……\p"
    .string "サカキどうかゆるしてください！$"

RadioTowerBasement_Text_GruntM15Seen:
    .string "{JPN}ヒュッヒュッヒュッ！あれだれだ！\p"
    .string "じゅんびはいい？いまならおれすごく\n"
    .string "つよくなってるんだ！$"

RadioTowerBasement_Text_GruntM15Beaten:
    .string "{JPN}ヒュッヒュッヒュッ！きみすごいね！\p"
    .string "このロケットだんってのはたんなるし\n"
    .string "ごとだけどたにんをきずつけているの\l"
    .string "はわかるよ。\p"
    .string "もういいおれはここをさる。\p"
    .string "ほんとうにありがとう。ごめんねサカ\n"
    .string "キ！$"

RadioTowerBasement_Text_GruntM15After:
    .string "{JPN}ヒュックヒュックヒュック！さいこう\n"
    .string "だった！きみのことはわすれないよ！$"

RadioTowerBasement_Text_DirectorIntro:
    .string "DIRECTOR: Who? What? You came to\n"
    .string "rescue me?\p"
    .string "Thank you!\p"
    .string "The RADIO TOWER!\p"
    .string "What's happening there?\p"
    .string "Taken over by TEAM ROCKET?\p"
    .string "Here. Take this CARD KEY.$"

RadioTowerBasement_Text_DirectorCardKey:
    .string "DIRECTOR: Use that to open the\n"
    .string "shutters on 3F.$"

RadioTowerBasement_Text_DirectorAfter:
    .string "I'm begging you to help.\p"
    .string "There's no telling what they'll do if\n"
    .string "they control the transmitter.\p"
    .string "They may even be able to control\n"
    .string "POKéMON using a special signal!\p"
    .string "You're the only one I can call on.\p"
    .string "Please save the RADIO TOWER…\p"
    .string "And all the POKéMON nationwide!$"
