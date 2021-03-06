//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol CLKUIResourceProviderDelegate;

@interface CLKUIResourceProvider : NSObject
{
    NSMutableSet *_uuidHistory;
    id <CLKUIResourceProviderDelegate> _delegate;
}

@property(readonly, nonatomic) NSSet *uuidHistory; // @synthesize uuidHistory=_uuidHistory;
@property(readonly, nonatomic) __weak id <CLKUIResourceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addUuidToHistory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

