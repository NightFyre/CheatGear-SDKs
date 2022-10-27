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
	 * BlueprintGeneratedClass Condition_MeleeStyle.Condition_MeleeStyle_C
	 * Size -> 0x0001 (FullSize[0x0089] - InheritedSize[0x0088])
	 */
	class UCondition_MeleeStyle_C : public UGbxCondition_Blueprint
	{
	public:
		unsigned char                                              MeleeStyle;                                              // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
