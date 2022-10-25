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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DeliverableFramework.DeliverableRequirementFeatureOverride
	 * Size -> 0x0018
	 */
	struct FDeliverableRequirementFeatureOverride
	{
	public:
		class FName                                                FeatureName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UDeliverableRequirementBase*>                 Requirements;                                            // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
