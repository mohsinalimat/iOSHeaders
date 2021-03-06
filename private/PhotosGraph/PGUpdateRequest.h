//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PGUpdateRequest : NSObject
{
    NSSet *_momentsToInsert;
    NSSet *_momentsToDelete;
    NSSet *_identifiersToDelete;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

+ (id)updateRequestWithMomentsToInsert:(id)arg1 momentsToDelete:(id)arg2 identifiersToDelete:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) NSSet *identifiersToDelete; // @synthesize identifiersToDelete=_identifiersToDelete;
@property(readonly, nonatomic) NSSet *momentsToDelete; // @synthesize momentsToDelete=_momentsToDelete;
@property(readonly, nonatomic) NSSet *momentsToInsert; // @synthesize momentsToInsert=_momentsToInsert;
- (void).cxx_destruct;

@end

