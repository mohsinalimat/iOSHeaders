//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLEngineStore, CPLPlatformObject, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject>
{
    _Bool _superWasCalled;
    CPLPlatformObject *_platformObject;
    CPLEngineStore *_engineStore;
    NSString *_name;
}

+ (id)platformImplementationProtocol;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CPLEngineStore *engineStore; // @synthesize engineStore=_engineStore;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (_Bool)_checkSuperWasCalled;
- (id)statusDictionary;
- (id)status;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

