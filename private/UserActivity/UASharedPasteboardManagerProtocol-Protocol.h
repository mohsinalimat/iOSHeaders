//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class UASharedPasteboardInfo;

@protocol UASharedPasteboardManagerProtocol <NSObject>
- (void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)localPasteboardTypesDidChange:(UASharedPasteboardInfo *)arg1 forGeneration:(unsigned long long)arg2;
- (void)clearLocalPasteboardInformation;
- (void)fetchRemotePasteboardStatus:(void (^)(_Bool))arg1;
@end

