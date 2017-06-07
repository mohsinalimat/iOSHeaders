//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuotaDaemon/NSCopying-Protocol.h>

@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying>
{
    _Bool _deviceStorageAlmostFull;
    _Bool _photosCloudEnabled;
    _Bool _photosOptimizeEnabled;
    NSNumber *_photosLibrarySize;
}

+ (_Bool)isCachedCloudQuotaAlmostFullOrFull;
+ (_Bool)isDeviceStorageNearLowButNotLow;
+ (void)setUseHysteresisForDeviceStorageAlmostFull:(_Bool)arg1;
+ (_Bool)useHysteresisForDeviceStorageAlmostFull;
+ (void)setSimulatedDeviceStorageAlmostFull:(_Bool)arg1;
+ (_Bool)isSimulatedDeviceStorageAlmostFull;
+ (void)getPhotosLibraryUploadSizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getPhotosLibrarySizeWithCompletion:(CDUnknownBlockType)arg1;
+ (id)photosVideosCount;
+ (id)photosLibraryUploadSize;
+ (id)photosLibrarySize;
+ (_Bool)isPhotosOptimizeEnabled;
+ (_Bool)hasPhotosCloudEverBeenEnabled;
+ (_Bool)isPhotosCloudEnabled;
+ (_Bool)isDeviceStorageAlmostFull;
+ (id)currentConditions;
@property(copy, nonatomic) NSNumber *photosLibrarySize; // @synthesize photosLibrarySize=_photosLibrarySize;
@property(nonatomic, getter=isPhotosOptimizeEnabled) _Bool photosOptimizeEnabled; // @synthesize photosOptimizeEnabled=_photosOptimizeEnabled;
@property(nonatomic, getter=isPhotosCloudEnabled) _Bool photosCloudEnabled; // @synthesize photosCloudEnabled=_photosCloudEnabled;
@property(nonatomic, getter=isDeviceStorageAlmostFull) _Bool deviceStorageAlmostFull; // @synthesize deviceStorageAlmostFull=_deviceStorageAlmostFull;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentConditions;

@end

