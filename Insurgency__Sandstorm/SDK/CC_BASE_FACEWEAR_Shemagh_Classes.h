#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C
	 * Size -> 0x0088 (FullSize[0x05C0] - InheritedSize[0x0538])
	 */
	class UCC_BASE_FACEWEAR_Shemagh_C : public UCC_BASE_FACEWEAR_C
	{
	public:
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x0538(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_SkeletalMesh;                               // 0x0540(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterCosmeticAttachedModel                     K2Node_Event_CosmeticModel;                              // 0x0548(0x0070) Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFirstPerson;                               // 0x05B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bBodyMesh;                                  // 0x05B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HE4[0x6];                                   // 0x05BA(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetShemaghMorph(ECarrierArmour bpp__GearCombination__pf, class FName* bpp__Morph__pf);
		void BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
