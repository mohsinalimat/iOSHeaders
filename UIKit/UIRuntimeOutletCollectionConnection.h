//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection
{
    NSString *runtimeCollectionClassName;
    _Bool addsContentToExistingCollection;
}

@property _Bool addsContentToExistingCollection; // @synthesize addsContentToExistingCollection;
@property(copy) NSString *runtimeCollectionClassName; // @synthesize runtimeCollectionClassName;
- (void).cxx_destruct;
- (id)description;
- (void)connectForSimulator;
- (void)connect;
- (void)performConnect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
