//
//  PAYFormSingleLineTextField.h
//  paij
//
//  Created by Simon Seyer on 19.11.13.
//  Copyright (c) 2013 redpixtec. GmbH. All rights reserved.
//

#import "PAYFormTextField.h"

@interface PAYFormSingleLineTextField : PAYFormTextField

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, weak) id<UITextFieldDelegate> delegate;

+ (PAYFormFieldErrorStylingBlock)errorStylingBlock;
+ (void)setErrorStylingBlock:(PAYFormFieldErrorStylingBlock)block;

@end