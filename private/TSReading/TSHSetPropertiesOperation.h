//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSHXmlOperation.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableString;

@interface TSHSetPropertiesOperation : TSHXmlOperation
{
    long long mParserDepth;
    long long mHrefDepth;
    long long mPropDepth;
    NSDictionary *mProperties;
    NSDictionary *mNamespacePrefixes;
    NSArray *mDeleteProps;
    _Bool mInProp;
    _Bool mInHref;
    _Bool mInStatus;
    NSMutableString *mPath;
    NSMutableArray *mResponseProperties;
}

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)description;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)request;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 properties:(id)arg5 deleteProperties:(id)arg6 namespacePrefixes:(id)arg7 delegate:(id)arg8;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 properties:(id)arg3 deleteProperties:(id)arg4 namespacePrefixes:(id)arg5 delegate:(id)arg6;

@end

