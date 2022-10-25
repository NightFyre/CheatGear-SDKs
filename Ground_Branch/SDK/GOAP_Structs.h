#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GOAP.GoapAction
	 * Size -> 0x00B0
	 */
	struct FGoapAction
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Cost;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11Y5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, unsigned char>                   Preconditions;                                           // 0x0010(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, unsigned char>                   Effects;                                                 // 0x0060(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GOAP.GoapWorldState
	 * Size -> 0x0050
	 */
	struct FGoapWorldState
	{
	public:
		TMap<struct FGameplayTag, unsigned char>                   Flags;                                                   // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GOAP.GoapActionData
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FGoapActionData : public FTableRowBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Tags;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Cost;                                                    // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUQ0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, unsigned char>                   Preconditions;                                           // 0x0028(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, unsigned char>                   Effects;                                                 // 0x0078(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GOAP.GoapWorldStateData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGoapWorldStateData : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlag;                                                   // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3KV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GOAP.GoapPlan
	 * Size -> 0x0010
	 */
	struct FGoapPlan
	{
	public:
		unsigned char                                              UnknownData_R9FB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GOAP.GoapNode
	 * Size -> 0x0118
	 */
	struct FGoapNode
	{
	public:
		struct FGoapWorldState                                     WorldState;                                              // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGoapAction                                         Action;                                                  // 0x0050(0x00B0) BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VCP[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
