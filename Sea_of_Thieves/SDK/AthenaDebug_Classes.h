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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AthenaDebug.DrawDebugServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDrawDebugServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaDebug.DrawDebugService
	 * Size -> 0x00F8 (FullSize[0x04C0] - InheritedSize[0x03C8])
	 */
	class ADrawDebugService : public AActor
	{
	public:
		unsigned char                                              UnknownData_CF6W[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDrawDebugItemMessage>                       MessagesReplicated;                                      // 0x03D0(0x0010) Net, ZeroConstructor
		TArray<struct FDrawDebugItemSphere>                        SpheresReplicated;                                       // 0x03E0(0x0010) Net, ZeroConstructor, RepNotify
		TArray<struct FDrawDebugItemBox>                           BoxesReplicated;                                         // 0x03F0(0x0010) Net, ZeroConstructor, RepNotify
		TArray<struct FDrawDebugItemCapsule>                       CapsulesReplicated;                                      // 0x0400(0x0010) Net, ZeroConstructor, RepNotify
		TArray<struct FDrawDebugItemLine>                          LinesReplicated;                                         // 0x0410(0x0010) Net, ZeroConstructor, RepNotify
		TArray<struct FDrawDebugItemSector>                        SectorsReplicated;                                       // 0x0420(0x0010) Net, ZeroConstructor, RepNotify
		TArray<struct FDrawDebugItemString>                        StringsReplicated;                                       // 0x0430(0x0010) Net, ZeroConstructor, RepNotify
		bool                                                       IsDrawDebugActive;                                       // 0x0440(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_3WCF[0x7F];                                  // 0x0441(0x007F) MISSED OFFSET (PADDING)

	public:
		void OnRep_PersistentShapeChanged();
		void OnRep_IsDrawDebugActiveChanged();
		void Multicast_ClearGroup(const class FName& GroupName);
		void Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings);
		void Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres);
		void Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors);
		void Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines);
		void Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules);
		void Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaDebug.ShippingDebugActorSphereCollection
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class AShippingDebugActorSphereCollection : public AActor
	{
	public:
		TArray<struct FSphereData>                                 SphereList;                                              // 0x03C8(0x0010) Net, ZeroConstructor, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaDebug.TickableDebugDrawingServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTickableDebugDrawingServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaDebug.Videprinter
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class AVideprinter : public AActor
	{
	public:
		TArray<class FString>                                      OutputRingBuffer;                                        // 0x03C8(0x0010) Net, ZeroConstructor
		int32_t                                                    AddAt;                                                   // 0x03D8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Id;                                                      // 0x03DC(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9DR3[0xC];                                   // 0x03E4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaDebug.VideprinterServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVideprinterServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaDebug.VideprinterService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UVideprinterService : public UObject
	{
	public:
		unsigned char                                              UnknownData_CRZJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AVideprinter*>                                Videprinters;                                            // 0x0030(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
