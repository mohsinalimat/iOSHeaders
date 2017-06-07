//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIDOMFeature-Protocol.h>

@class IKAppContext, NSString;
@protocol SKUIAnimatorDOMFeatureDelegate;

@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature>
{
    id <SKUIAnimatorDOMFeatureDelegate> _delegate;
    IKAppContext *_appContext;
    NSString *_featureName;
}

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(nonatomic) __weak id <SKUIAnimatorDOMFeatureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

