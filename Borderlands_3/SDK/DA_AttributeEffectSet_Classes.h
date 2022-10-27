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
	 * BlueprintGeneratedClass DA_AttributeEffectSet.DA_AttributeEffectSet_C
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDA_AttributeEffectSet_C : public UGbxDataAssetBlueprintable
	{
	public:
		TArray<struct FAttributeEffectData>                        AttributeEffects;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ApplyAttributeEffectSet(class AActor* ModifierContext, class AActor* ModifierTarget, TArray<struct FGbxAttributeModifierHandle>* AppliedAttributeEffects);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
