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
	 * DynamicClass CV_CAMO_BASE.CV_CAMO_BASE_C
	 * Size -> 0x0088 (FullSize[0x03D8] - InheritedSize[0x0350])
	 */
	class UCV_CAMO_BASE_C : public UCV_BASE_Dynamic_Character_Parent_C
	{
	public:
		class UINSSkeletalMeshComponent*                           K2Node_Event_SkeletalMesh;                               // 0x0350(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterCosmeticAttachedModel                     K2Node_Event_CosmeticModel;                              // 0x0358(0x0070) Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFirstPerson;                               // 0x03C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bBodyMesh;                                  // 0x03C9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J16M[0x6];                                   // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_CreateVariationDynamicMaterial_DynamicMaterial; // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BlueprintCosmeticItemMeshLoaded(class UINSSkeletalMeshComponent* bpp__SkeletalMesh__pf, const struct FCharacterCosmeticAttachedModel& bpp__CosmeticModel__pf__const, bool bpp__bFirstPerson__pf__const, bool bpp__bBodyMesh__pf__const);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
