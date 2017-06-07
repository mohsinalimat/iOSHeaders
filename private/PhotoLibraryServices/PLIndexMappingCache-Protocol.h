//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDictionary, PLContainerChangeNotification;
@protocol NSObject><NSCopying;

@protocol PLIndexMappingCache <NSObject>
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(PLContainerChangeNotification *)arg1 remoteNotificationData:(NSDictionary *)arg2;

@optional
- (id)currentStateForChange;
@end

