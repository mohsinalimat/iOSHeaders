//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation
{
    PCSCKKSItemModifyContext *_context;
}

@property(retain) PCSCKKSItemModifyContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)fetchPersistentRef:(id)arg1;
- (void)fetchCurrentItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)start;
- (id)initWithItemModifyContext:(id)arg1;

@end

