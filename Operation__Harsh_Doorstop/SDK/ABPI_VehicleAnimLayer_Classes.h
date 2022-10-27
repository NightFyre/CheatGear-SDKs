#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * AnimBlueprintGeneratedClass ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UABPI_VehicleAnimLayer_C : public UAnimLayerInterface
	{
	public:
		void VehicleFullBody(const struct FPoseLink& FullBody, struct FPoseLink* VehicleFullBody);
		void VehicleLowerBody(const struct FPoseLink& LowerBody, struct FPoseLink* VehicleLowerBody);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
