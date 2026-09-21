SSAqua_RoomNE_hns_MapScripts::
	.byte 0

SSAqua_RoomNE_EventScript_Noland::
	trainerbattle_single TRAINER_NOLAND_HNS, SSAqua_RoomNE_Text_HikerNolandSeen, SSAqua_RoomNE_Text_HikerNolandBeaten
	msgbox SSAqua_RoomNE_Text_HikerNolandAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNE_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_HNS, SSAqua_RoomNE_Text_PokemaniacEthanSeen, SSAqua_RoomNE_Text_PokemaniacEthanBeaten
	msgbox SSAqua_RoomNE_Text_PokemaniacEthanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNE_Text_HikerNolandSeen:
    .string "{JPN}ひとり？それならしょうぶしよう！$"

SSAqua_RoomNE_Text_HikerNolandBeaten:
    .string "{JPN}それはてにおえないよ！$"

SSAqua_RoomNE_Text_HikerNolandAfterBattle:
    .string "I wonder if there are any\n"
    .string "mountains worth climbing in KANTO?$"

SSAqua_RoomNE_Text_PokemaniacEthanSeen:
    .string "{JPN}リリーってしってる？かのじょはカン\n"
    .string "トーでにんきのディージェイなんだ。$"

SSAqua_RoomNE_Text_PokemaniacEthanBeaten:
    .string "{JPN}ギャアアアッ！$"

SSAqua_RoomNE_Text_PokemaniacEthanAfterBattle:
    .string "LILY's nice, but\n"
    .string "MARY's the best!\n"
    .string "I want to check\n"
    .string "out JOHTO's radio\n"
    .string "programs!$"
