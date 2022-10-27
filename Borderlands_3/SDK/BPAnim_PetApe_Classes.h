#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass BPAnim_PetApe.BPAnim_PetApe_C
	 * Size -> 0x9C08 (FullSize[0xA6F0] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_PetApe_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_IIVX[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_10EE09484B6E5AB28C77558715BD33FD;     // 0x0AF8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F4A95D624905982F8A73EB8E715E1406; // 0x0B40(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_FDF704E342C9E944066AB2A2C2C6F000;     // 0x0C60(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_32954A1F42E35080FAECCD8F59A3154F; // 0x0D10(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_328E1EE641CB1DC643EC45A664E8C87A; // 0x0DF0(0x0050)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_608942434FE5CE106F0E159166931358;     // 0x0E40(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_D6AB8E8043AF56909C643A8155042E68; // 0x0EF0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_C37877D445203DF87002918C63E05025; // 0x0F38(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_EA358A2B4DDB9AFC08A0D2A79FA8E1A7; // 0x0F88(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_AC708B074816B3D4EAE795A6E7DCE804; // 0x1068(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_FA6020194FD2E9F3273A0A98F4061027; // 0x10B8(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D103A0114F988158F12158840B8D836A; // 0x1108(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5E64B66A487242523C4E58A8AEF35907; // 0x1228(0x0050)
		unsigned char                                              UnknownData_595B[0x8];                                   // 0x1278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_06B2CD36472531A2BFF96282DF669911;     // 0x1280(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_1745937440383540A0103799C70FBE61; // 0x1330(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7276E06D41DFC301689664841B520D44; // 0x1410(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_068F335E4EEAD081D6C973ADAE0B2DA0; // 0x1530(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_69076B5A493DD637750D9E9747F147AA; // 0x1580(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7B24C1A3474FD1B406128A84EA8B4B9B; // 0x15D0(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_94B2A1FE41BF1FD5DA5101858A06FB60; // 0x16B0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_53608FD0450ED24DA96AE0BD300F79FC; // 0x1700(0x0050)
		struct FGbxAnimNode_LegIK                                  GbxAnimGraphNode_LegIK_A146AAB947D79B92B5EA7BA647D5CD62; // 0x1750(0x08B0)
		struct FGbxAnimNode_LookAt                                 GbxAnimGraphNode_LookAt_64EDD08E4FA68DA7FD7E75B252BB7835; // 0x2000(0x02D0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_09A247E64EF1B7278B8D2A9964245FA0; // 0x22D0(0x00E0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36785E9C47CFA881B803A4B4BF6DF065; // 0x23B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E8BEB4FF49DF21F7F14F9B88F8EC4068; // 0x2400(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47B542204B10F9AF01D73593F3465032; // 0x2450(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_EFA461D04AB8ABC6D81CD7B8A6EB83D9; // 0x24A0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9AA4D44043D35EFEA94B8AA21A1AC6DE; // 0x24F0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_87B2A498413DA7B7D6E1FFB92D9F62EF; // 0x2540(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_6BDBBC5945734CA14BD11198C688C492; // 0x2630(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_74CF853E426D8F51D0A24A8DC690D245; // 0x2678(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A1C024E9429221C1767BBF8F0515CE60; // 0x2768(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8D6324A44BA22357E43019969A309439; // 0x27B0(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_70A0682C4205E2BF070F5E85E3C9FF65; // 0x2938(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CEA0193242B5133B2995BCA03CD226B8; // 0x2980(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8258D3DC47204ABA9F76C58EC6C6ED52; // 0x29D0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_95467AFF4548798CC25B8DB584726BF2; // 0x2A20(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B55E7867442A9FC940FDBBA540E4A957; // 0x2A70(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A8E6A10A4E9CD877B9F84AA074537DA5; // 0x2AC0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A1222B734962CF7B3FFAA88F0273D78F; // 0x2B10(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_71E9967B40B13C83CE7901AD8BD8B8D2; // 0x2B60(0x0050)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_8E6773AB48B82D90DC021EAA5C881CC4; // 0x2BB0(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_259EEBEF406506377F38949F109B0234; // 0x2C38(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_CEB4447947333CB4B7A8ABB1D10C6AA4; // 0x2C80(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_75EBF48F46843FCCAC9C01B890CB4DB1; // 0x2DE0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FC42D63D472871A725D41F838397AD34; // 0x2E28(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C55689E34E5F856637A95781BAE16B95; // 0x2F18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EC94625345E89F1DE6735D97153F5C2C; // 0x2F60(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_6150E2B041706601A9E44C87AA7AFA6E; // 0x3050(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F8BAAA994D08A45351CE428D055C340D; // 0x3098(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6AEDABE24AAC78748DCC42A6CECD90DB; // 0x3188(0x00F0)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_FC783CC84DD4FB355BC30D8286E8680A; // 0x3278(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6AECBFFB480DC09CDDE2A1B953939F39; // 0x3360(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A8AE56664AD6734809551AB309B4B6E3; // 0x3450(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8D98456040FE8BFBE2990CBDCA670F76; // 0x3498(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_20C7CF8C40E808B1C904308D0F5FB14B; // 0x3620(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_76D0E43A46E7DA2321F77488867CFDB4; // 0x3668(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23D62C5141938A1082BB77A42E636507; // 0x36B8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F01C055447C4ADC2A511D0A3C0B6C7F2; // 0x3708(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2611D45149120E51C4BECAB3E5EABAA2; // 0x3758(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9BEE765242C8DACF951A73B91D321F2F; // 0x37A8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21AD882742A43A5E3338D2BE79998E64; // 0x37F8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15D0FF3B434A14AB254357BE76C464AA; // 0x3848(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2E20A2DF48C4C6A1381E77A2148F2F91; // 0x3898(0x0050)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_5B26DFEF461FBEC32392B0AD3C78479A; // 0x38E8(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_1572458E4CCA7A46D253B4B1D1BB3ECE; // 0x3970(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_D96ECEB8417BFAF1B82CF0ADBED5A2B8; // 0x39B8(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_5CF1D6CD45F2CEFD03E9FA904C5E9AB2; // 0x3B18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4F694F954161B415064EA8ADE0E053C3; // 0x3B60(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_BF171E1D4E5B0A0F76FF138D25357DEE; // 0x3C50(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35D67AE54FDC1CFE71A361B6BC01FB95; // 0x3C98(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_FD95F709483BF6ABDFFA0B8E11061DDB; // 0x3D88(0x0048)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_97D13048496FFB4704D2B8B2161E18C6; // 0x3DD0(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F2309C32410642058E3F7394CC1F6090; // 0x3EB8(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A8F72F004B0464976F036B95E0A4B799; // 0x3FA8(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DDA21DBB47F0C3B7D731478E4DE29036; // 0x4098(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_985A2D7C4877B2F1946137BB90680FCB; // 0x4188(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_B0229F4248194CAECEC2FDB6BC7AD1A9; // 0x41D0(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D0A12F7845DE1BE0C6AAA8A50485FA8F; // 0x4358(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_CEA05D68403017525BB20D87B76AB335; // 0x43A0(0x0188)
		struct FGbxAnimNode_ApplyBoneModifyProfile                 GbxAnimGraphNode_ApplyBoneModifyProfile_CD97BBCE4806F4B65DDDB293F55FB446; // 0x4528(0x0180)
		unsigned char                                              UnknownData_RG7A[0x8];                                   // 0x46A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAnimNode_ForwardDynamics                        GbxAnimGraphNode_ForwardDynamics_97A71F5445641616C06BC18A0A2AA27D; // 0x46B0(0x0730)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_BB1FBA0546785E6B23072E8E7E472546; // 0x4DE0(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5C6444AA46414CFF87C1528A27199B8D; // 0x4E28(0x0238)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_91E40F444B14439D02A19897EC6009B3; // 0x5060(0x0120)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E4BEFBF84417B8D715E9E38A977D37C4; // 0x5180(0x00D0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1F4081B64B6B8FB65C6A059860AA7A25; // 0x5250(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A08E75BF48B8A12638657D8C21A3D4FA; // 0x52A0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52A1A1134A2F761F7251029A02FCEE68; // 0x52F0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5E08CFC446388890F08E129D6A803353; // 0x5340(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_6E1411B048DA0C8042AF17893C7A5B09; // 0x5430(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E063A55B4AF11E886BCED98BE8648AE9; // 0x5478(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_E7AD8F734BA7E879B172CE85616C5214; // 0x5568(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_66393E014F9D27EAC05BE39A697734FC; // 0x55B0(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_FC63BB4344870F6C9962DA85DFB8185C; // 0x5738(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CD02A01241A6EEC024D228B74BA2BD70; // 0x5780(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FEEDCE5345EB675E589461ADAFEEF2AA; // 0x57D0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8B23AB94429590D6DBD9FC9DD0C8FEC0; // 0x5820(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_249F6867404A3681234CEABD0F45EF43; // 0x5870(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DE57D3DE46179F0456D489B056E59A35; // 0x58C0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_98CB07114DC7686C4403549FE482031A; // 0x5910(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6FF3E8E94A74AA2463EB889DF68E7CE3; // 0x5960(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6049D15A4EBFECE892FFF79138FEFD60; // 0x59B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6E9272184CE9AA0EB7CB8E8119CB491E; // 0x5A00(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C822F7404751103708E8A499DC8703AB; // 0x5A50(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FE9C9BE44F7A45850C32EE937843BE54; // 0x5AA0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32BF2D40451067392AC68395D7417129; // 0x5AF0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5FF3E3914E7556C8E0448B862D23502F; // 0x5B40(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AD26870A4B7E42C2E48693A50829AE1F; // 0x5B90(0x0050)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_BB960F994EF96CF71CD25BA17A20DC43; // 0x5BE0(0x0088)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F7959C264F8743F02DCB1399C9F25879; // 0x5C68(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A89052B24CFA0996BE25AFBDC87C17F3; // 0x5D58(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_B9735E354625C799BD996EA82F2B4186; // 0x5E48(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_666D03DD4953ECC0A9740BA87C50F5F7; // 0x5F28(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_B852C34743287B47918AFC8C84C6D065; // 0x6018(0x0120)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_BCFA478045EEFE248B28E9BB841997E1; // 0x6138(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_20FC440A49C97253BAED9C8F5241B6DE; // 0x61C0(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_3BEB2ECF409925B240D83081C5E8DC2A; // 0x6208(0x0088)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0761387E498DCC713E767DA2A4E554DE; // 0x6290(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1F33059E45588C58DE59F7989D149D7A; // 0x6380(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8C909CDA4CB928FDE408CF948F5FE36B; // 0x6470(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_FA73A4034FBF7C2A20E1369079BA0523; // 0x6550(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57A36E2C4186727DE24225B71B32915C; // 0x6670(0x00F0)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_334CDB734E1E6A77E7901CBC6701DD53; // 0x6760(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_34645D0F4894520F2565C3BC8F3D9EF7; // 0x67E8(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_6045331744F099E61BC0E18DD62E427F; // 0x6830(0x0088)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25CD14B4415B565A38B459877F368594; // 0x68B8(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_86376F784BF86EB85D7982AEF7EC44D6; // 0x69A8(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_A043C4E1478F6A0D9908D7958DD71016; // 0x6A98(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_29ED3AFB49FAA6E745114B9CEE2D43CE; // 0x6B78(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_185A3FE041BD033A7AB8F5BB412EBC08; // 0x6C98(0x00F0)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_1EC340ED4179EF1645C603BF0C72394F; // 0x6D88(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_3C695B964EAE4C9D13730AB638FA0410; // 0x6E10(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_E145D5A44016C4763CEFC6ADCF74C74D; // 0x6E58(0x0160)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0589DD14430D234DADDF4995920AA491; // 0x6FB8(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CDC2C797412BD75DB2027A914700A803; // 0x70A8(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_35A3338644BE876A25C2BDA374C18FAB; // 0x7198(0x0120)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_0F6E14184BC3DCCD57A6BA892A8A7EE2; // 0x72B8(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43F746B84C1F46F7322438BB94ADD251; // 0x7398(0x00F0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_BEED2DFB4B8946CE3231129EBC4A090E; // 0x7488(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_7D8470674FB030DA22DB519B6BE13398; // 0x75E8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_911414C846A109BDCB4CBEA8B0017964; // 0x7630(0x0160)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_85EF9CEC478E1D71373D75A43185B7BB; // 0x7790(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B58E89804C35A4FAA3CA87B59BBADD2E; // 0x7880(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1C4D3CDC443BF850147378B0EA8E3682; // 0x7970(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_D225F25D4154F06A37B59EAC4C7AD03E; // 0x7A60(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8C21AC9F4C79CF2B9DB313AC971B3D14; // 0x7B40(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2653E33145A0F6A776A12086700DC421; // 0x7C30(0x0120)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_0E7EDAB24A71FA420176D4A8F9CE0C5D; // 0x7D50(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C314C65341DAB9DD96518E8722752FDA; // 0x7E38(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_49F9C2734E6D6CA05BABC9AADDD8344C; // 0x7F28(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_706F76004541EBDC0BD737B09BCC864E; // 0x7F70(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_96B2FB504AD6631357615ABEE12E6E97; // 0x8060(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_439275C747B55C0DD2E99888D12ED970; // 0x8150(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AA6C4C924DC7D170B05027AC5396D58F; // 0x8230(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2430543C4D173D8D84E8288FD449340B; // 0x8320(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D3F0303248D2FE338BD7908515591C0C; // 0x8410(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_73ED238746891E9BD903168D2CFE4F6A; // 0x8458(0x0160)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6B80359B4B5702A6B0C044B556484F9B; // 0x85B8(0x00F0)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_973FAA784A24BFDC19BC00B0AF08CF82; // 0x86A8(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1F5837E24FC7A9C3D5BE7291889F62A3; // 0x8790(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AED533614C325B30D746DFB30EABDD32; // 0x8880(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D9207232419E29F336104BBD98CA9F6E; // 0x8970(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47F7BD1B48C4D661239D11B46B31F352; // 0x8A60(0x00F0)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_C6B75BA84E68C486E77F13BAAD8F8F8C; // 0x8B50(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C4583D0849DB21F0076E3BB4969DB49D; // 0x8C38(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_749414944A522754EDDCBD88DC13D87C; // 0x8D28(0x00F0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_19D21D2241FDFD6B65F885A6B411D2F8; // 0x8E18(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51E1C82C444828D69EB49189C3D9BFA3; // 0x8EF8(0x00F0)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_A71100614A6D256ECA43848A61699B4E; // 0x8FE8(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_492B67DE42B8D6DFB742F8A473D762F5; // 0x90D0(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_EDEE7F3C4E6FD0489194F9AC77E7E7EB; // 0x91C0(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_0DD2C76C45B72150F5C7AD8D0C24DA87; // 0x9208(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_BF9E1812476546B857E094A36CA8ECAF; // 0x9390(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6270393E46ED5ED587446A97D8322C8D; // 0x93D8(0x0188)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_38E71E3B4C65022B0B7D0F942E1FC638; // 0x9560(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FDE52E914684DB6A2E5FD4AEAAEB3F9D; // 0x95B0(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_B16ACA3144229C5FFB7139A90CA857B4; // 0x96A0(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_134D25144FE46AD98FDC1EA8B32F0E5A; // 0x9780(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A7FD7543454C1D261E4E23A6901FF003; // 0x98A0(0x0050)
		struct FGbxAnimNode_HandIK                                 GbxAnimGraphNode_HandIK_4291345C46616D9B377E91ACD624BA2E; // 0x98F0(0x0370)
		EApeVariants                                               Variants;                                                // 0x9C60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4J8S[0x3];                                   // 0x9C61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      L_ArmIK;                                                 // 0x9C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      R_ArmIK;                                                 // 0x9C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InCombatStance;                                          // 0x9C6C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Biped;                                                   // 0x9C6D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DefaultStances;                                          // 0x9C6E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_16XD[0x1];                                   // 0x9C6F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakCharacter*                                       Character;                                               // 0x9C70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxCharacterMovementComponent*                      GbxMoveComp;                                             // 0x9C78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOakCharacterMovementComponent*                      OakMoveComp;                                             // 0x9C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Has_Fall_Anims;                                          // 0x9C88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Enum_CustomMoveTypes                                       CustomMoves;                                             // 0x9C89(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Biped_Combat;                                            // 0x9C8A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InPassive;                                               // 0x9C8B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WeaponValid;                                             // 0x9C8C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J1NE[0x3];                                   // 0x9C8D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RightGrip;                                               // 0x9C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WeaponIsValid;                                           // 0x9C98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LSMW[0x7];                                   // 0x9C99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakWeapon*                                          BaseWeapon;                                              // 0x9CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GripType;                                                // 0x9CA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ForeGripType;                                            // 0x9CAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UManufacturerData*                                   Manufacturer;                                            // 0x9CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        LiveWeaponPoses;                                         // 0x9CB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FAStruct_Generic_WeaponAnimContainer                WeaponPoses;                                             // 0x9CC8(0x0A20) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    CurrentWeaponManufacturer;                               // 0xA6E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeaponType;                                              // 0xA6EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalculateWeaponHoldData(class AWeapon* New_Weapon, bool* ValidWeapon);
		void EvaluateStances(const class FName& StanceData, const class FName& StanceType);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_52A1A1134A2F761F7251029A02FCEE68();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_DDA21DBB47F0C3B7D731478E4DE29036();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_A8F72F004B0464976F036B95E0A4B799();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_DE57D3DE46179F0456D489B056E59A35();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_F2309C32410642058E3F7394CC1F6090();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_98CB07114DC7686C4403549FE482031A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_6FF3E8E94A74AA2463EB889DF68E7CE3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_BlendListByFloatInRange_97D13048496FFB4704D2B8B2161E18C6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_6049D15A4EBFECE892FFF79138FEFD60();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_4F694F954161B415064EA8ADE0E053C3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_32BF2D40451067392AC68395D7417129();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_AD26870A4B7E42C2E48693A50829AE1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendSpacePlayer_D96ECEB8417BFAF1B82CF0ADBED5A2B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_B9735E354625C799BD996EA82F2B4186();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_B852C34743287B47918AFC8C84C6D065();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_8C909CDA4CB928FDE408CF948F5FE36B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_FA73A4034FBF7C2A20E1369079BA0523();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_2E20A2DF48C4C6A1381E77A2148F2F91();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_A043C4E1478F6A0D9908D7958DD71016();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_29ED3AFB49FAA6E745114B9CEE2D43CE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_15D0FF3B434A14AB254357BE76C464AA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendSpacePlayer_E145D5A44016C4763CEFC6ADCF74C74D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_35A3338644BE876A25C2BDA374C18FAB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_0F6E14184BC3DCCD57A6BA892A8A7EE2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendSpacePlayer_BEED2DFB4B8946CE3231129EBC4A090E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_2611D45149120E51C4BECAB3E5EABAA2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_F01C055447C4ADC2A511D0A3C0B6C7F2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendSpacePlayer_911414C846A109BDCB4CBEA8B0017964();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_85EF9CEC478E1D71373D75A43185B7BB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_D225F25D4154F06A37B59EAC4C7AD03E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_2653E33145A0F6A776A12086700DC421();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_BlendListByFloatInRange_0E7EDAB24A71FA420176D4A8F9CE0C5D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_C314C65341DAB9DD96518E8722752FDA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_6AECBFFB480DC09CDDE2A1B953939F39();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_BlendListByFloatInRange_FC783CC84DD4FB355BC30D8286E8680A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_439275C747B55C0DD2E99888D12ED970();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_6AEDABE24AAC78748DCC42A6CECD90DB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendSpacePlayer_73ED238746891E9BD903168D2CFE4F6A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_6B80359B4B5702A6B0C044B556484F9B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_BlendListByFloatInRange_973FAA784A24BFDC19BC00B0AF08CF82();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_1F5837E24FC7A9C3D5BE7291889F62A3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_AED533614C325B30D746DFB30EABDD32();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_D9207232419E29F336104BBD98CA9F6E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_47F7BD1B48C4D661239D11B46B31F352();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_BlendListByFloatInRange_C6B75BA84E68C486E77F13BAAD8F8F8C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_C4583D0849DB21F0076E3BB4969DB49D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_749414944A522754EDDCBD88DC13D87C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_19D21D2241FDFD6B65F885A6B411D2F8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_51E1C82C444828D69EB49189C3D9BFA3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_BlendListByFloatInRange_A71100614A6D256ECA43848A61699B4E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_492B67DE42B8D6DFB742F8A473D762F5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_F8BAAA994D08A45351CE428D055C340D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_FC42D63D472871A725D41F838397AD34();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendSpacePlayer_CEB4447947333CB4B7A8ABB1D10C6AA4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_71E9967B40B13C83CE7901AD8BD8B8D2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_A1222B734962CF7B3FFAA88F0273D78F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_SequencePlayer_FDE52E914684DB6A2E5FD4AEAAEB3F9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_134D25144FE46AD98FDC1EA8B32F0E5A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_HandIK_4291345C46616D9B377E91ACD624BA2E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_95467AFF4548798CC25B8DB584726BF2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_ForwardDynamics_97A71F5445641616C06BC18A0A2AA27D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_9AA4D44043D35EFEA94B8AA21A1AC6DE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_47B542204B10F9AF01D73593F3465032();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TransitionResult_E8BEB4FF49DF21F7F14F9B88F8EC4068();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByEnum_09A247E64EF1B7278B8D2A9964245FA0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_BlendListByBool_E4BEFBF84417B8D715E9E38A977D37C4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_GbxAnimGraphNode_LookAt_64EDD08E4FA68DA7FD7E75B252BB7835();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_LayeredBoneBlend_D103A0114F988158F12158840B8D836A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_TwoWayBlend_91E40F444B14439D02A19897EC6009B3();
		void OnStanceChanged();
		void BlueprintInitializeAnimation();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetApe_AnimGraphNode_RotationOffsetBlendSpace_5C6444AA46414CFF87C1528A27199B8D();
		void ValidateAnimSetTags();
		void OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* PrevWeapon);
		void CheckWeaponPoses(bool ValidWeapon);
		void ExecuteUbergraph_BPAnim_PetApe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
