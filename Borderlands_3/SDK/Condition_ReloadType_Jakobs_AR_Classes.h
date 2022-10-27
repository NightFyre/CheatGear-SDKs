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
	 * BlueprintGeneratedClass Condition_ReloadType_Jakobs_AR.Condition_ReloadType_Jakobs_AR_C
	 * Size -> 0x0002 (FullSize[0x008A] - InheritedSize[0x0088])
	 */
	class UCondition_ReloadType_Jakobs_AR_C : public UGbxCondition_Blueprint
	{
	public:
		unsigned char                                              ReloadSlot;                                              // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BoltType;                                                // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
