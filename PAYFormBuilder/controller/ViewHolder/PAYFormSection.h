//
//  PAYFormSection.h
//  paij
//
//  Created by Simon Seyer on 31.10.13.
//  Copyright (c) 2013 redpixtec. GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PAYFormTableViewController.h"
#import "PAYFormHeader.h"


@class PAYFormField;
@class PAYFormButton;


@interface PAYFormSection : NSObject

@property (nonatomic, retain) PAYFormHeader *header;
@property (nonatomic, retain) NSMutableArray *views;
@property (nonatomic, retain) NSMutableArray *selectionButtonList;
@property (nonatomic, retain) PAYFormButton *selectedButton;

@property (nonatomic, weak) PAYFormField *firstFormField;
@property (nonatomic, copy) PAYFormSectionCompletionBlock completionBlock;

- (BOOL)initFieldJumpOrderWithNextSection:(PAYFormSection *)section;
- (PAYFormField *)firstFormField;

- (NSError *)validate;

@end