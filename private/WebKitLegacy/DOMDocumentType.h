//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

@class DOMNamedNodeMap, NSString;

@interface DOMDocumentType : DOMNode
{
}

- (void)remove;
@property(readonly, copy) NSString *internalSubset;
@property(readonly, copy) NSString *systemId;
@property(readonly, copy) NSString *publicId;
@property(readonly) DOMNamedNodeMap *notations;
@property(readonly) DOMNamedNodeMap *entities;
@property(readonly, copy) NSString *name;

@end

