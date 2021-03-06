//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob
{
    NSArray *_albumCloudGUIDsToDelete;
}

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;
@property(retain, nonatomic) NSArray *albumCloudGUIDsToDelete; // @synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

