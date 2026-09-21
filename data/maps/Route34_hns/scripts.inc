Route34_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route34_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route34_OnTransition: 
	specialvar VAR_RESULT, GetDaycareState
	call_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route34_MapScript_EggReady
	callnative SetTimeBasedEncounters
	end	

Route34_MapScript_EggReady::
	setobjectxyperm LOCALID_ROUTE34_DAYCAREMAN, 30, 34
	return

Route34_EventScript_YoungsterSamuel::
	trainerbattle_single TRAINER_SAMUEL_HNS, Route34_Text_YoungsterSamuel_Seen, Route34_Text_YoungsterSamuel_Beaten
	msgbox Route34_Text_YoungsterSamuel_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_YoungsterIan::
	trainerbattle_single TRAINER_IAN_HNS, Route34_Text_YoungsterIan_Seen, Route34_Text_YoungsterIan_Beaten
	msgbox Route34_Text_YoungsterIan_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_CamperTodd::
	trainerbattle_single TRAINER_TODD_HNS, Route34_Text_CamperTodd_Seen, Route34_Text_CamperTodd_Beaten, Route34_EventScript_RegisterTodd
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route34_EventScript_RematchTodd
	msgbox Route34_Text_CamperTodd_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_RegisterTodd::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route34_Text_ToddRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TODD_HNS
	release
	end

Route34_EventScript_RematchTodd::
	trainerbattle_rematch TRAINER_TODD_HNS, Route34_Text_ToddRematchIntro, Route34_Text_ToddRematchDefeat
	msgbox Route34_Text_ToddPostRematch, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_PicnickerGina::
	trainerbattle_single TRAINER_GINA_HNS, Route34_Text_PicnickerGina_Seen, Route34_Text_PicnickerGina_Beaten, Route34_EventScript_RegisterGina
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route34_EventScript_RematchGina
	msgbox Route34_Text_PicnickerGina_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_RegisterGina::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route34_Text_GinaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GINA_HNS
	release
	end

Route34_EventScript_RematchGina::
	trainerbattle_rematch TRAINER_GINA_HNS, Route34_Text_PicnickerGina_Seen, Route34_Text_PicnickerGina_Beaten
	msgbox Route34_Text_PicnickerGina_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_OfficerKeith::
	trainerbattle_single TRAINER_KEITH_HNS, Route34_Text_OfficerKeith_Seen, Route34_Text_OfficerKeith_Win
	msgbox Route34_Text_OfficerKeith_After, MSGBOX_AUTOCLOSE
	end


Route34_EventScript_PokefanMBrandon::
	trainerbattle_single TRAINER_BRANDON_HNS, Route34_Text_PokefanBrandon_Seen, Route34_Text_PokefanBrandon_Beaten
	msgbox Route34_Text_PokefanBrandon_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Irene::
	trainerbattle_single TRAINER_IRENE_HNS, Route34_Text_CooltrainerIrene_Seen, Route34_Text_CooltrainerIrene_Beaten
	msgbox Route34_Text_CooltrainerIrene_After2, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Jenn::
	trainerbattle_single TRAINER_JENN_HNS, Route34_Text_CooltrainerJenn_Seen, Route34_Text_CooltrainerJenn_Beaten
	msgbox Route34_Text_CooltrainerJenn_After2, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Kate::
	trainerbattle_single TRAINER_KATE_HNS, Route34_Text_CooltrainerKate_Seen, Route34_Text_CooltrainerKate_Beaten
	msgbox Route34_Text_CooltrainerKate_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Sign1::
	lock
	msgbox Route34_Text_Sign_Route34, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Sign2::
	lock
	msgbox Route34_Text_Sign_DayCare, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Sign3::
	lock
	msgbox Route34_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Item_SoftSand::
	finditem ITEM_SOFT_SAND
	end

Route34_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end
	
Route34_EventScript_Item_Embargo::
    finditem ITEM_TM_EMBARGO
    end


Route34_Text_YoungsterSamuel_Seen:
	.string "{JPN}ねえ！マンキーをさがしてるんだ！$"

Route34_Text_YoungsterSamuel_Beaten:
	.string "{JPN}とおりすがりのみしらぬにんにまけて\n"
	.string "しまった！$"

Route34_Text_YoungsterSamuel_After:
	.string "{JPN}もっといっしょうけんめいトレーニン\n"
	.string "グするよ。\p"
	.string "なにしろぼくはジムリーダーをめざし\n"
	.string "ているんだ。$"

Route34_Text_YoungsterIan_Seen:
	.string "{JPN}ぼくはポケモンでクラスいちのうでま\n"
	.string "えだ。$"

Route34_Text_YoungsterIan_Beaten:
	.string "{JPN}いや！もっとすごいトレーナーがいる\n"
	.string "よ……$"

Route34_Text_YoungsterIan_After:
	.string "{JPN}クラスでいちばんになるためにいっし\n"
	.string "ょうけんめいがんばっているんだ。$"

Route34_Text_CamperTodd_Seen:
	.string "{JPN}ポケモンをそだてるじしんはあるよ。\p"
	.string "みてみたい？$"

Route34_Text_CamperTodd_Beaten:
	.string "{JPN}トレーニングしっぱいしちゃったかな\n"
	.string "？$"

