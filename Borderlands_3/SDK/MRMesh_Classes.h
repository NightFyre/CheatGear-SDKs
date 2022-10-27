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
	 * Class MRMesh.MeshReconstructorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReconstructorBase : public UObject
	{
	public:
		void StopReconstruction();
		void StartReconstruction();
		void PauseReconstruction();
		bool IsReconstructionStarted();
		bool IsReconstructionPaused();
		void DisconnectMRMesh();
		void ConnectMRMesh(class UMRMeshComponent* Mesh);
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MRMeshComponent
	 * Size -> 0x0050 (FullSize[0x0740] - InheritedSize[0x06F0])
	 */
	class UMRMeshComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_PLFU[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x06F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreateMeshProxySections;                                // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateNavMeshOnMeshUpdate;                              // 0x0701(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZH0N[0x6];                                   // 0x0702(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBodySetup*>                                  BodySetups;                                              // 0x0708(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P64C[0x28];                                  // 0x0718(0x0028) MISSED OFFSET (PADDING)

	public:
		bool IsConnected();
		void ForceNavMeshUpdate();
		void Clear();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
