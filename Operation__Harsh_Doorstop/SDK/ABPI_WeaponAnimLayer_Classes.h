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
	 * AnimBlueprintGeneratedClass ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UABPI_WeaponAnimLayer_C : public UAnimLayerInterface
	{
	public:
		void WeaponJumpLoop(const struct FPoseLink& LowerJumpLoop, struct FPoseLink* WeaponJumpLoop);
		void Move(const struct FPoseLink& Move, struct FPoseLink* Move2);
		void WeaponAdditive(struct FPoseLink* WeaponAdditive);
		void WeaponUpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* WeaponUpperBody);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
