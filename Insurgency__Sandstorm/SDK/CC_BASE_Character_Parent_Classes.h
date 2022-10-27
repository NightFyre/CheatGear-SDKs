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
	 * DynamicClass CC_BASE_Character_Parent.CC_BASE_Character_Parent_C
	 * Size -> 0x0048 (FullSize[0x0498] - InheritedSize[0x0450])
	 */
	class UCC_BASE_Character_Parent_C : public UCosmeticItem
	{
	public:
		class FName                                                HeadMorph;                                               // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GenericMorph;                                            // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTuckedShirt;                                            // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTuckedPants;                                            // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFemale;                                               // 0x0462(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUKC[0x1];                                   // 0x0463(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                HeadGearMorph;                                           // 0x0464(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SS7B[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProfileCharacter*                                   K2Node_DynamicCast_AsProfile_Character;                  // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0478(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OHM[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier;                         // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x0488(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90CP[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetMorph(class USkeletalMeshComponent* bpp__Mesh__pf, const class FName& bpp__Morph__pf, bool bpp__Apply__pf);
		void GenerateHeadgearMorphName(const class FName& bpp__LocalMorphSuffix__pf, class FName* bpp__Morph__pf);
		void CheckMenuProfile(bool* bpp__Profile__pf);
		void CheckEyeHeadgearMorph(class FName* bpp__Name__pf, bool* bpp__NoMorph__pf);
		void CheckEquipment(ECarrierArmour* bpp__EquipmentCombination__pf);
		void BlueprintInitSharedState(class USharedCosmeticState* bpp__NewState__pf);
		void AttachmentSetMorph(const struct FCharacterCosmeticAttachedModel& bpp__Attachment__pf__const, const class FName& bpp__MorphxTargetxName__pfTT, TArray<struct FMorphTargetPair>* bpp__MorphxArray__pfT, struct FCharacterCosmeticAttachedModel* bpp__CharacterCosmeticAttachedModel__pf);
		void AttachmentSetMaterialSlot(int32_t bpp__Array__pf, const class FName& bpp__MaterialxSlotxName__pfTT, const struct FCharacterCosmeticAttachedModel& bpp__AttachmentReference__pf__const, struct FCharacterCosmeticAttachedModel* bpp__CharacterCosmeticAttachedModel__pf);
		void AttachmentSetMaterial(int32_t bpp__Array__pf, const class FName& bpp__MaterialxSlotxName__pfTT, class UMaterialInterface* bpp__Material__pf, const struct FCharacterCosmeticAttachedModel& bpp__AttachmentReference__pf, struct FCharacterCosmeticAttachedModel* bpp__CharacterCosmeticAttachedModel__pf);
		void AttachmentBreakMake(const struct FCharacterCosmeticAttachedModel& bpp__Attachment__pf, struct FCharacterCosmeticAttachedModel* bpp__Reference__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
