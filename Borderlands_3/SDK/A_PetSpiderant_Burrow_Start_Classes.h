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
	 * BlueprintGeneratedClass A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C
	 * Size -> 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
	 */
	class UA_PetSpiderant_Burrow_Start_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient

	public:
		void GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result);
		void GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result);
		void TraceToGround();
		void OnBegin(class AActor* Actor);
		void Notify_SetBurrowStance();
		void ExecuteUbergraph_A_PetSpiderant_Burrow_Start(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
