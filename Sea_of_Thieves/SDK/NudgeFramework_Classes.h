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
	 * Class NudgeFramework.NudgeInterpolationParamsDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNudgeInterpolationParamsDataAsset : public UDataAsset
	{
	public:
		struct FNudgeInterpolationParams                           NudgeInterpParams;                                       // 0x0028(0x0020) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NudgeFramework.NudgeableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNudgeableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NudgeFramework.NudgePolicyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNudgePolicyInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NudgeFramework.NudgePolicy
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UNudgePolicy : public UObject
	{
	public:
		unsigned char                                              UnknownData_DZWR[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwningActor;                                             // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OwnerComponent;                                          // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
