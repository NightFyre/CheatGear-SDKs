#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class PirateLegendQuest.VeilOfTheAncients
	 * Size -> 0x0018 (FullSize[0x0418] - InheritedSize[0x0400])
	 */
	class AVeilOfTheAncients : public AInteractableBase
	{
	public:
		float                                                      NumberOfGems;                                            // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7YD8[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULockComponent*                                      LockComponent;                                           // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0410(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateLegendQuest.VeilService
	 * Size -> 0x0100 (FullSize[0x0160] - InheritedSize[0x0060])
	 */
	class UVeilService : public UTaleQuestService
	{
	public:
		unsigned char                                              UnknownData_CGM4[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              World;                                                   // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGameState*                                          GameState;                                               // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9X85[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVeilOfTheAncients*                                  TrackedVeil;                                             // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShip*                                               Ship;                                                    // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6HK1[0xB8];                                  // 0x00A8(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateLegendQuest.GetVeilOfTheAncientsStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UGetVeilOfTheAncientsStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_VGM9[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateLegendQuest.VeilOfTheAncientsServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVeilOfTheAncientsServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UGetVeilOfTheAncientsStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 QuestVeil;                                               // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
