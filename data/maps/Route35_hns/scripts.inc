Route35_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route35_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route35_OnTransition: 
	callnative SetTimeBasedEncounters
	end	

Route35_EventScript_CamperIvan::
	trainerbattle_single TRAINER_IVAN_HNS, Route35_Text_CamperIvanSeen, Route35_Text_CamperIvanBeaten
	msgbox Route35_Text_CamperIvanAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_CamperElliot::
	trainerbattle_single TRAINER_ELLIOT_HNS, Route35_Text_CamperElliotSeen, Route35_Text_CamperElliotBeaten
	msgbox Route35_Text_CamperElliotAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_PicnickerBrooke::
	trainerbattle_single TRAINER_BROOKE_HNS, Route35_Text_PicnickerBrookeSeen, Route35_Text_PicnickerBrookeBeaten
	msgbox Route35_Text_PicnickerBrookeAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_PicnickerKim::
	trainerbattle_single TRAINER_KIM_HNS, Route35_Text_PicnickerKimSeen, Route35_Text_PicnickerKimBeaten
	msgbox Route35_Text_PicnickerKimAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_BirdKeeperBryan::
	trainerbattle_single TRAINER_BRYAN_HNS, Route35_Text_BirdKeeperBryanSeen, Route35_Text_BirdKeeperBryanBeaten
	msgbox Route35_Text_BirdKeeperBryanAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_JugglerIrwin::
	trainerbattle_single TRAINER_IRWIN_HNS, Route35_Text_JugglerIrwinSeen, Route35_Text_JugglerIrwinBeaten, Route35_EventScript_RegisterIrwin
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route35_EventScript_RematchIrwin
	msgbox Route35_Text_JugglerIrwinAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_RegisterIrwin::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route35_Text_IrwinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_IRWIN_HNS
	release
	end

Route35_EventScript_RematchIrwin::
	trainerbattle_rematch TRAINER_IRWIN_HNS, Route35_Text_JugglerIrwinSeen, Route35_Text_JugglerIrwinBeaten
	msgbox Route35_Text_JugglerIrwinAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_BugCatcherArnie::
	trainerbattle_single TRAINER_ARNIE_HNS, Route35_Text_BugCatcherArnieSeen, Route35_Text_BugCatcherArnieBeaten, Route35_EventScript_RegisterArnie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route35_EventScript_RematchArnie
	msgbox Route35_Text_BugCatcherArnieAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_RegisterArnie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route35_Text_ArnieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ARNIE_HNS
	release
	end

Route35_EventScript_RematchArnie::
	trainerbattle_rematch TRAINER_ARNIE_HNS, Route35_Text_ArnieRematchIntro, Route35_Text_ArnieRematchDefeat
	msgbox Route35_Text_ArniePostRematch, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_FirebreatherWalt::
	trainerbattle_single TRAINER_WALT_HNS, Route35_Text_FirebreatherWaltSeen, Route35_Text_FirebreatherWaltBeaten
	msgbox Route35_Text_FirebreatherWaltAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_PolicemanDirk::
	trainerbattle_single TRAINER_DIRK_HNS, Route35_Text_OfficerDirkSeen, Route35_Text_OfficerDirkBeaten
	msgbox Route35_Text_OfficerDirkAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_Sign1::
	lock
	msgbox Route35_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route35_EventScript_Sign2::
	lock
	msgbox Route35_Text_Sign2, MSGBOX_SIGN
	closemessage
	release
	end

Route35_EventScript_Item_Payback::
	finditem ITEM_TM_PAYBACK
	end

Route35_EventScript_Item_Nugget::
	finditem ITEM_BIG_NUGGET
	end

Route35_EventScript_Item_ParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end

Route35_Text_CamperIvanSeen:
	.string "{JPN}ラジオからポケモンのデータをしゅと\n"
	.string "くしてきたよ。これでだいじょうぶだ\l"
	.string "とおもう。$"

Route35_Text_CamperIvanBeaten:
	.string "{JPN}もうあきらめる！$"

Route35_Text_CamperIvanAfter:
	.string "{JPN}ラジオからながれるおんがくはやせい\n"
	.string "のポケモンのきぶんをかえる。$"

Route35_Text_CamperElliotSeen:
	.string "{JPN}かのじょにおれってすごいんだってみ\n"
	.string "せてやるぜ！$"

Route35_Text_CamperElliotBeaten:
	.string "{JPN}わたしのためにまけてほしかったな…\n"
	.string "…$"

Route35_Text_CamperElliotAfter:
	.string "{JPN}かのじょのまえではじをかかされた…\n"
	.string "…$"

Route35_Text_PicnickerBrookeSeen:
	.string "{JPN}わたしのかれしはたよりないからかれ\n"
	.string "にはたよれないわ。$"