Route34_Text_CamperTodd_After:
	.string "{JPN}1ひきをデイケアにあずけるかそれと\n"
	.string "もアイテムをつかうか……$"

Route34_Text_ToddRegister:
	.string "Maybe I should take one to DAY-CARE,\n"
	.string "or maybe use some items…$"

Route34_Text_ToddRematchIntro:
	.string "{JPN}ポケモンをそだてるじしんはあるよ。\p"
	.string "みてみる？$"

Route34_Text_ToddRematchDefeat:
	.string "{JPN}トレーニングしっぱいしちゃったかな\n"
	.string "？$"

Route34_Text_ToddPostRematch:
	.string "Maybe I should take one to DAY-CARE,\n"
	.string "or maybe use some items…$"

Route34_Text_GinaRegister:
	.string "You're too strong to be a\n"
	.string "practice partner.$"

Route34_Text_PicnickerGina_Seen:
	.string "{JPN}きみはトレーナーか？\p"
	.string "れんしゅうしょうぶをしよう。$"

Route34_Text_PicnickerGina_Beaten:
	.string "{JPN}ああやばい！どうしてもかてない……$"

Route34_Text_PicnickerGina_After:
	.string "{JPN}きみはれんしゅうあいてにしてはつよ\n"
	.string "すぎるよ。$"

Route34_Text_OfficerKeith_Seen:
	.string "{JPN}だれだ？なにをしているんだ？$"

Route34_Text_OfficerKeith_Win:
	.string "{JPN}きみはなかなかタフなガキだな。$"

Route34_Text_OfficerKeith_After:
	.string "{JPN}うんこんにちはなんのもんだいもない\n"
	.string "ね。\p"
	.string "いいこにしてトラブルにまきこまれな\n"
	.string "いようにね。$"

Route34_Text_OfficerKeith_Daytime:
	.string "I'm on patrol for suspicious\n"
	.string "individuals.$"

Route34_Text_PokefanBrandon_Seen:
	.string "{JPN}ポケモンをあずけさきからとりもどし\n"
	.string "たばかりだ。\p"
	.string "どれくらいつよくなったかみてみよう\n"
	.string "！$"

Route34_Text_PokefanBrandon_Beaten:
	.string "{JPN}なぜこんなけつまつになるのですか？$"

Route34_Text_PokefanBrandon_After:
	.string "{JPN}ぼくのポケモンがあたらしいわざをお\n"
	.string "ぼえてかえってきた。\p"
	.string "それにはほんとうにあたまをかかえて\n"
	.string "しまったよ！$"

Route34_Text_Sign_IlexForest:
	.string "ILEX FOREST\n"
	.string "THROUGH THE GATE$"

Route34_Text_Sign_Route34:
	.string "ROUTE 34\n"
	.string "GOLDENROD CITY - AZALEA TOWN\p"
	.string "ILEX FOREST SOMEWHERE BETWEEN$"

Route34_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "BERRY trees grow new BERRIES\n"
	.string "several times a day.\p"
	.string "Note which trees bear which\n"
	.string "BERRIES.$"

Route34_Text_CooltrainerIrene_Seen:
	.string "{JPN}アイリーン:あんただれなの？！$"

Route34_Text_CooltrainerIrene_Beaten:
	.string "{JPN}アイリーン:うわぁ！つよすぎるよ！$"

Route34_Text_CooltrainerIrene_After1:
	.string "IRENE: My sister KATE will get you\n"
	.string "for this!$"

Route34_Text_CooltrainerIrene_After2:
	.string "IRENE: Isn't this beach great?\p"
	.string "It's our secret little getaway!$"

Route34_Text_CooltrainerJenn_Seen:
	.string "{JPN}ジェン:えっ……？なにしてるの？$"

Route34_Text_CooltrainerJenn_Beaten:
	.string "{JPN}ジェン:ごめんなさいアイリーン！お\n"
	.string "ねえちゃん！$"

Route34_Text_CooltrainerJenn_After1:
	.string "JENN: Don't get cocky! My sister\n"
	.string "KATE is tough!$"

Route34_Text_CooltrainerJenn_After2:
	.string "JENN: Sunlight makes your body\n"
	.string "stronger.$"

Route34_Text_CooltrainerKate_Seen:
	.string "{JPN}ケイト:わたしのしまいのめんどうを\n"
	.string "みてくれたおれいをかならずおかえし\l"
	.string "しなきゃ！$"

Route34_Text_CooltrainerKate_Beaten:
	.string "{JPN}ケイト:いやっ！まさかまけるなんて\n"
	.string "しんじられない。$"

Route34_Text_CooltrainerKate_GiveSoftSand:
	.string "KATE: You are so strong.\n"
	.string "We lost with no excuses...\p"
	.string "Here, take this!$"

Route34_Text_CooltrainerKate_After:
	.string "{JPN}ケイト:いきなりおそいかかってしま\n"
	.string "ってごめんね。\p"
	.string "ここにだれかがくるなんておもっても\n"
	.string "みなかったんだ。ほんとうにびっくり\l"
	.string "したよ。$"


Route34_Text_Sign_DayCare:
	.string "DAY-CARE\p"
	.string "LET US RAISE YOUR POKéMON FOR YOU!$"
