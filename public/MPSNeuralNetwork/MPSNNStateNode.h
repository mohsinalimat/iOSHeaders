//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPSNNFilterNode;
@protocol MPSHandle;

@interface MPSNNStateNode : NSObject
{
    id <MPSHandle> _handle;
    MPSNNFilterNode *_parent;
}

@property(retain, nonatomic) id <MPSHandle> handle; // @synthesize handle=_handle;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)initWithParent:(id)arg1;

@end