Route35_Text_PicnickerBrookeBeaten:
	.string "{JPN}わあすごい！きみすごくつよいね！$"

Route35_Text_PicnickerBrookeAfter:
	.string "{JPN}かれしよりもわたしのポケモンのほう\n"
	.string "がたよりになるわ。$"

Route35_Text_PicnickerKimSeen:
	.string "{JPN}ジムにいくの？わたしもだよ！$"

Route35_Text_PicnickerKimBeaten:
	.string "{JPN}あぁ。かてなかった……$"

Route35_Text_PicnickerKimAfter:
	.string "{JPN}ジムバッジはかわいいね。あつめてる\n"
	.string "んだ。$"

Route35_Text_BirdKeeperBryanSeen:
	.string "{JPN}どんなしゅるいのボールをつかってる\n"
	.string "の？$"

Route35_Text_BirdKeeperBryanBeaten:
	.string "{JPN}うわっ！まにあわなかった！$"

Route35_Text_BirdKeeperBryanAfter:
	.string "{JPN}ポケモンのなかにはすぐににげだして\n"
	.string "しまうものもある。\p"
	.string "カートさんのファストボールをつかっ\n"
	.string "てつかまえてみて。\p"
	.string "アスピアきのみをみつけたらいつもカ\n"
	.string "ートさんにもっていく。\p"
	.string "かれはそれをとくせいのボールにして\n"
	.string "くれる。$"

Route35_Text_JugglerIrwinSeen:
	.string "{JPN}このゆうがなボールのさばきぶりをご\n"
	.string "らんあれ！$"

Route35_Text_JugglerIrwinBeaten:
	.string "{JPN}ふぅ！びっくりした！$"

Route35_Text_JugglerIrwinAfter:
	.string "{JPN}じまんのポケモンできみをおどろかせ\n"
	.string "ようとおもっていたんだ。\p"
	.string "でもきみのじつりょくにこころをゆさ\n"
	.string "ぶられたよ！$"

Route35_Text_BugCatcherArnieSeen:
	.string "{JPN}むしタイプのポケモンがあらわれるば\n"
	.string "しょならどこへでもいくよ。$"

Route35_Text_BugCatcherArnieBeaten:
	.string "{JPN}えっ？まけるはずじゃなかったのに…\n"
	.string "…$"

Route35_Text_BugCatcherArnieAfter:
	.string "{JPN}ぼくのコンパンのおかげでしぜんこう\n"
	.string "えんのむしとりたいかいでゆうしょう\l"
	.string "できたよ。$"

Route35_Text_IrwinRegister:
	.string "I was going to dazzle you with my\n"
	.string "prize POKéMON.\p"
	.string "But your prowess electrified me!$"

Route35_Text_ArnieRegister:
	.string "My VENONAT won me the Bug-Catching\n"
	.string "Contest at the NATIONAL PARK.$"

Route35_Text_ArnieRematchIntro:
	.string "{JPN}むしタイプのポケモンがあらわれるば\n"
	.string "しょならどこへでもいくよ。$"

Route35_Text_ArnieRematchDefeat:
	.string "{JPN}えっ？まけるはずじゃなかったのに…\n"
	.string "…$"

Route35_Text_ArniePostRematch:
	.string "My VENONAT won me the Bug-Catching\n"
	.string "Contest at the NATIONAL PARK.$"

Route35_Text_BugCatcherArnieYanma:
	.string "Wow… Look at all those YANMA!\p"
	.string "I'm so blown away, I can't move.$"

Route35_Text_FirebreatherWaltSeen:
	.string "{JPN}ひをはくれんしゅうをしているんだ。$"

Route35_Text_FirebreatherWaltBeaten:
	.string "{JPN}いたっ！はなのさきをやけどしちゃっ\n"
	.string "た！$"

Route35_Text_FirebreatherWaltAfter:
	.string "{JPN}ラジオからながれるポケモンマーチは\n"
	.string "やせいのポケモンをひきよせます。$"

Route35_Text_OfficerDirkSeen:
	.string "{JPN}よるにはきけんがひそんでいる！$"

Route35_Text_OfficerDirkBeaten:
	.string "{JPN}おっと！$"

Route35_Text_OfficerDirkAfter:
	.string "{JPN}ねえよるってそれなりのたのしみがあ\n"
	.string "るよね。\p"
	.string "でもやりすぎはダメだよいい？$"

Route35_Text_OfficerDirkTough:
	.string "Your POKéMON look pretty tough.\p"
	.string "You could go anywhere safely.$"

Route35_Text_Sign:
	.string "ROUTE 35$"

Route35_Text_Sign2:
	.string "NATIONAL PARK GATE$"
