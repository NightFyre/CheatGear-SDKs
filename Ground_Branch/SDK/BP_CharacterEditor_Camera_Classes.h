#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C
	 * Size -> 0x0020 (FullSize[0x07C0] - InheritedSize[0x07A0])
	 */
	class ABP_CharacterEditor_Camera_C : public ACameraActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     FirearmAttachmentPoint;                                  // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x07B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn

	public:
		void FitToBounds(const struct FVector2D& InBounds, float InFieldOfView);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_CharacterEditor_Camera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
