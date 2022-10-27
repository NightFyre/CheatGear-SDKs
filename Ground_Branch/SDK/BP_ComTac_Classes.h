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
	 * BlueprintGeneratedClass BP_ComTac.BP_ComTac_C
	 * Size -> 0x0060 (FullSize[0x0450] - InheritedSize[0x03F0])
	 */
	class ABP_ComTac_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_ComTac;                                               // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ComTacMichMesh[0x28];                                    // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ComTacOpsCoreMesh[0x28];                                 // 0x0428(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		void OnGoggleMeshLoaded_Event(class UObject* LoadedAsset);
		void OnAddedToItem(class AGBItem* NewParentItem);
		void SetMesh();
		void EncodeKit(class UVaRestJsonObject* ItemAsJson);
		void ExecuteUbergraph_BP_ComTac(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
