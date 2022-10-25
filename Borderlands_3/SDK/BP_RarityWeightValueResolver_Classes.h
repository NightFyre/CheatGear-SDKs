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
	 * BlueprintGeneratedClass BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBP_RarityWeightValueResolver_C : public UAttributeValueResolver
	{
	public:
		struct FDataTableRowHandle                                 RarityTableRowHandle;                                    // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void ProposedNewVersionOfGetValue(class UObject* Context, float* Value);
		float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
