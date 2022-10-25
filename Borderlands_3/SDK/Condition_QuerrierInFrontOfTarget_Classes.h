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
	 * BlueprintGeneratedClass Condition_QuerrierInFrontOfTarget.Condition_QuerrierinFrontofTarget_C
	 * Size -> 0x0004 (FullSize[0x008C] - InheritedSize[0x0088])
	 */
	class UCondition_QuerrierinFrontofTarget_C : public UGbxCondition_Blueprint
	{
	public:
		float                                                      DotProduct;                                              // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
