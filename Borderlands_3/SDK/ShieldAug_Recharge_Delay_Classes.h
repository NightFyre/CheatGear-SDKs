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
	 * BlueprintGeneratedClass ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UShieldAug_Recharge_Delay_C : public UAttributeValueResolver
	{
	public:
		struct FDataTableRowHandle                                 Table_ShieldAug;                                         // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UGbxAttributeData*                                   Attribute_AugTier;                                       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value);
		float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
