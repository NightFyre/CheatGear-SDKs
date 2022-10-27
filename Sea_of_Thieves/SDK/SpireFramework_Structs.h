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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SpireFramework.EDirectionOfMovement
	 */
	enum class EDirectionOfMovement : uint8_t
	{
		None     = 0,
		Rising   = 1,
		Lowering = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SpireFramework.ServerSpireInfo
	 * Size -> 0x0068
	 */
	struct FServerSpireInfo
	{
	public:
		int32_t                                                    LevelId;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              SpireActor;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FName>                           InstancedLevelPaths;                                     // 0x0018(0x0050) ZeroConstructor
	};

	/**
	 * ScriptStruct SpireFramework.SpireInfo
	 * Size -> 0x0008
	 */
	struct FSpireInfo
	{
	public:
		int32_t                                                    LevelId;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldBeLoaded;                                          // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldBeVisible;                                         // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C1C6[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SpireFramework.SpireEntry
	 * Size -> 0x0014
	 */
	struct FSpireEntry
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                IslandName;                                              // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
