def transform_bytes(v5_bytes):
    transformed_bytes = bytearray()

    for i in range(len(v5_bytes)):
        byte_value = v5_bytes[i]

        if i % 3 == 0:
            # Apply transformation for i % 3 == 0
            transformed = (byte_value ^ 0x33) ^ 0x5A
        elif i % 3 == 1:
            # Apply transformation for i % 3 == 1
            transformed = (byte_value ^ 0x33) - 16
        elif i % 3 == 2:
            # Apply transformation for i % 3 == 2
            transformed = (byte_value ^ 0x33) + 37
        
        # Append the transformed byte
        transformed_bytes.append(transformed & 0xFF)  # Ensure byte range (0-255)

    return bytes(transformed_bytes)

# Input string
v5 = "Xsl3BDxP"
v5_bytes = bytearray(v5, 'ascii')
transformed_bytes = transform_bytes(v5_bytes)
print("Transformed bytes:", transformed_bytes)
