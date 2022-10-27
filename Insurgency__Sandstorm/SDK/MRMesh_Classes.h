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
	 * Class MRMesh.MockDataMeshTrackerComponent
	 * Size -> 0x0070 (FullSize[0x0260] - InheritedSize[0x01F0])
	 */
	class UMockDataMeshTrackerComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnMeshTrackerUpdated;                                    // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       ScanWorld;                                               // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestNormals;                                          // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestVertexConfidence;                                 // 0x0202(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshTrackerVertexColorMode                                VertexColorMode;                                         // 0x0203(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3E5S[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FColor>                                      BlockVertexColors;                                       // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceZero;                           // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceOne;                            // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateInterval;                                          // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLDF[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    MRMesh;                                                  // 0x0240(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPL2[0x18];                                  // 0x0248(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
		void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MRMeshComponent
	 * Size -> 0x0080 (FullSize[0x0490] - InheritedSize[0x0410])
	 */
	class UMRMeshComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_BGTL[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreateMeshProxySections;                                // 0x0420(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateNavMeshOnMeshUpdate;                              // 0x0421(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNeverCreateCollisionMesh;                               // 0x0422(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KT3O[0x5];                                   // 0x0423(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0428(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UBodySetup*>                                  BodySetups;                                              // 0x0430(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  WireframeMaterial;                                       // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W80S[0x48];                                  // 0x0448(0x0048) MISSED OFFSET (PADDING)

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
