//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKBiologicalSexObject, HKBloodTypeObject, HKFitzpatrickSkinTypeObject, HKQuantity, HKWheelchairUseObject, NSArray, NSDateComponents, NSString;

@interface HKDemographicsInformationWrapper : NSObject
{
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    HKBiologicalSexObject *_biologicalSexObject;
    HKQuantity *_heightQuantity;
    HKQuantity *_weightQuantity;
    HKFitzpatrickSkinTypeObject *_fitzpatrickSkinTypeObject;
    HKBloodTypeObject *_bloodTypeObject;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSArray *_postalAddresses;
    NSArray *_emailAddresses;
}

@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(copy, nonatomic) HKWheelchairUseObject *wheelchairUseObject; // @synthesize wheelchairUseObject=_wheelchairUseObject;
@property(copy, nonatomic) HKBloodTypeObject *bloodTypeObject; // @synthesize bloodTypeObject=_bloodTypeObject;
@property(copy, nonatomic) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject; // @synthesize fitzpatrickSkinTypeObject=_fitzpatrickSkinTypeObject;
@property(copy, nonatomic) HKQuantity *weightQuantity; // @synthesize weightQuantity=_weightQuantity;
@property(copy, nonatomic) HKQuantity *heightQuantity; // @synthesize heightQuantity=_heightQuantity;
@property(copy, nonatomic) HKBiologicalSexObject *biologicalSexObject; // @synthesize biologicalSexObject=_biologicalSexObject;
@property(copy, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;

@end

